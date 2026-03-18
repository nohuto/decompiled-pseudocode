/*
 * XREFs of ?redloop@@YGHXZ @ 0xB795E
 * Callers:
 *     ?inv_cmap@@YGXHPAURGBX@@HPAKPAE@Z @ 0xB7804 (-inv_cmap@@YGXHPAURGBX@@HPAKPAE@Z.c)
 * Callees:
 *     ?greenloop@@YGHH@Z @ 0xB7A58 (-greenloop@@YGHH@Z.c)
 */

int __stdcall redloop()
{
  int v0; // eax
  int v1; // ebx
  int v2; // esi
  int v3; // edi
  int v4; // edi
  int v5; // ebx
  int v7; // [esp+0h] [ebp-Ch]

  v0 = dword_273A0C;
  v1 = dword_273A18;
  dword_273A20 = dword_273A24;
  dword_273A2C = dword_273A30;
  v2 = 0;
  dword_273A08 = dword_273A0C;
  v3 = dword_273A00;
  if ( dword_273A00 < 32 )
  {
    while ( 1 )
    {
      if ( greenloop(v7) )
      {
        v2 = 1;
      }
      else if ( v2 )
      {
LABEL_7:
        v0 = dword_273A0C;
        break;
      }
      dword_273A08 += v1;
      ++v3;
      dword_273A20 += 4096;
      v1 += 128;
      dword_273A2C += 1024;
      if ( v3 >= 32 )
        goto LABEL_7;
    }
  }
  v4 = dword_273A18 - 128;
  dword_273A4C = dword_273A18 - 128;
  dword_273A08 = v0 - (dword_273A18 - 128);
  dword_273A20 = dword_273A24 - 4096;
  v5 = dword_273A00 - 1;
  dword_273A2C = dword_273A30 - 1024;
  if ( dword_273A00 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( greenloop(v7) )
      {
        v2 = 1;
      }
      else if ( v2 )
      {
LABEL_14:
        dword_273A4C = v4;
        return v2;
      }
      dword_273A20 -= 4096;
      v4 -= 128;
      dword_273A2C -= 1024;
      dword_273A08 -= v4;
      if ( --v5 < 0 )
        goto LABEL_14;
    }
  }
  return v2;
}
