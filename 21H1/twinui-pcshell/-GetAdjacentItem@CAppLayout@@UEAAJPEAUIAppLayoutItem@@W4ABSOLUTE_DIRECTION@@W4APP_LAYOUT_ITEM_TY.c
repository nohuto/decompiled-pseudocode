/*
 * XREFs of ?GetAdjacentItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x18045DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x18045FFE4 (-_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_T.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetAdjacentItem(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  RTL_SRWLOCK *v10; // r14
  unsigned int AdjacentItem; // ebx

  v10 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  AdjacentItem = CAppLayout::_GetAdjacentItem(&a1[-5], a2, a3, a4, a5, a6, -2LL);
  if ( v10 )
    ReleaseSRWLockShared(v10);
  return AdjacentItem;
}
