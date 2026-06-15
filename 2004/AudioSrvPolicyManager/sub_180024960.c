/*
 * XREFs of sub_180024960 @ 0x180024960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180024960(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_18003F358;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 20);
  return a2;
}
