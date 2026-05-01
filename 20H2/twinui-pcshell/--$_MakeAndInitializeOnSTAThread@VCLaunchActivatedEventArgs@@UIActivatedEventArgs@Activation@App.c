/*
 * XREFs of ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_999dc00085dcb4e97168c8687495f75d_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_999dc00085dcb4e97168c8687495f75d_@@@Z @ 0x180074EA8
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007430C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180472660 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003704C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$QueueTask@V_lambda_c8b199a0feb076873244f725fed1af37_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_c8b199a0feb076873244f725fed1af37_@@@Z @ 0x180074F58 (--$QueueTask@V_lambda_c8b199a0feb076873244f725fed1af37_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_999dc00085dcb4e97168c8687495f75d_>(
        APTTYPE a1,
        int a2,
        struct IInspectable **a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ebx
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  APTTYPE pAptType; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  pAptType = a1;
  *a3 = 0LL;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA) )
    v8 = 65LL;
  else
    v8 = 33LL;
  v13 = 0;
  v15 = 0LL;
  v11[1] = &v15;
  v11[2] = &v13;
  v11[0] = a4;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))Windows::Internal::ComTaskPool::QueueTask<_lambda_c8b199a0feb076873244f725fed1af37_>)(
         v6,
         v8,
         v7,
         v11);
  if ( v9 >= 0 )
  {
    v9 = v13;
    if ( v13 >= 0 )
      v9 = Microsoft::WRL::WeakRef::InternalResolve(
             (Microsoft::WRL::WeakRef *)&v15,
             &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e,
             a3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)v9;
}
