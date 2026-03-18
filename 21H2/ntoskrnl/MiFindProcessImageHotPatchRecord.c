/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x14097323C
 * Callers:
 *     MiQuerySingleLoadedPatch @ 0x1409777B4 (MiQuerySingleLoadedPatch.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeQueryUserSidToken @ 0x14066A374 (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x1409730F0 (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x14097339C (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(__int64 a1, int a2, int a3, UNICODE_STRING *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *v9; // rdi
  __int64 UserSidHotPatchContext; // rax
  unsigned int HotPatchRecord; // esi
  bool v12; // zf
  _BYTE v14[80]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v14, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C533C0, 0LL);
  if ( !qword_140C533A8
    || (v9 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u),
        SeQueryUserSidToken((__int64)v9, v14, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v14)) == 0)
    || (HotPatchRecord = MiFindHotPatchRecord((__int64 *)(UserSidHotPatchContext + 24), 1uLL, a2, a3, a4),
        HotPatchRecord == -1073741275) )
  {
    HotPatchRecord = MiFindHotPatchRecord((__int64 *)&qword_140C533B0, 1uLL, a2, a3, a4);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C533C0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C533C0);
  KeAbPostRelease((ULONG_PTR)&qword_140C533C0);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 )
    ObfDereferenceObject(v9);
  return HotPatchRecord;
}
