/*
 * XREFs of ?_Change_array@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAXQEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@2@_K1@Z @ 0x1801A50A0
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A4248 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@0AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801A420C (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 */

__int64 __fastcall std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
      (__int64)v6,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)(328 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 328LL)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 328 * a3;
  result = a2 + 328 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
