/*
 * XREFs of ??$?4V_lambda_bd949d55cc9ec63e01ac4519c3d80796_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_bd949d55cc9ec63e01ac4519c3d80796_@@@Z @ 0x18041C5D4
 * Callers:
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@Z @ 0x18041CA1C (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotificati_ea_18041CA1C.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1801401A4 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_bd949d55cc9ec63e01ac4519c3d80796_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_bd949d55cc9ec63e01ac4519c3d80796_,long (unsigned long)>::`vftable';
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
