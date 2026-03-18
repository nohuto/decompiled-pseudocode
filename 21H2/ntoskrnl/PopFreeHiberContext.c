/*
 * XREFs of PopFreeHiberContext @ 0x140800338
 * Callers:
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     MmReleaseDumpHibernateResources @ 0x14080051C (MmReleaseDumpHibernateResources.c)
 *     MmUnlockPreChargedPagedPool @ 0x140800560 (MmUnlockPreChargedPagedPool.c)
 *     PopClearHiberFileSignature @ 0x1408005A0 (PopClearHiberFileSignature.c)
 *     PopBcdClearPendingResume @ 0x140800968 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1408125C4 (BcdOpenStore.c)
 *     VslFreeSecureHibernateResources @ 0x1409320D0 (VslFreeSecureHibernateResources.c)
 *     BgkResumeFinished @ 0x140A4E360 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_UNKNOWN **PopFreeHiberContext()
{
  _UNKNOWN **result; // rax
  ULONG_PTR v1; // rbx
  void *v2; // rcx
  __int64 v3; // rdi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v1 = qword_140C22800;
  v11 = 0LL;
  if ( qword_140C22800 )
  {
    if ( (int)BcdOpenStore(0LL, 2LL, &v11) >= 0 )
    {
      PopBcdClearPendingResume(v11);
      BcdCloseStore(v11);
    }
    v2 = *(void **)(v1 + 240);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 240) = 0LL;
    }
    while ( 1 )
    {
      v3 = *(_QWORD *)(v1 + 128);
      if ( !v3 )
        break;
      *(_QWORD *)(v1 + 128) = *(_QWORD *)v3;
      *(_QWORD *)(v1 + 136) -= (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
      if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
      MmFreePagesFromMdl((PMDL)v3);
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    *(_QWORD *)(v1 + 232) = 0LL;
    v4 = (_QWORD **)(v1 + 64);
    *(_QWORD *)(v1 + 224) = 0LL;
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v5, 0);
      --*(_DWORD *)(v1 + 80);
    }
    if ( *(_QWORD *)(v1 + 168) && CrashdmpImageEntry && qword_140C54DF0 )
      qword_140C54DF0();
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopInternalAddToDumpFile(v1, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v1, 0LL);
    }
    if ( *(_DWORD *)(v1 + 188) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v1 + 28) = 0;
    MmUnlockPreChargedPagedPool(qword_140C22C10, Length);
    v8 = *(void **)(v1 + 288);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x72626968u);
    v9 = *(_QWORD *)(v1 + 304);
    if ( v9 )
      MmReleaseDumpHibernateResources(v9, (unsigned int)(*(_DWORD *)(v1 + 256) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v1 + 452) )
      VslFreeSecureHibernateResources();
    if ( (HvlpFlags & 2) != 0 && HvlpHibernateScratchPage )
    {
      ExFreePoolWithTag(HvlpHibernateScratchPage, 0x204C5648u);
      HvlpHibernateScratchPage = 0LL;
      HvlpHibernateScratchPageCount = 0;
    }
    result = (_UNKNOWN **)memset((void *)v1, 0, 0x1C8uLL);
    qword_140C22800 = 0LL;
  }
  return result;
}
