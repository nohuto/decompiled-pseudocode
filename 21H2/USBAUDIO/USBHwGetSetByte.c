/*
 * XREFs of USBHwGetSetByte @ 0x1C002CF60
 * Callers:
 *     USBCntrlGetSetBoolean @ 0x1C00328E0 (USBCntrlGetSetBoolean.c)
 *     USBType1SetCopyProtect @ 0x1C0033750 (USBType1SetCopyProtect.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C002CE08 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetByte(__int64 a1, __int16 a2, __int16 a3, __int16 a4, _BYTE *a5, UCHAR a6)
{
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int8 v10; // [rsp+60h] [rbp+8h] BYREF

  v7 = a5;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v10 = 0;
  if ( (a6 & 0x80u) == 0 )
    v10 = *a5;
  result = USBHwGetSetProperty(
             a1,
             0x1Bu,
             a6 >> 7,
             a6,
             a4,
             a3,
             a2,
             *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 2LL),
             &v10,
             1u);
  if ( (a6 & 0x80u) != 0 && (int)result >= 0 )
    *v7 = v10;
  return result;
}
