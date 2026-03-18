/*
 * XREFs of ?_OnInput@Edgy@@YG?AUtagSTATE_TRANSITION_DATA@1@AAUtagEDGY_DATA@@PAX@Z @ 0x16ED29
 * Callers:
 *     ?ProcessInput@Edgy@@YGHPAXPAPAX@Z @ 0x16E186 (-ProcessInput@Edgy@@YGHPAXPAPAX@Z.c)
 * Callees:
 *     ?_GetArcData@Edgy@@YG?AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z @ 0x16E34D (-_GetArcData@Edgy@@YG-AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z.c)
 *     ?_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDE1 (-_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z.c)
 */

int __fastcall Edgy::_OnInput(int a1, int a2)
{
  int v3; // edi
  int v4; // esi
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v8; // [esp+Ch] [ebp-44h]
  _DWORD v9[8]; // [esp+10h] [ebp-40h] BYREF
  int v10[8]; // [esp+30h] [ebp-20h] BYREF

  qmemcpy(v9, Edgy::_GetArcData(a1, a2, v10), sizeof(v9));
  v3 = *(_DWORD *)(a1 + 12);
  v4 = 4;
  v5 = dword_2585C0[v3];
  v8 = dword_2585C4[v3];
  if ( v5 < v8 )
  {
    v6 = 4 * v5;
    while ( (v9[1] & dword_258448[v6]) != dword_25844C[v6] )
    {
      ++v5;
      v6 += 4;
      if ( v5 >= v8 )
        goto LABEL_7;
    }
    v4 = dword_258444[v6];
  }
LABEL_7:
  if ( v3 != v4 )
    Edgy::_OnStateTransition(a1, v4, v9);
  return v4;
}
