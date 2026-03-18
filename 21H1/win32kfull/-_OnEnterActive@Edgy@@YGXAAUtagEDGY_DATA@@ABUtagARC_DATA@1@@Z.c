/*
 * XREFs of ?_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16EC4E
 * Callers:
 *     ?_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDE1 (-_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     _DoExplorerHangDetection@4 @ 0x11B94 (_DoExplorerHangDetection@4.c)
 *     ?_AdjustFrameHwnd@Edgy@@YGXQAXPAUHWND__@@@Z @ 0x16E290 (-_AdjustFrameHwnd@Edgy@@YGXQAXPAUHWND__@@@Z.c)
 *     ?_SqmEdgy@Edgy@@YGXABUtagEDGY_DATA@@ABUtagARC_DATA@1@H@Z @ 0x16EF43 (-_SqmEdgy@Edgy@@YGXABUtagEDGY_DATA@@ABUtagARC_DATA@1@H@Z.c)
 */

void __fastcall Edgy::_OnEnterActive(_DWORD *a1, int *a2)
{
  int v4; // edx
  int v5; // ecx
  const struct tagEDGY_DATA *v6; // [esp+0h] [ebp-Ch]
  struct tagDESKTOP *v7; // [esp+0h] [ebp-Ch]
  const struct Edgy::tagARC_DATA *v8; // [esp+4h] [ebp-8h]
  const struct tagTHREADINFO *v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  Edgy::_SqmEdgy((Edgy *)1, v6, v8, v10);
  DoExplorerHangDetection(v7, v9);
  v4 = a2[2];
  v5 = *a2;
  if ( a1[3] == 1 )
  {
    v4 = a1[44];
    v5 = a1[50];
  }
  Edgy::_AdjustFrameHwnd(v5, *(_DWORD *)(v4 + 4));
}
