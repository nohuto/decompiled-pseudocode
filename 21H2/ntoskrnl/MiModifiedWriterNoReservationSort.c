/*
 * XREFs of MiModifiedWriterNoReservationSort @ 0x140238080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiModifiedWriterNoReservationSort(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v2 = 48LL * *a1 - 0x58000000000LL;
  v3 = 48LL * *a2 - 0x58000000000LL;
  v4 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL;
  v5 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL;
  if ( v4 > v5 )
    return 1LL;
  if ( v4 < v5 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
  v7 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
  if ( v7 < v6 )
    return 0xFFFFFFFFLL;
  return v7 > v6;
}
