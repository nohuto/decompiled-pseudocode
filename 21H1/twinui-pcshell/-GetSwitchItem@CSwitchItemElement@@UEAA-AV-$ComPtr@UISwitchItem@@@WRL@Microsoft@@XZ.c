/*
 * XREFs of ?GetSwitchItem@CSwitchItemElement@@UEAA?AV?$ComPtr@UISwitchItem@@@WRL@Microsoft@@XZ @ 0x180374DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CSwitchItemElement::GetSwitchItem(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 360);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
