/*
 * XREFs of StorPortGetScatterGatherList @ 0x1C000FDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorPortGetScatterGatherList(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v2 = *(_QWORD *)(a2 + 96);
  else
    v2 = *(_QWORD *)(a2 + 48);
  return *(_QWORD *)(v2 + 112);
}
