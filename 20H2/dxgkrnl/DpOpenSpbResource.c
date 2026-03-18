/*
 * XREFs of DpOpenSpbResource @ 0x1C02D5B10
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000C3DC (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0046590 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     DpiCreateSpbResourceRecord @ 0x1C02D63C8 (DpiCreateSpbResourceRecord.c)
 */

__int64 __fastcall DpOpenSpbResource(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG ShareAccess,
        ULONG OpenOptions,
        _QWORD *a7)
{
  const UNICODE_STRING *v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rsi
  _DWORD *v15; // rdx
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  _DWORD *v18; // rax
  unsigned __int16 Length; // ax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+34h] [rbp-9Dh]
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-99h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-89h] BYREF
  __int64 v37; // [rsp+50h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-49h] BYREF
  wchar_t Dest[20]; // [rsp+98h] [rbp-39h] BYREF

  FileHandle = 0LL;
  v37 = 0LL;
  Destination = 0LL;
  v8 = a3;
  v9 = a2;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = a1;
  v34 = HIDWORD(a2);
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    LODWORD(v12) = -1073741811;
    v11[3] = 275LL;
    v11[4] = 21LL;
    v11[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v11);
    return (unsigned int)v12;
  }
  if ( a1
    && (v14 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v14 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v14 + 20) - 2) <= 1 )
  {
    v15 = *(_DWORD **)(v14 + 1288);
    LOBYTE(a3) = 0;
    if ( v15 )
    {
      a1 = 0LL;
      do
      {
        if ( (unsigned int)a1 >= *v15 )
          break;
        v16 = 0;
        v17 = v15[9 * a1 + 4];
        if ( v17 )
        {
          v18 = &v15[9 * a1 + 8];
          while ( *((_BYTE *)v18 - 12) != 0x84 || *(v18 - 1) != v9 || *v18 != v34 )
          {
            ++v16;
            v18 += 5;
            if ( v16 >= v17 )
              goto LABEL_19;
          }
          LOBYTE(a3) = 1;
        }
LABEL_19:
        a1 = (unsigned int)(a1 + 1);
      }
      while ( !(_BYTE)a3 );
      if ( (_BYTE)a3 )
      {
        if ( v8 )
          Length = v8->Length;
        else
          Length = 0;
        Destination.MaximumLength = Length + 80;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Length + 80), 0x74727044u);
        if ( !Destination.Buffer )
        {
          v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
          LODWORD(v12) = -1073741801;
          *(_QWORD *)(v24 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v24);
          return (unsigned int)v12;
        }
        LODWORD(v12) = RtlStringCbPrintfW(Dest, 0x22uLL, L"%0*I64x");
        if ( (int)v12 >= 0 )
          LODWORD(v12) = RtlUnicodeStringPrintf(&Destination, L"%s%s", L"\\Device\\RESOURCE_HUB\\", Dest);
        if ( (int)v12 >= 0 )
        {
          if ( v8 )
          {
            if ( *v8->Buffer != 92 )
              RtlAppendUnicodeToString(&Destination, L"\\");
            RtlAppendUnicodeStringToString(&Destination, v8);
          }
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v28 = ZwOpenFile(&FileHandle, a4, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
          v12 = v28;
          if ( v28 >= 0 )
          {
            v31 = DpiCreateSpbResourceRecord(v14, FileHandle, &v37);
            v12 = v31;
            if ( v31 >= 0 )
            {
              *a7 = v37;
LABEL_39:
              if ( Destination.Buffer )
                ExFreePoolWithTag(Destination.Buffer, 0);
              return (unsigned int)v12;
            }
          }
          v27 = WdLogNewEntry5_WdError(v30, v29);
          *(_QWORD *)(v27 + 24) = v12;
        }
        else
        {
          v27 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v27 + 24) = (int)v12;
        }
        WdLogEvent5_WdError(v27);
        goto LABEL_39;
      }
    }
    v32 = WdLogNewEntry5_WdWarning(a1, v15, a3);
    *(_QWORD *)(v32 + 24) = v34;
    WdLogEvent5_WdWarning(v32);
    return 3221225712LL;
  }
  else
  {
    v33 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v33 + 24) = v10;
    WdLogEvent5_WdWarning(v33);
    return 3221225711LL;
  }
}
