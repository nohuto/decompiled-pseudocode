/*
 * XREFs of PspEnableProcessWakeCounters @ 0x1405D6530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableProcessWakeCounters(__int64 a1)
{
  __int64 v1; // r8
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned __int32 v7; // eax

  v1 = *(_QWORD *)(a1 + 1296);
  if ( (*(_DWORD *)(v1 + 1320) & 0x1000) == 0 )
  {
    v4 = 0LL;
    v5 = (_QWORD *)(v1 + 888);
    v6 = 7LL;
    do
    {
      _m_prefetchw((const void *)(a1 + 4 * v4 + 2472));
      v7 = _InterlockedOr((volatile signed __int32 *)(a1 + 4 * v4++ + 2472), 0x80000000);
      *v5++ += v7;
      --v6;
    }
    while ( v6 );
    _m_prefetchw((const void *)(a1 + 2508));
    *(_QWORD *)(v1 + 944) += (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 2508), 0x80000000);
  }
  return 0LL;
}
