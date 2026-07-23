/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x140656F78
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x1405FC380 (NtAlpcDeleteSectionView.c)
 *     AlpcpLocateSectionView @ 0x140656EBC (AlpcpLocateSectionView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1405FA450 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  signed __int64 *v4; // rdi
  __int64 **v5; // r14
  int v7; // esi
  __int64 *i; // rbx

  v4 = (signed __int64 *)(a1 + 328);
  v5 = (__int64 **)(a1 + 336);
  v7 = 0;
  ExAcquirePushLockSharedEx(a1 + 328, 0LL);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v7 = AlpcpViewSearchCallbackFunction((ULONG_PTR)(i + 6), a4);
      if ( v7 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v7;
}
