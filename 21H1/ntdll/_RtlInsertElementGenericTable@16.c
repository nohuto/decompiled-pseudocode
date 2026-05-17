/*
 * XREFs of _RtlInsertElementGenericTable@16 @ 0x4B2A7D60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInsertElementGenericTableFull@24 @ 0x4B2A7DA0 (_RtlInsertElementGenericTableFull@24.c)
 *     FindNodeOrParent @ 0x4B2A7F4E (FindNodeOrParent.c)
 */

int __thiscall RtlInsertElementGenericTable(void *this, int a2, void *Src, size_t Size, int a5)
{
  int NodeOrParent; // eax
  int v7; // [esp+0h] [ebp-4h] BYREF

  v7 = (int)this;
  NodeOrParent = FindNodeOrParent(&v7);
  return RtlInsertElementGenericTableFull(a2, Src, Size, a5, v7, NodeOrParent);
}
