/*
 * XREFs of ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800A3A10
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::dtor$1 @ 0x1800D6D56 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800A6518 (--1-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@TargetedCon.c)
 *     ??1?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAA@XZ @ 0x1800A67C4 (--1-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$allocat.c)
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::~LayoutResolver(HSTRING *this)
{
  std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::~vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>(this + 8);
  std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(this + 5);
  std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(this + 2);
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
  WindowsDeleteString(*this);
  *this = 0LL;
}
