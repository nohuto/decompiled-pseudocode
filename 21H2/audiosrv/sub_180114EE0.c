/*
 * XREFs of sub_180114EE0 @ 0x180114EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_180114EE0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a3 + 8) != 3 )
  {
    v3 = 63;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v3,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
      -2147024809);
    return 2147942487LL;
  }
  if ( *(int *)(a3 + 12) >= 9 )
  {
    v3 = 64;
    goto LABEL_3;
  }
  if ( *(int *)a3 >= 9 )
  {
    v3 = 65;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a3 + 16) & 2) != 0 )
  {
    v3 = 66;
    goto LABEL_3;
  }
  *(_BYTE *)(a1 + 344) = *(_DWORD *)(a3 + 12) == *(_DWORD *)a3;
  return sub_180114F70(a1);
}
