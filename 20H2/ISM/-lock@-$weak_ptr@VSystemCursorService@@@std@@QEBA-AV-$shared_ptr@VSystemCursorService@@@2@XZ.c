/*
 * XREFs of ?lock@?$weak_ptr@VSystemCursorService@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180140AE0
 * Callers:
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013E90C (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x18013F1BC (-CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@.c)
 *     ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x18013F550 (-CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x18013F8C4 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 * Callees:
 *     ??$_Construct_from_weak@VSystemCursorService@@@?$_Ptr_base@VSystemCursorService@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService@@@1@@Z @ 0x18013D924 (--$_Construct_from_weak@VSystemCursorService@@@-$_Ptr_base@VSystemCursorService@@@std@@IEAA_NAEB.c)
 */

__int64 __fastcall std::weak_ptr<SystemCursorService>::lock(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  std::_Ptr_base<SystemCursorService>::_Construct_from_weak<SystemCursorService>((__int64)a2, a1);
  return v2;
}
