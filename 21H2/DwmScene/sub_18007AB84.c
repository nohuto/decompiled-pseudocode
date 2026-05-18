/*
 * XREFs of sub_18007AB84 @ 0x18007AB84
 * Callers:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 *     sub_18006B550 @ 0x18006B550 (sub_18006B550.c)
 *     sub_18006C9C0 @ 0x18006C9C0 (sub_18006C9C0.c)
 *     sub_180078A90 @ 0x180078A90 (sub_180078A90.c)
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 *     sub_18007C140 @ 0x18007C140 (sub_18007C140.c)
 *     sub_18007E1E8 @ 0x18007E1E8 (sub_18007E1E8.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 *     sub_1800BEB50 @ 0x1800BEB50 (sub_1800BEB50.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C2B80 @ 0x1800C2B80 (sub_1800C2B80.c)
 *     sub_1800C2EF0 @ 0x1800C2EF0 (sub_1800C2EF0.c)
 *     sub_1800C32D0 @ 0x1800C32D0 (sub_1800C32D0.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 *     sub_1800C3AEC @ 0x1800C3AEC (sub_1800C3AEC.c)
 *     sub_1800C3B38 @ 0x1800C3B38 (sub_1800C3B38.c)
 *     sub_1800C3B84 @ 0x1800C3B84 (sub_1800C3B84.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C4CFC @ 0x1800C4CFC (sub_1800C4CFC.c)
 *     sub_1800C4F74 @ 0x1800C4F74 (sub_1800C4F74.c)
 *     sub_1800C5C54 @ 0x1800C5C54 (sub_1800C5C54.c)
 *     sub_1800C6240 @ 0x1800C6240 (sub_1800C6240.c)
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 *     sub_1800C7690 @ 0x1800C7690 (sub_1800C7690.c)
 *     sub_1800C7A24 @ 0x1800C7A24 (sub_1800C7A24.c)
 *     sub_1800C8214 @ 0x1800C8214 (sub_1800C8214.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800CB014 @ 0x1800CB014 (sub_1800CB014.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800DD08C @ 0x1800DD08C (sub_1800DD08C.c)
 *     sub_1800EFBC0 @ 0x1800EFBC0 (sub_1800EFBC0.c)
 *     sub_1800F9F20 @ 0x1800F9F20 (sub_1800F9F20.c)
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007AB84(__int64 a1, int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = *(__int64 **)(a1 + 1080);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  if ( *((_BYTE *)v4 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  while ( !*((_BYTE *)v4 + 25) );
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 8) )
LABEL_8:
    v3 = v2;
  return v3[5];
}
