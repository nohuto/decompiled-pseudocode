/*
 * XREFs of ?_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDE1
 * Callers:
 *     ?_OnInput@Edgy@@YG?AUtagSTATE_TRANSITION_DATA@1@AAUtagEDGY_DATA@@PAX@Z @ 0x16ED29 (-_OnInput@Edgy@@YG-AUtagSTATE_TRANSITION_DATA@1@AAUtagEDGY_DATA@@PAX@Z.c)
 * Callees:
 *     ?_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16EC4E (-_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 *     ?_OnEnterDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16EC93 (-_OnEnterDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 *     ?_OnEnterIdle@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16ECEB (-_OnEnterIdle@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 *     ?_OnLeaveDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDB2 (-_OnLeaveDisambiguation@Edgy@@YGXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z.c)
 */

const struct Edgy::tagARC_DATA *__fastcall Edgy::_OnStateTransition(_DWORD *a1, int a2, int *a3)
{
  const struct Edgy::tagARC_DATA *result; // eax
  Edgy *v6; // [esp+0h] [ebp-Ch]
  struct tagEDGY_DATA *v7; // [esp+4h] [ebp-8h]
  const struct Edgy::tagARC_DATA *v8; // [esp+8h] [ebp-4h]

  v8 = (const struct Edgy::tagARC_DATA *)a1[50];
  if ( a1[3] == 1 )
    Edgy::_OnLeaveDisambiguation((int)a1, a2, (int)a3);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      Edgy::_OnEnterDisambiguation(a1, a3);
    }
    else if ( a2 == 2 )
    {
      Edgy::_OnEnterActive(a1, a3);
    }
  }
  else
  {
    Edgy::_OnEnterIdle(v6, v7, v8);
  }
  result = v8;
  a1[3] = a2;
  return result;
}
