/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$19 @ 0x180158027
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A39DC (--1-$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_19(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 392) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 392) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>((__int64 *)(a2 + 176));
  }
  return result;
}
