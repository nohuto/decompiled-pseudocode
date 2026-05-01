/*
 * XREFs of ?ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x180084130
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800838A0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180083D0C (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18008415C (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 */

__int64 __fastcall ArActRestart(__int64 a1)
{
  int started; // eax

  if ( *(_BYTE *)(a1 + 52) == 1 )
  {
    return 0;
  }
  else
  {
    started = ArActStartAsync((struct _AR_ACTIVITY *)a1);
    if ( started >= 0 )
      return 0;
    return (unsigned int)started;
  }
}
