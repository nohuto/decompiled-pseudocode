/*
 * XREFs of sub_18001A684 @ 0x18001A684
 * Callers:
 *     sub_18001B4B8 @ 0x18001B4B8 (sub_18001B4B8.c)
 *     sub_18001CC40 @ 0x18001CC40 (sub_18001CC40.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 */

bool __fastcall sub_18001A684(__int64 a1, int a2)
{
  char v2; // r8
  bool v3; // bl
  _DWORD *v4; // r10
  int v5; // edx
  _WORD *v6; // rax

  v2 = *(_BYTE *)(a1 + 2);
  v3 = v2 != 0;
  if ( v2 )
  {
    v4 = (_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)(a1 + 4) + a2;
    if ( *(_DWORD *)(a1 + 4) != v5 )
    {
      *v4 = v5;
      if ( v2 == 1 )
      {
        v6 = *(_WORD **)(a1 + 16);
        if ( v6 )
        {
          *v6 = v5;
        }
        else
        {
          *(_DWORD *)o__errno() = 22;
          o__invalid_parameter_noinfo();
        }
      }
      else if ( v2 == 2 )
      {
        sub_18000F088(*(void **)(a1 + 16), 4uLL, v4, 4uLL);
      }
    }
  }
  return v3;
}
