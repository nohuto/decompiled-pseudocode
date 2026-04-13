/*
 * XREFs of _CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor$4 @ 0x1800D3667
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180014E20 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 80);
  }
  return result;
}
