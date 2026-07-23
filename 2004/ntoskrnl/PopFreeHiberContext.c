/*
 * XREFs of PopFreeHiberContext @ 0x140767A78
 * Callers:
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140995F50 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x14035D760 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopInternalAddToDumpFile @ 0x14055FAA0 (PopInternalAddToDumpFile.c)
 *     MmReleaseDumpHibernateResources @ 0x140767C5C (MmReleaseDumpHibernateResources.c)
 *     MmUnlockPreChargedPagedPool @ 0x140767CA0 (MmUnlockPreChargedPagedPool.c)
 *     PopBcdClearPendingResume @ 0x14076F980 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x140770034 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140770A68 (BcdOpenStore.c)
 *     PopClearHiberFileSignature @ 0x14077C2C4 (PopClearHiberFileSignature.c)
 *     VslFreeSecureHibernateResources @ 0x14088C728 (VslFreeSecureHibernateResources.c)
 *     BgkResumeFinished @ 0x140995FFC (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

_UNKNOWN **__fastcall PopFreeHiberContext(UNICODE_STRING *a1)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v2; // rbx
  void *v3; // rcx
  __int64 v4; // rdi
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  void *v9; // rcx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = qword_140C22E80;
  BcdStoreHandle = 0LL;
  if ( qword_140C22E80 )
  {
    if ( BcdOpenStore(a1, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
    }
    v3 = *(void **)(v2 + 240);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(v2 + 240) = 0LL;
    }
    while ( 1 )
    {
      v4 = *(_QWORD *)(v2 + 128);
      if ( !v4 )
        break;
      *(_QWORD *)(v2 + 128) = *(_QWORD *)v4;
      *(_QWORD *)(v2 + 136) -= (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
      if ( (*(_BYTE *)(v4 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
      MmFreePagesFromMdl((PMDL)v4);
      ExFreePoolWithTag((PVOID)v4, 0);
    }
    *(_QWORD *)(v2 + 232) = 0LL;
    v5 = (_QWORD **)(v2 + 64);
    *(_QWORD *)(v2 + 224) = 0LL;
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v6, 0);
      --*(_DWORD *)(v2 + 80);
    }
    if ( *(_QWORD *)(v2 + 168) && CrashdmpImageEntry && qword_140C50A70 )
      qword_140C50A70();
    if ( *(_QWORD *)(v2 + 136) )
    {
      PopInternalAddToDumpFile(v2, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v2, 0LL);
    }
    if ( *(_DWORD *)(v2 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v2 + 28) = 0;
    MmUnlockPreChargedPagedPool(qword_140C23070, Length);
    v9 = *(void **)(v2 + 288);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72626968u);
    v10 = *(_QWORD *)(v2 + 304);
    if ( v10 )
      MmReleaseDumpHibernateResources(v10, (unsigned int)(*(_DWORD *)(v2 + 256) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v2 + 452) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
      HvlpHibernateScratchPageCount = 0;
    }
    result = (_UNKNOWN **)memset((void *)v2, 0, 0x1C8uLL);
    qword_140C22E80 = 0LL;
  }
  return result;
}
