/*
 * XREFs of SmmMapAdapterObjectsToDomain @ 0x1C006E000
 * Callers:
 *     SmmIommuSwitchToTranslation @ 0x1C03C028C (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     SmmMapNonPagedObjectToIommu @ 0x1C006E278 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x1C006E424 (SmmMapPagedObjectToIommu.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006E694 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006E7C8 (SmmUnmapPagedObjectFromIommu.c)
 */

__int64 __fastcall SmmMapAdapterObjectsToDomain(__int64 a1)
{
  __int64 v2; // r15
  _QWORD **v3; // rsi
  KIRQL v4; // r13
  _QWORD *i; // rbx
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // edi
  _QWORD *v10; // rcx

  v2 = a1 + 64;
  v3 = (_QWORD **)(a1 + 40);
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 32));
  for ( i = *v3; ; i = (_QWORD *)*i )
  {
    if ( i == v3 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v6 = i - 8;
    v7 = (*((_DWORD *)i - 5) & 1) != 0 ? SmmMapNonPagedObjectToIommu(v6, i, v2) : SmmMapPagedObjectToIommu(v6, i, v2);
    v8 = v7;
    if ( v7 < 0 )
      break;
  }
  while ( 1 )
  {
    v3 = (_QWORD **)*v3;
    if ( v3 == i )
      break;
    v10 = i - 8;
    if ( (*((_DWORD *)i - 5) & 1) != 0 )
      SmmUnmapNonPagedObjectFromIommu(v10, i, v2);
    else
      SmmUnmapPagedObjectFromIommu(v10, i, v2);
  }
  WdLogSingleEntry2(3LL, a1, v8);
LABEL_9:
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 32), v4);
  return (unsigned int)v8;
}
