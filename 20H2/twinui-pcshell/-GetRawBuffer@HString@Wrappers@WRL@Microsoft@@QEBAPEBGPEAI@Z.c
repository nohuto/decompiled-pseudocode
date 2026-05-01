/*
 * XREFs of ?GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z @ 0x180137128
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180044BC4 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180046090 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     <none>
 */

PCWSTR __fastcall Microsoft::WRL::Wrappers::HString::GetRawBuffer(HSTRING *this, unsigned int *a2)
{
  return WindowsGetStringRawBuffer(*this, a2);
}
