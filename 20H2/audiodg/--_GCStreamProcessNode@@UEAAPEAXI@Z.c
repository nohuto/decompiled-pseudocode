/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x14001B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140005E98 (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  CStreamProcessNode::~CStreamProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
