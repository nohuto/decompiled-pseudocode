/*
 * XREFs of CmpInitHiveFromFile @ 0x1406636E8
 * Callers:
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403F2550 (ZwQueryInformationFile.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068EB14 (CmpQueryFileSecurityDescriptor.c)
 *     CmpLogEvent @ 0x140866D74 (CmpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        int a2,
        _QWORD *a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
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
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  char v32; // bl
  ULONG_PTR v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ebx
  __int64 v38; // r8
  _DWORD *v39; // r9
  int v40; // r9d
  int FileInformationClass; // [rsp+20h] [rbp-E0h]
  char v42; // [rsp+60h] [rbp-A0h]
  char v43; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v44; // [rsp+62h] [rbp-9Eh]
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  int v46; // [rsp+68h] [rbp-98h]
  ULONG_PTR v47; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  void *v49; // [rsp+80h] [rbp-80h]
  HANDLE v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  HANDLE FileHandle; // [rsp+98h] [rbp-68h]
  void *v53; // [rsp+A0h] [rbp-60h]
  int v54; // [rsp+A8h] [rbp-58h]
  int v55; // [rsp+ACh] [rbp-54h]
  _QWORD *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  int v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h] BYREF
  char *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  __int128 v63; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-10h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  __int128 FileInformation; // [rsp+110h] [rbp+10h] BYREF
  __int128 v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+130h] [rbp+30h]
  _OWORD v69[3]; // [rsp+138h] [rbp+38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  wchar_t *Buffer; // [rsp+1A0h] [rbp+A0h]
  _DWORD v74[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v76; // [rsp+1D0h] [rbp+D0h]
  int v77; // [rsp+1D8h] [rbp+D8h]
  int v78; // [rsp+1DCh] [rbp+DCh]

  v62 = a9;
  v10 = a3;
  v49 = a10;
  v56 = a3;
  v12 = a6;
  v61 = a4;
  v59 = a2;
  v51 = a6;
  v63 = 0LL;
  v55 = 0;
  v64 = 0LL;
  v58 = 0;
  v47 = 0LL;
  v54 = 0;
  FileInformation = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  IoStatusBlock = 0LL;
  memset(v69, 0, sizeof(v69));
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
    {
      v72 = 2LL;
      v71 = v74;
      Buffer = Source->Buffer;
      v74[0] = Source->Length;
      v74[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_14002186D,
        0LL,
        0LL,
        4u,
        &v70);
      a4 = v61;
      v10 = v56;
    }
    v12 = v51;
  }
  v43 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  v44 = 0;
  FileHandle = 0LL;
  v57 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v50 = 0LL;
  v42 = 1;
  v53 = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v42 = 0;
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
    v60 = 0LL;
    v19 = CmpOpenHiveFile(Source, v18, v12, (__int64)&v60, 0LL, 0LL);
    FileSecurityDescriptor = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation((__int64)v49, 0, 28, v19, 16);
      v21 = FileHandle;
      goto LABEL_9;
    }
    v45 = v18;
    if ( v54 == 2 )
    {
      v43 = 1;
      v45 = v18 | 0x10;
    }
    v21 = FileHandle;
    if ( !v57 )
    {
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(FileHandle);
      if ( FileSecurityDescriptor < 0 )
      {
        SetFailureLocation((__int64)v49, 0, 28, FileSecurityDescriptor, 32);
        v17 = v53;
        goto LABEL_9;
      }
      v17 = v53;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v46 = 1;
      Hive = CmpOpenHiveFile(Source, v45, v51, 0LL, (__int64)v17, 0LL);
      FileSecurityDescriptor = Hive;
      if ( Hive < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v42 )
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
      v46 = 2;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v45, v51, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v42 )
        {
          FileInformationClass = 64;
          v40 = FileSecurityDescriptor;
LABEL_79:
          SetFailureLocation((__int64)v49, 0, 28, v40, FileInformationClass);
          goto LABEL_9;
        }
      }
      else
      {
        v14 = Handle;
      }
      Hive = CmpOpenHiveFile(Source, v45, v51, 0LL, (__int64)v17, 0LL);
      FileSecurityDescriptor = Hive;
      if ( Hive >= 0 )
      {
        v16 = v50;
        goto LABEL_31;
      }
      v16 = 0LL;
      v50 = 0LL;
      if ( v42 )
      {
        FileInformationClass = 80;
LABEL_78:
        v40 = Hive;
        goto LABEL_79;
      }
    }
LABEL_31:
    if ( !v42 )
    {
      if ( v46 != 2 )
      {
        v46 = v14 != 0LL;
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
        v50 = 0LL;
      }
      v46 = 0;
    }
LABEL_35:
    if ( !v44 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v44 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v44 )
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
      v14 = Handle;
      v16 = v50;
      v21 = FileHandle;
      v17 = v53;
      if ( !v44 )
      {
        FileSecurityDescriptor = -1073741431;
        goto LABEL_9;
      }
    }
    v28 = v49;
    *(_QWORD *)&v63 = v21;
    *((_QWORD *)&v63 + 1) = v14;
    v64 = (unsigned __int64)v16;
    memset(v49, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v47,
             v43 == 0 ? 5 : 0,
             v59,
             v46,
             0LL,
             (__int64)&v63,
             (__int64)Source,
             a5,
             0LL,
             0LL,
             v62,
             (__int64)v28);
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
    v12 = v51;
    v10 = v56;
    if ( v16 )
    {
      ZwClose(v16);
      v12 = v51;
      v16 = 0LL;
      v10 = v56;
      v50 = 0LL;
    }
  }
  if ( Hive < 0 )
  {
    FileInformationClass = 96;
    goto LABEL_78;
  }
  v32 = v43;
  if ( !v43 && (*(_DWORD *)(v47 + 4152) & 0x800) != 0 )
  {
    CmpAttachToRegistryProcess((__int64)v69, v29, v30, v31);
    v37 = CmpFlushHive(v47);
    KiUnstackDetachProcess((__int64)v69, 0LL, v38, v39);
    if ( v37 < 0 )
      SetFailureLocation((__int64)v49, 1, 1, v37, 230);
    v32 = 0;
  }
  *(_QWORD *)(v47 + 1840) = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
  v33 = v47;
  if ( *(_QWORD *)(v47 + 1840) )
  {
    *(_WORD *)(v47 + 1832) = Source->Length;
    *(_WORD *)(v47 + 1834) = Source->Length;
    memmove(*(void **)(v47 + 1840), Source->Buffer, Source->Length);
    v33 = v47;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v33 + 64) + 4088LL) & 4) != 0 )
    CmpLogEvent(&REG_EVENT_SELFHEAL);
  if ( ZwQueryInformationFile(v21, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    *(_QWORD *)(v47 + 4224) = v67;
  *(_DWORD *)(v47 + 184) = HIDWORD(v60);
  *v56 = v47;
  *v61 = v32;
  FileSecurityDescriptor = 0;
LABEL_9:
  if ( v44 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
    v14 = Handle;
    v16 = v50;
    v21 = FileHandle;
    v17 = v53;
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
    v78 = 0;
    v76 = &v45;
    v45 = FileSecurityDescriptor;
    v77 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140021843, 0LL, 0LL, 3u, &v75);
  }
  return (unsigned int)FileSecurityDescriptor;
}
