/*
 * XREFs of ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x14001B880
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x140005F84 (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDeviceProcessNode *__fastcall CDeviceProcessNode::`vector deleting destructor'(CDeviceProcessNode *this, char a2)
{
  CDeviceProcessNode::~CDeviceProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
