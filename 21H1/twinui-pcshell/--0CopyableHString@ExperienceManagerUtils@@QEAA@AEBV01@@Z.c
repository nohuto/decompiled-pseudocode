/*
 * XREFs of ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x1800116C4
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x1800111D4 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     _lambda_d14133faddb8c28b80f2f473bceb745b_::_lambda_d14133faddb8c28b80f2f473bceb745b_ @ 0x180081B08 (_lambda_d14133faddb8c28b80f2f473bceb745b_--_lambda_d14133faddb8c28b80f2f473bceb745b_.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180011700 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

ExperienceManagerUtils::CopyableHString *__fastcall ExperienceManagerUtils::CopyableHString::CopyableHString(
        ExperienceManagerUtils::CopyableHString *this,
        const struct ExperienceManagerUtils::CopyableHString *a2)
{
  int v3; // eax
  HSTRING v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v3;
  if ( v3 >= 0 )
  {
    v5 = *(HSTRING *)a2;
    *((_DWORD *)this + 2) = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this, &v5);
  }
  return this;
}
