/*
 * XREFs of ?GetRawOutput@CInteractionContextWrapper@@UEAA?AUInteractionOutput@@XZ @ 0x1800DEF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionContextWrapper::GetRawOutput(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  v2 = *(_DWORD *)(a1 + 88);
  v3 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 32);
  v4 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 16) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 32) = v4;
  *(_QWORD *)(a2 + 48) = v3;
  *(_DWORD *)(a2 + 56) = v2;
  return a2;
}
