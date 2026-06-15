/*
 * XREFs of sub_180009630 @ 0x180009630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009630(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_18003E0D0;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 16);
  return a2;
}
