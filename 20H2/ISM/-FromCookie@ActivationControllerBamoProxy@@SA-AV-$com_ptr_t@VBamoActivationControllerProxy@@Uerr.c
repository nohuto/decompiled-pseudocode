/*
 * XREFs of ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180046168
 * Callers:
 *     ?RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x180014500 (-RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180045EF0 (-SetForegroundActivatableEntity@ForegroundManager@@UEAAJ_KW4ACTIVATIONOBJECTSTATECHANGE_REASON@@.c)
 *     ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAXPEAVActivatableEntityBamoPrincipal@@_K@Z @ 0x180105094 (-TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAXPEAVActivatableEntityBa.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180016718 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEAVBamoActivationControllerProxy@@@Z @ 0x18004607C (--$TryGetProxy@VBamoActivationControllerProxy@@@BaseBamoConnection@Bamo@Microsoft@@QEAAXIIPEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
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
