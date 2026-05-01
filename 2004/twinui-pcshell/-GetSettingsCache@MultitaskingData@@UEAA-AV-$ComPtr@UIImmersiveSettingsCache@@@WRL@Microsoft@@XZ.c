/*
 * XREFs of ?GetSettingsCache@MultitaskingData@@UEAA?AV?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@XZ @ 0x18038C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetSettingsCache(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 64);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
