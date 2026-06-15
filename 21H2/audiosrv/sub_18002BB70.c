/*
 * XREFs of sub_18002BB70 @ 0x18002BB70
 * Callers:
 *     sub_1800055B0 @ 0x1800055B0 (sub_1800055B0.c)
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_180005BE4 @ 0x180005BE4 (sub_180005BE4.c)
 *     sub_180005D54 @ 0x180005D54 (sub_180005D54.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_18001B770 @ 0x18001B770 (sub_18001B770.c)
 *     sub_18001B820 @ 0x18001B820 (sub_18001B820.c)
 *     sub_18002B988 @ 0x18002B988 (sub_18002B988.c)
 *     sub_180035850 @ 0x180035850 (sub_180035850.c)
 *     sub_18006481C @ 0x18006481C (sub_18006481C.c)
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800CAA70 @ 0x1800CAA70 (sub_1800CAA70.c)
 *     sub_1800CAC20 @ 0x1800CAC20 (sub_1800CAC20.c)
 *     sub_1800D31D4 @ 0x1800D31D4 (sub_1800D31D4.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 *     sub_1800FD670 @ 0x1800FD670 (sub_1800FD670.c)
 *     sub_1800FE8AC @ 0x1800FE8AC (sub_1800FE8AC.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18002BB70(__int64 *a1, const void *a2, int a3)
{
  __int64 v3; // rbx
  unsigned int *v6; // r9
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 result; // rax
  char *v12; // rdx
  __int64 v13; // rcx

  v3 = a3;
  if ( a3 )
  {
    if ( !a2 )
      goto LABEL_12;
    v6 = (unsigned int *)*a1;
    v7 = ((__int64)a2 - *a1) >> 1;
    v8 = (*(_DWORD *)(*a1 - 12) - a3) | (unsigned int)(1 - *(_DWORD *)(*a1 - 8));
    v9 = *(v6 - 4);
    if ( (int)v8 < 0 )
    {
      sub_18001B550(a1, a3);
      v6 = (unsigned int *)*a1;
    }
    v10 = 2 * v3;
    if ( v7 <= v9 )
    {
      v12 = (char *)v6 + 2 * v7;
      if ( !v10 )
        goto LABEL_9;
      if ( v6 && v12 )
      {
        memmove(v6, v12, 2 * v3);
        goto LABEL_9;
      }
    }
    else
    {
      if ( !v10 )
      {
LABEL_9:
        if ( (int)v3 >= 0 && (int)v3 <= *(_DWORD *)(*a1 - 12) )
        {
          *(_DWORD *)(*a1 - 16) = v3;
          result = *a1;
          *(_WORD *)(v10 + *a1) = 0;
          return result;
        }
LABEL_12:
        sub_1800B8610(2147942487LL);
      }
      if ( v6 )
      {
        memcpy(v6, a2, 2 * v3);
        goto LABEL_9;
      }
    }
    *(_DWORD *)o__errno(v8) = 22;
    o__invalid_parameter_noinfo(v13);
    goto LABEL_9;
  }
  return sub_18002C26C(a1);
}
