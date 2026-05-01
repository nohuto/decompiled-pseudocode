/*
 * XREFs of ?RemoveItemsByType@CAppLayout@@UEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x18045F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1804601CC (-_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayout::RemoveItemsByType(RTL_SRWLOCK *a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  CAppLayout::_RemoveItemsByType(&a1[-5], a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
