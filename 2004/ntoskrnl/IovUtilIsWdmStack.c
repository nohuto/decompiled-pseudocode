/*
 * XREFs of IovUtilIsWdmStack @ 0x1409D3BD8
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1409DFBD0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD60 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PpvUtilIsPdo @ 0x1409C2B74 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D3928 (IovUtilGetBottomDeviceObjectWithTag.c)
 */

_BOOL8 __fastcall IovUtilIsWdmStack(_QWORD *a1)
{
  PVOID BottomDeviceObjectWithTag; // rax
  BOOL IsPdo; // ebx
  PVOID v3; // r8

  BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(a1);
  IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObjectWithTag);
  ObfDereferenceObjectWithTag(v3, 0x49667256u);
  return IsPdo;
}
