/*
 * XREFs of ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804831E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180484348 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::ReplaceView(RTL_SRWLOCK *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  RTL_SRWLOCK *v8; // r14
  unsigned int v9; // ebx

  v8 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  v9 = CAppLayout::_ReplaceView(&a1[-5], a2, a3, a4, -2LL);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v9;
}
