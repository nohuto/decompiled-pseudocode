/*
 * XREFs of ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180105058
 * Callers:
 *     ?SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180045EF0 (-SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@.c)
 * Callees:
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800462A0 (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 */

_QWORD *__fastcall ActivationWatcherBamoPrincipal::TryFindActivatableEntity(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD v5[9]; // [rsp+20h] [rbp-48h] BYREF

  v5[1] = a3;
  v5[0] = off_1801B2C40;
  v5[7] = v5;
  ActivationWatcherBamoPrincipal::find_and_return_if(a1, a2, (__int64)v5);
  return a2;
}
