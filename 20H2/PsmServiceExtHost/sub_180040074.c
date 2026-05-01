/*
 * XREFs of sub_180040074 @ 0x180040074
 * Callers:
 *     sub_18003FFFC @ 0x18003FFFC (sub_18003FFFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180040074(int *a1)
{
  int v2; // edx
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)qword_1800B4F18 )
  {
    v2 = (unsigned __int8)qword_1800B4F18;
  }
  else if ( RtlGetNtProductType(&ProductType) && ProductType == NtProductWinNt )
  {
    v2 = 10;
    if ( MEMORY[0x7FFE02E8] > 0x83400u )
      v2 = 20;
  }
  else
  {
    v2 = 20;
  }
  *a1 = v2;
  return 0LL;
}
