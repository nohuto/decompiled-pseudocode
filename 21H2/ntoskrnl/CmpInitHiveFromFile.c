/*
 * XREFs of CmpInitHiveFromFile @ 0x140670FA8
 * Callers:
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     SetFailureLocation @ 0x1402C4808 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1403FA5C0 (ZwQueryInformationFile.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140672000 (CmpQueryFileSecurityDescriptor.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpLogEvent @ 0x14086B714 (CmpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  char v29; // bl
  ULONG_PTR v30; // rcx
  int v31; // ebx
  int v32; // r9d
  int FileInformationClass; // [rsp+20h] [rbp-E0h]
  char v34; // [rsp+60h] [rbp-A0h]
  char v35; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v36; // [rsp+62h] [rbp-9Eh]
  int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  ULONG_PTR v39; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  void *v41; // [rsp+80h] [rbp-80h]
  HANDLE v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  HANDLE FileHandle; // [rsp+98h] [rbp-68h]
  void *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  _QWORD *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  int v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h] BYREF
  char *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  __int128 v55; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-10h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  __int128 FileInformation; // [rsp+110h] [rbp+10h] BYREF
  __int128 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+130h] [rbp+30h]
  _OWORD v61[3]; // [rsp+138h] [rbp+38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v63; // [rsp+190h] [rbp+90h]
  __int64 v64; // [rsp+198h] [rbp+98h]
  wchar_t *Buffer; // [rsp+1A0h] [rbp+A0h]
  _DWORD v66[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v68; // [rsp+1D0h] [rbp+D0h]
  int v69; // [rsp+1D8h] [rbp+D8h]
  int v70; // [rsp+1DCh] [rbp+DCh]

  v54 = a9;
  v10 = a3;
  v41 = a10;
  v48 = a3;
  v12 = a6;
  v53 = a4;
  v51 = a2;
  v43 = a6;
  v55 = 0LL;
  v47 = 0;
  v56 = 0LL;
  v50 = 0;
  v39 = 0LL;
  v46 = 0;
  FileInformation = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  IoStatusBlock = 0LL;
  memset(v61, 0, sizeof(v61));
  if ( (unsigned int)dword_140C02130 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
    {
      v64 = 2LL;
      v63 = v66;
      Buffer = Source->Buffer;
      v66[0] = Source->Length;
      v66[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_1400228CD,
        0LL,
        0LL,
        4u,
        &v62);
      a4 = v53;
      v10 = v48;
    }
    v12 = v43;
  }
  v35 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  v36 = 0;
  FileHandle = 0LL;
  v49 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v42 = 0LL;
  v34 = 1;
  v45 = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v34 = 0;
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
    v52 = 0LL;
    v19 = CmpOpenHiveFile(Source, v18, v12, (__int64)&v52, 0LL, 0LL);
    FileSecurityDescriptor = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation((__int64)v41, 0, 28, v19, 16);
      v21 = FileHandle;
      goto LABEL_9;
    }
    v37 = v18;
    if ( v46 == 2 )
    {
      v35 = 1;
      v37 = v18 | 0x10;
    }
    v21 = FileHandle;
    if ( !v49 )
    {
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(FileHandle);
      if ( FileSecurityDescriptor < 0 )
      {
        SetFailureLocation((__int64)v41, 0, 28, FileSecurityDescriptor, 32);
        v17 = v45;
        goto LABEL_9;
      }
      v17 = v45;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v38 = 1;
      Hive = CmpOpenHiveFile(Source, v37, v43, 0LL, (__int64)v17, 0LL);
      FileSecurityDescriptor = Hive;
      if ( Hive < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v34 )
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
      v38 = 2;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v37, v43, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v34 )
        {
          FileInformationClass = 64;
          v32 = FileSecurityDescriptor;
LABEL_79:
          SetFailureLocation((__int64)v41, 0, 28, v32, FileInformationClass);
          goto LABEL_9;
        }
      }
      else
      {
        v14 = Handle;
      }
      Hive = CmpOpenHiveFile(Source, v37, v43, 0LL, (__int64)v17, 0LL);
      FileSecurityDescriptor = Hive;
      if ( Hive >= 0 )
      {
        v16 = v42;
        goto LABEL_31;
      }
      v16 = 0LL;
      v42 = 0LL;
      if ( v34 )
      {
        FileInformationClass = 80;
LABEL_78:
        v32 = Hive;
        goto LABEL_79;
      }
    }
LABEL_31:
    if ( !v34 )
    {
      if ( v38 != 2 )
      {
        v38 = v14 != 0LL;
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
        v42 = 0LL;
      }
      v38 = 0;
    }
LABEL_35:
    if ( !v36 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v36 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v36 )
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = Handle;
      v16 = v42;
      v21 = FileHandle;
      v17 = v45;
      if ( !v36 )
      {
        FileSecurityDescriptor = -1073741431;
        goto LABEL_9;
      }
    }
    v25 = v41;
    *(_QWORD *)&v55 = v21;
    *((_QWORD *)&v55 + 1) = v14;
    v56 = (unsigned __int64)v16;
    memset(v41, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v39,
             v35 == 0 ? 5 : 0,
             v51,
             v38,
             0LL,
             (__int64)&v55,
             (__int64)Source,
             a5,
             0LL,
             0LL,
             v54,
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
    v12 = v43;
    v10 = v48;
    if ( v16 )
    {
      ZwClose(v16);
      v12 = v43;
      v16 = 0LL;
      v10 = v48;
      v42 = 0LL;
    }
  }
  if ( Hive < 0 )
  {
    FileInformationClass = 96;
    goto LABEL_78;
  }
  v29 = v35;
  if ( !v35 && (*(_DWORD *)(v39 + 4152) & 0x800) != 0 )
  {
    CmpAttachToRegistryProcess((__int64)v61, v26, v27, v28);
    v31 = CmpFlushHive(v39, 0xCu);
    KiUnstackDetachProcess((__int64)v61, 0);
    if ( v31 < 0 )
      SetFailureLocation((__int64)v41, 1, 1, v31, 230);
    v29 = 0;
  }
  *(_QWORD *)(v39 + 1840) = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
  v30 = v39;
  if ( *(_QWORD *)(v39 + 1840) )
  {
    *(_WORD *)(v39 + 1832) = Source->Length;
    *(_WORD *)(v39 + 1834) = Source->Length;
    memmove(*(void **)(v39 + 1840), Source->Buffer, Source->Length);
    v30 = v39;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v30 + 64) + 4088LL) & 4) != 0 )
    CmpLogEvent(&REG_EVENT_SELFHEAL);
  if ( ZwQueryInformationFile(v21, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    *(_QWORD *)(v39 + 4224) = v59;
  *(_DWORD *)(v39 + 184) = HIDWORD(v52);
  *v48 = v39;
  *v53 = v29;
  FileSecurityDescriptor = 0;
LABEL_9:
  if ( v36 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v14 = Handle;
    v16 = v42;
    v21 = FileHandle;
    v17 = v45;
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
    v70 = 0;
    v68 = &v37;
    v37 = FileSecurityDescriptor;
    v69 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_1400228A3, 0LL, 0LL, 3u, &v67);
  }
  return (unsigned int)FileSecurityDescriptor;
}
