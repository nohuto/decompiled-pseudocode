/*
 * XREFs of CmpInitHiveFromFile @ 0x1406A3018
 * Callers:
 *     CmpCmdHiveOpen @ 0x1406F2CB8 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14066AB70 (CmpQueryFileSecurityDescriptor.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLogEvent @ 0x14086B874 (CmpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        int a2,
        ULONG_PTR *a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  ULONG_PTR *v10; // r10
  __int64 v12; // r8
  HANDLE v14; // rdi
  int v15; // ecx
  HANDLE v16; // rsi
  void *v17; // r12
  int v18; // r14d
  signed int v19; // eax
  int v20; // ebx
  HANDLE v21; // r15
  int Hive; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rbx
  char v29; // bl
  ULONG_PTR v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  signed int v34; // ebx
  unsigned int v35; // r9d
  unsigned int FileInformationClass; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+60h] [rbp-A0h]
  char v38; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v39; // [rsp+62h] [rbp-9Eh]
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  void *v44; // [rsp+80h] [rbp-80h]
  HANDLE v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  HANDLE FileHandle; // [rsp+98h] [rbp-68h]
  void *v48; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  ULONG_PTR *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  int v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h] BYREF
  char *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  __int128 v58; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-10h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  __int128 FileInformation; // [rsp+110h] [rbp+10h] BYREF
  __int128 v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  _OWORD v64[3]; // [rsp+138h] [rbp+38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  wchar_t *Buffer; // [rsp+1A0h] [rbp+A0h]
  _DWORD v69[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v71; // [rsp+1D0h] [rbp+D0h]
  int v72; // [rsp+1D8h] [rbp+D8h]
  int v73; // [rsp+1DCh] [rbp+DCh]

  v57 = a9;
  v10 = a3;
  v44 = a10;
  v51 = a3;
  v12 = a6;
  v56 = a4;
  v54 = a2;
  v46 = a6;
  v58 = 0LL;
  v50 = 0;
  v59 = 0LL;
  v53 = 0;
  BugCheckParameter2 = 0LL;
  v49 = 0;
  FileInformation = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  IoStatusBlock = 0LL;
  memset(v64, 0, sizeof(v64));
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
    {
      v67 = 2LL;
      v66 = v69;
      Buffer = Source->Buffer;
      v69[0] = Source->Length;
      v69[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_140022963,
        0LL,
        0LL,
        4u,
        &v65);
      a4 = v56;
      v10 = v51;
    }
    v12 = v46;
  }
  v38 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  v39 = 0;
  FileHandle = 0LL;
  v52 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v45 = 0LL;
  v37 = 1;
  v48 = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v37 = 0;
    v18 = v15 | ((a2 & 0x40000 | 0x10000u) >> 11);
  }
  else
  {
    v18 = v15 | 2;
    if ( (a5 & 0x40000000) == 0 )
      v18 = (a5 >> 19) & 0x40;
    if ( *a4 )
      v18 |= 1u;
  }
  while ( 1 )
  {
    *v10 = 0LL;
    v55 = 0LL;
    v19 = CmpOpenHiveFile(Source, v18, v12, (__int64)&v55, 0LL, 0LL);
    v20 = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation((__int64)v44, 0, 28, v19, 0x10u);
      v21 = FileHandle;
      goto LABEL_9;
    }
    v40 = v18;
    if ( v49 == 2 )
    {
      v38 = 1;
      v40 = v18 | 0x10;
    }
    v21 = FileHandle;
    if ( !v52 )
    {
      v20 = CmpQueryFileSecurityDescriptor(FileHandle, &v48);
      if ( v20 < 0 )
      {
        SetFailureLocation((__int64)v44, 0, 28, v20, 0x20u);
        v17 = v48;
        goto LABEL_9;
      }
      v17 = v48;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v41 = 1;
      Hive = CmpOpenHiveFile(Source, v40, v46, 0LL, (__int64)v17, 0LL);
      v20 = Hive;
      if ( Hive < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v37 )
        {
          FileInformationClass = 48;
          goto LABEL_78;
        }
      }
      else
      {
        v14 = Handle;
      }
    }
    else
    {
      v41 = 2;
      v20 = CmpOpenHiveFile(Source, v40, v46, 0LL, (__int64)v17, 0LL);
      if ( v20 < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v37 )
        {
          FileInformationClass = 64;
          v35 = v20;
LABEL_79:
          SetFailureLocation((__int64)v44, 0, 28, v35, FileInformationClass);
          goto LABEL_9;
        }
      }
      else
      {
        v14 = Handle;
      }
      Hive = CmpOpenHiveFile(Source, v40, v46, 0LL, (__int64)v17, 0LL);
      v20 = Hive;
      if ( Hive >= 0 )
      {
        v16 = v45;
        goto LABEL_31;
      }
      v16 = 0LL;
      v45 = 0LL;
      if ( v37 )
      {
        FileInformationClass = 80;
LABEL_78:
        v35 = Hive;
        goto LABEL_79;
      }
    }
LABEL_31:
    if ( !v37 )
    {
      if ( v41 != 2 )
      {
        v41 = v14 != 0LL;
        goto LABEL_35;
      }
      if ( v14 )
      {
        if ( v16 )
          goto LABEL_35;
        ZwClose(v14);
        v14 = 0LL;
        Handle = 0LL;
      }
      if ( v16 )
      {
        ZwClose(v16);
        v16 = 0LL;
        v45 = 0LL;
      }
      v41 = 0;
    }
LABEL_35:
    if ( !v39 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v39 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v39 )
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
      v14 = Handle;
      v16 = v45;
      v21 = FileHandle;
      v17 = v48;
      if ( !v39 )
      {
        v20 = -1073741431;
        goto LABEL_9;
      }
    }
    v28 = v44;
    *(_QWORD *)&v58 = v21;
    *((_QWORD *)&v58 + 1) = v14;
    v59 = (unsigned __int64)v16;
    memset(v44, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&BugCheckParameter2,
             v38 == 0 ? 5 : 0,
             v54,
             v41,
             0LL,
             (__int64)&v58,
             (__int64)Source,
             a5,
             0LL,
             0LL,
             v57,
             (__int64)v28);
    v20 = Hive;
    if ( Hive != -1073741267 )
      break;
    ZwClose(v21);
    FileHandle = 0LL;
    if ( v14 )
    {
      ZwClose(v14);
      v14 = 0LL;
      Handle = 0LL;
    }
    v12 = v46;
    v10 = v51;
    if ( v16 )
    {
      ZwClose(v16);
      v12 = v46;
      v16 = 0LL;
      v10 = v51;
      v45 = 0LL;
    }
  }
  if ( Hive < 0 )
  {
    FileInformationClass = 96;
    goto LABEL_78;
  }
  v29 = v38;
  if ( !v38 && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x800) != 0 )
  {
    CmpAttachToRegistryProcess(v64);
    v34 = CmpFlushHive(BugCheckParameter2);
    KiUnstackDetachProcess((__int64)v64, 0LL);
    if ( v34 < 0 )
      SetFailureLocation((__int64)v44, 1, 1, v34, 0xE6u);
    v29 = 0;
  }
  *(_QWORD *)(BugCheckParameter2 + 1840) = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
  v30 = BugCheckParameter2;
  if ( *(_QWORD *)(BugCheckParameter2 + 1840) )
  {
    *(_WORD *)(BugCheckParameter2 + 1832) = Source->Length;
    *(_WORD *)(BugCheckParameter2 + 1834) = Source->Length;
    memmove(*(void **)(BugCheckParameter2 + 1840), Source->Buffer, Source->Length);
    v30 = BugCheckParameter2;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 64) + 4088LL) & 4) != 0 )
    CmpLogEvent(&REG_EVENT_SELFHEAL);
  if ( ZwQueryInformationFile(v21, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    *(_QWORD *)(BugCheckParameter2 + 4224) = v62;
  *(_DWORD *)(BugCheckParameter2 + 184) = HIDWORD(v55);
  *v51 = BugCheckParameter2;
  *v56 = v29;
  v20 = 0;
LABEL_9:
  if ( v39 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
    v14 = Handle;
    v16 = v45;
    v21 = FileHandle;
    v17 = v48;
  }
  if ( v21 )
    ZwClose(v21);
  if ( v14 )
    ZwClose(v14);
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( (unsigned int)dword_140C02130 > 4 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
  {
    v73 = 0;
    v71 = &v40;
    v40 = v20;
    v72 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)&word_14002298E, 0LL, 0LL, 3u, &v70);
  }
  return (unsigned int)v20;
}
