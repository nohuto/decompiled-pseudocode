/*
 * XREFs of CmpInitHiveFromFile @ 0x14061DFC8
 * Callers:
 *     CmpCmdHiveOpen @ 0x14065E3B8 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403F37E0 (ZwQueryInformationFile.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14063C974 (CmpQueryFileSecurityDescriptor.c)
 *     CmpLogEvent @ 0x1408680B8 (CmpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        int a2,
        _QWORD *a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  _QWORD *v10; // r10
  __int64 v12; // r8
  HANDLE v14; // rdi
  int v15; // ecx
  HANDLE v16; // rsi
  void *v17; // r12
  int v18; // r14d
  int v19; // eax
  int FileSecurityDescriptor; // ebx
  HANDLE v21; // r15
  int Hive; // eax
  struct _KTHREAD *CurrentThread; // rax
  void *v25; // rbx
  char v26; // bl
  ULONG_PTR v27; // rcx
  int v28; // ebx
  int v29; // r9d
  int FileInformationClass; // [rsp+20h] [rbp-E0h]
  char v31; // [rsp+60h] [rbp-A0h]
  char v32; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v33; // [rsp+62h] [rbp-9Eh]
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  ULONG_PTR v36; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  void *v38; // [rsp+80h] [rbp-80h]
  HANDLE v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  HANDLE FileHandle; // [rsp+98h] [rbp-68h]
  void *v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  _QWORD *v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+BCh] [rbp-44h]
  int v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h] BYREF
  char *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  __int128 v52; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-10h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  __int128 FileInformation; // [rsp+110h] [rbp+10h] BYREF
  __int128 v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+30h]
  _OWORD v58[3]; // [rsp+138h] [rbp+38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  wchar_t *Buffer; // [rsp+1A0h] [rbp+A0h]
  _DWORD v63[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v65; // [rsp+1D0h] [rbp+D0h]
  int v66; // [rsp+1D8h] [rbp+D8h]
  int v67; // [rsp+1DCh] [rbp+DCh]

  v51 = a9;
  v10 = a3;
  v38 = a10;
  v45 = a3;
  v12 = a6;
  v50 = a4;
  v48 = a2;
  v40 = a6;
  v52 = 0LL;
  v44 = 0;
  v53 = 0LL;
  v47 = 0;
  v36 = 0LL;
  v43 = 0;
  FileInformation = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  IoStatusBlock = 0LL;
  memset(v58, 0, sizeof(v58));
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
    {
      v61 = 2LL;
      v60 = v63;
      Buffer = Source->Buffer;
      v63[0] = Source->Length;
      v63[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_14002196D,
        0LL,
        0LL,
        4u,
        &v59);
      a4 = v50;
      v10 = v45;
    }
    v12 = v40;
  }
  v32 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  v33 = 0;
  FileHandle = 0LL;
  v46 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v39 = 0LL;
  v31 = 1;
  v42 = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v31 = 0;
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
    v49 = 0LL;
    v19 = CmpOpenHiveFile(Source, v18, v12, (__int64)&v49, 0LL, 0LL);
    FileSecurityDescriptor = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation((__int64)v38, 0, 28, v19, 16);
      v21 = FileHandle;
      goto LABEL_9;
    }
    v34 = v18;
    if ( v43 == 2 )
    {
      v32 = 1;
      v34 = v18 | 0x10;
    }
    v21 = FileHandle;
    if ( !v46 )
    {
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(FileHandle);
      if ( FileSecurityDescriptor < 0 )
      {
        SetFailureLocation((__int64)v38, 0, 28, FileSecurityDescriptor, 32);
        v17 = v42;
        goto LABEL_9;
      }
      v17 = v42;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v35 = 1;
      Hive = CmpOpenHiveFile(Source, v34, v40, 0LL, (__int64)v17, 0LL);
      FileSecurityDescriptor = Hive;
      if ( Hive < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v31 )
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
      v35 = 2;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v34, v40, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v31 )
        {
          FileInformationClass = 64;
          v29 = FileSecurityDescriptor;
LABEL_79:
          SetFailureLocation((__int64)v38, 0, 28, v29, FileInformationClass);
          goto LABEL_9;
        }
      }
      else
      {
        v14 = Handle;
      }
      Hive = CmpOpenHiveFile(Source, v34, v40, 0LL, (__int64)v17, 0LL);
      FileSecurityDescriptor = Hive;
      if ( Hive >= 0 )
      {
        v16 = v39;
        goto LABEL_31;
      }
      v16 = 0LL;
      v39 = 0LL;
      if ( v31 )
      {
        FileInformationClass = 80;
LABEL_78:
        v29 = Hive;
        goto LABEL_79;
      }
    }
LABEL_31:
    if ( !v31 )
    {
      if ( v35 != 2 )
      {
        v35 = v14 != 0LL;
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
        v39 = 0LL;
      }
      v35 = 0;
    }
LABEL_35:
    if ( !v33 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v33 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v33 )
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = Handle;
      v16 = v39;
      v21 = FileHandle;
      v17 = v42;
      if ( !v33 )
      {
        FileSecurityDescriptor = -1073741431;
        goto LABEL_9;
      }
    }
    v25 = v38;
    *(_QWORD *)&v52 = v21;
    *((_QWORD *)&v52 + 1) = v14;
    v53 = (unsigned __int64)v16;
    memset(v38, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v36,
             v32 == 0 ? 5 : 0,
             v48,
             v35,
             0LL,
             (__int64)&v52,
             (__int64)Source,
             a5,
             0LL,
             0LL,
             v51,
             (__int64)v25);
    FileSecurityDescriptor = Hive;
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
    v12 = v40;
    v10 = v45;
    if ( v16 )
    {
      ZwClose(v16);
      v12 = v40;
      v16 = 0LL;
      v10 = v45;
      v39 = 0LL;
    }
  }
  if ( Hive < 0 )
  {
    FileInformationClass = 96;
    goto LABEL_78;
  }
  v26 = v32;
  if ( !v32 && (*(_DWORD *)(v36 + 4152) & 0x800) != 0 )
  {
    CmpAttachToRegistryProcess((__int64)v58);
    v28 = CmpFlushHive(v36);
    KiUnstackDetachProcess((__int64)v58, 0LL);
    if ( v28 < 0 )
      SetFailureLocation((__int64)v38, 1, 1, v28, 230);
    v26 = 0;
  }
  *(_QWORD *)(v36 + 1840) = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
  v27 = v36;
  if ( *(_QWORD *)(v36 + 1840) )
  {
    *(_WORD *)(v36 + 1832) = Source->Length;
    *(_WORD *)(v36 + 1834) = Source->Length;
    memmove(*(void **)(v36 + 1840), Source->Buffer, Source->Length);
    v27 = v36;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v27 + 64) + 4088LL) & 4) != 0 )
    CmpLogEvent(&REG_EVENT_SELFHEAL);
  if ( ZwQueryInformationFile(v21, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    *(_QWORD *)(v36 + 4224) = v56;
  *(_DWORD *)(v36 + 184) = HIDWORD(v49);
  *v45 = v36;
  *v50 = v26;
  FileSecurityDescriptor = 0;
LABEL_9:
  if ( v33 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = Handle;
    v16 = v39;
    v21 = FileHandle;
    v17 = v42;
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
    v67 = 0;
    v65 = &v34;
    v34 = FileSecurityDescriptor;
    v66 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140021943, 0LL, 0LL, 3u, &v64);
  }
  return (unsigned int)FileSecurityDescriptor;
}
