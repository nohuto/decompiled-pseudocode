/*
 * XREFs of ?_OnEnterDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16EC93
 * Callers:
 *     ?_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDE1 (-_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::_OnEnterDisambiguation(_DWORD *a1, int *a2)
{
  int v4; // ecx

  EtwTraceEdgyDetectionStart();
  v4 = *a2;
  a1[44] = a2[2];
  a1[48] = a2[4];
  a1[49] = a2[3];
  a1[45] = a2[5];
  a1[46] = a2[6];
  a1[47] = a2[7];
  a1[43] = *(_DWORD *)(v4 + 40);
  a1[50] = v4;
}
