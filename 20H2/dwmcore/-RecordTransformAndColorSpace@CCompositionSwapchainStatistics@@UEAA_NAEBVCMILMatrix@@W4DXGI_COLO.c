/*
 * XREFs of ?RecordTransformAndColorSpace@CCompositionSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DED50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSwapchainStatistics::RecordTransformAndColorSpace(
        CCompositionSwapchainStatistics *this,
        const struct CMILMatrix *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  int v3; // eax
  bool result; // al

  *((_DWORD *)this + 11) = *(_DWORD *)a2;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 4);
  v3 = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 14) = v3;
  result = 1;
  *((_DWORD *)this + 17) = a3;
  return result;
}
