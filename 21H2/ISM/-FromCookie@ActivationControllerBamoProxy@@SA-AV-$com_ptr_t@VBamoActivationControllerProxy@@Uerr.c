/*
 * XREFs of ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180046F38
 * Callers:
 *     ?RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800141B0 (-RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180046CC0 (-SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@.c)
 *     ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAXPEAVActivatableEntityBamoPrincipal@@_K@Z @ 0x1801054F4 (-TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAXPEAVActivatableEntityBa.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800163C8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEAVBamoActivationControllerProxy@@@Z @ 0x180046E4C (--$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ActivationControllerBamoProxy::FromCookie(__int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rdi
  struct InputSystemServerConnection *BamoServerConnection; // rbp
  __int64 v6; // rcx

  v2 = a2;
  v4 = HIDWORD(a2);
  *a1 = 0LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = *a1;
  *a1 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  Microsoft::Bamo::BaseBamoConnection::TryGetProxy<BamoActivationControllerProxy>(
    (__int64)BamoServerConnection,
    v4,
    v2,
    a1);
  return a1;
}
