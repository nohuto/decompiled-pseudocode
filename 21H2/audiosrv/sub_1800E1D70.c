/*
 * XREFs of sub_1800E1D70 @ 0x1800E1D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E1D70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_18014A208;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return a2;
}
