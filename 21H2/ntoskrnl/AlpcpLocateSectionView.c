/*
 * XREFs of AlpcpLocateSectionView @ 0x1407A4858
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     AlpcpEnumerateResourcesPort @ 0x1407A4914 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDereferenceView @ 0x140965B94 (AlpcpDereferenceView.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  signed __int64 *v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r14d
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v12 = a3;
  *a4 = 0LL;
  v4 = (signed __int64 *)(a2 + 352);
  v13 = 0LL;
  do
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)v4, 0LL);
    v10 = AlpcpEnumerateResourcesPort(a2, v8, v9, &v12);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  while ( v10 == -1073741267 );
  if ( !v13 )
    return 3221225793LL;
  if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) != a1 )
  {
    AlpcpDereferenceView(v13);
    return 3221225793LL;
  }
  *a4 = v13;
  return 0LL;
}
