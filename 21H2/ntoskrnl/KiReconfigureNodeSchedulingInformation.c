/*
 * XREFs of KiReconfigureNodeSchedulingInformation @ 0x1405127E8
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1409B02C0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReconfigureNodeSchedulingInformation(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  *(_QWORD *)(a1 + 160) |= a2[25];
  v2 = *(_QWORD *)(a1 + 376);
  if ( (v2 & a2[4237]) == 0 )
    *(_QWORD *)(a1 + 376) = a2[25] | v2;
  *(_QWORD *)(a1 + 152) |= a2[4232];
  result = a2[25];
  if ( a2[4235] != result )
    *(_BYTE *)(a1 + 181) |= 0x20u;
  return result;
}
