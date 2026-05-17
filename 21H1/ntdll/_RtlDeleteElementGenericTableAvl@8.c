/*
 * XREFs of _RtlDeleteElementGenericTableAvl@8 @ 0x4B2A6DC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteElementGenericTableAvlEx@8 @ 0x4B2A6E00 (_RtlDeleteElementGenericTableAvlEx@8.c)
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 */

char __thiscall RtlDeleteElementGenericTableAvl(void *this, int a2, int a3)
{
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this;
  if ( FindNodeOrParent(&v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(a2, v4);
  return 1;
}
