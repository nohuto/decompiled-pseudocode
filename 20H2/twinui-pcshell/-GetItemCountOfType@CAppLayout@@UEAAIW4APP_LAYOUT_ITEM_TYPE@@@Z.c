/*
 * XREFs of ?GetItemCountOfType@CAppLayout@@UEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x180481790
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1804837BC (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::GetItemCountOfType(RTL_SRWLOCK *a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int ItemCountOfType; // ebx

  v4 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  ItemCountOfType = CAppLayout::_GetItemCountOfType(&a1[-5], a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return ItemCountOfType;
}
