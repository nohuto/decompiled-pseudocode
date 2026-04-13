/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@EEAAXXZ @ 0x1800A6ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Ref_count_obj<CreativeFramework::TargetedContentLayoutHelpers::Item>::_Destroy(__int64 a1)
{
  HRESULT result; // eax

  WindowsDeleteString(*(HSTRING *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0LL;
  result = WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
