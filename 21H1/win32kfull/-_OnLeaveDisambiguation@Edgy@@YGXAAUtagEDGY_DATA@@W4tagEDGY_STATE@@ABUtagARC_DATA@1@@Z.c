/*
 * XREFs of ?_OnLeaveDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDB2
 * Callers:
 *     ?_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDE1 (-_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?_SqmEdgy@Edgy@@YGXABUtagEDGY_DATA@@ABUtagARC_DATA@1@H@Z @ 0x16EF43 (-_SqmEdgy@Edgy@@YGXABUtagEDGY_DATA@@ABUtagARC_DATA@1@H@Z.c)
 */

void __fastcall Edgy::_OnLeaveDisambiguation(int a1, int a2, int a3)
{
  const struct tagEDGY_DATA *v4; // [esp+0h] [ebp-Ch]
  const struct Edgy::tagARC_DATA *v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  EtwTraceEdgyDetectionStop(*(_DWORD *)(a3 + 4));
  if ( a2 != 2 )
    Edgy::_SqmEdgy(0, v4, v5, v6);
}
