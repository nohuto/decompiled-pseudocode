/*
 * XREFs of ??$?4V_lambda_981d6f8b111e5fca3cbe4796bc87df4f_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_981d6f8b111e5fca3cbe4796bc87df4f_@@@Z @ 0x180404600
 * Callers:
 *     ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x18040484C (--$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1801401A4 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_981d6f8b111e5fca3cbe4796bc87df4f_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_981d6f8b111e5fca3cbe4796bc87df4f_,long (unsigned long)>::`vftable';
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  result = a1;
  a1[14] = a1 + 1;
  return result;
}
