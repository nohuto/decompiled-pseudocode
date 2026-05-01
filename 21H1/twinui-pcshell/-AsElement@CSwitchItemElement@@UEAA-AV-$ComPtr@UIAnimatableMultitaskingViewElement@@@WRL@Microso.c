/*
 * XREFs of ?AsElement@CSwitchItemElement@@UEAA?AV?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@XZ @ 0x18037FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CSwitchItemElement::AsElement(__int64 a1, __int64 *a2)
{
  *a2 = a1 - 224;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
