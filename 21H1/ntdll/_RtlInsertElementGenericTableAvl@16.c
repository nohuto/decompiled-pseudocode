/*
 * XREFs of _RtlInsertElementGenericTableAvl@16 @ 0x4B2A6EE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInsertElementGenericTableFullAvl@24 @ 0x4B2A6F20 (_RtlInsertElementGenericTableFullAvl@24.c)
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 */

int __thiscall RtlInsertElementGenericTableAvl(void *this, int a2, void *Src, size_t Size, int a5)
{
  int NodeOrParent; // eax
  int v7; // [esp+0h] [ebp-4h] BYREF

  v7 = (int)this;
  NodeOrParent = FindNodeOrParent(&v7);
  return RtlInsertElementGenericTableFullAvl(a2, Src, Size, a5, v7, NodeOrParent);
}
