/*
 * XREFs of DbgkSendSystemDllMessages @ 0x140886F3C
 * Callers:
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408878F4 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14023FDE8 (RtlStringCbCopyW.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     PsQuerySystemDllInfo @ 0x14069282C (PsQuerySystemDllInfo.c)
 *     PsWow64GetProcessNtdllType @ 0x1406AD2EC (PsWow64GetProcessNtdllType.c)
 *     DbgkpQueueMessage @ 0x140887F78 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x140889BB4 (DbgkpSendApiMessage.c)
 */

void __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  PVOID v4; // rbx
  _KPROCESS *Process; // r15
  _DWORD *v6; // rsi
  int i; // r14d
  __int64 SystemDllInfo; // rax
  __int64 v9; // rdx
  void *v10; // r13
  PIMAGE_NT_HEADERS v11; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char v13; // [rsp+30h] [rbp-108h]
  wchar_t *Teb; // [rsp+38h] [rbp-100h]
  __int64 v16; // [rsp+50h] [rbp-E8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v20[48]; // [rsp+C8h] [rbp-70h] BYREF

  v4 = a1;
  memset(v20, 0, sizeof(v20));
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a1 )
    Process = (_KPROCESS *)a1[68];
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a3 + 12;
  for ( i = 0; i < 6; ++i )
  {
    SystemDllInfo = PsQuerySystemDllInfo(i);
    v9 = SystemDllInfo;
    v16 = SystemDllInfo;
    if ( SystemDllInfo
      && (i <= 0
       || *(_WORD *)(SystemDllInfo + 2)
       && Process[1].AffinityPadding[10]
       && i == (unsigned int)PsWow64GetProcessNtdllType((__int64)Process)) )
    {
      *(_OWORD *)v6 = 0LL;
      *((_OWORD *)v6 + 1) = 0LL;
      Teb = 0LL;
      v10 = *(void **)(v9 + 24);
      *((_QWORD *)v6 + 1) = v10;
      if ( v4 && i )
      {
        v13 = 1;
        KiStackAttachProcess(Process, 0, (__int64)v20);
      }
      else
      {
        v13 = 0;
      }
      v11 = RtlImageNtHeader(v10);
      if ( v11 )
      {
        v6[4] = v11->FileHeader.PointerToSymbolTable;
        v6[5] = v11->FileHeader.NumberOfSymbols;
      }
      if ( !v4 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = (wchar_t *)CurrentThread->Teb;
        if ( Teb )
        {
          RtlStringCbCopyW(Teb + 2356, 0x20AuLL, *(NTSTRSAFE_PCWSTR *)(v16 + 40));
          *((_QWORD *)Teb + 5) = Teb + 2356;
          *((_QWORD *)v6 + 3) = Teb + 20;
          v4 = a1;
        }
      }
      if ( v13 )
        KiUnstackDetachProcess((__int64)v20, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 1600;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v16 + 8);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile((PHANDLE)v6, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
        *(_QWORD *)v6 = 0LL;
      *a3 = 5242920;
      a3[1] = 8;
      a3[10] = 5;
      if ( v4 )
      {
        if ( (int)DbgkpQueueMessage(Process, v4, a2) < 0 && *(_QWORD *)v6 )
          ObCloseHandle(*(HANDLE *)v6, 0);
      }
      else
      {
        DbgkpSendApiMessage(Process);
        if ( *(_QWORD *)v6 )
          ObCloseHandle(*(HANDLE *)v6, 0);
        if ( Teb )
          *((_QWORD *)Teb + 5) = 0LL;
      }
    }
  }
}
