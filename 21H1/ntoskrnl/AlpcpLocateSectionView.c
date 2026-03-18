/*
 * XREFs of AlpcpLocateSectionView @ 0x14070A904
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14070A6DC (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     AlpcpEnumerateResourcesPort @ 0x14070A9A4 (AlpcpEnumerateResourcesPort.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  signed __int64 *v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebp
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  v11 = a3;
  *a4 = 0LL;
  v4 = (signed __int64 *)(a2 + 352);
  v12 = 0LL;
  do
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)v4, 0LL);
    v9 = AlpcpEnumerateResourcesPort(a2, v7, v8, &v11);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  while ( v9 == -1073741267 );
  if ( !v12 )
    return 3221225793LL;
  *a4 = v12;
  return 0LL;
}
