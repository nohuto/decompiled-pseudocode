/*
 * XREFs of HalpPciConvertDevicePathToRid @ 0x1404CC7A0
 * Callers:
 *     HalpIommuDetermineReservedPciRid @ 0x1404C944C (HalpIommuDetermineReservedPciRid.c)
 * Callees:
 *     HalpPciReadSecondaryBusNumber @ 0x1404CC85C (HalpPciReadSecondaryBusNumber.c)
 */

__int64 __fastcall HalpPciConvertDevicePathToRid(unsigned __int16 *a1)
{
  unsigned __int16 v2; // cx
  __int64 result; // rax
  unsigned __int8 *v4; // rdi
  unsigned __int8 v5; // al
  unsigned int v6; // esi
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  unsigned __int8 v11; // [rsp+50h] [rbp+8h] BYREF

  a1[2] = 0;
  v2 = a1[3];
  if ( !v2 )
    return 3221225485LL;
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v5 = *((_BYTE *)a1 + 3);
  v6 = 1;
  v11 = v5;
  v7 = *v4;
  v8 = v4[1];
  if ( v2 <= 1u )
  {
LABEL_6:
    v10 = v8 | (unsigned __int16)(8 * (v7 | (unsigned __int16)(32 * v5)));
    result = 0LL;
    a1[2] = v10;
  }
  else
  {
    while ( 1 )
    {
      result = HalpPciReadSecondaryBusNumber(*a1, v5, v7, v8, (__int64)&v11);
      if ( (int)result < 0 )
        break;
      v9 = v6++;
      v7 = v4[2 * v9];
      v8 = v4[2 * v9 + 1];
      v5 = v11;
      if ( v6 >= a1[3] )
        goto LABEL_6;
    }
  }
  return result;
}
