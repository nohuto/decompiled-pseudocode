/*
 * XREFs of _NtGdiGradientFill@24 @ 0xBC35E
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGradientFill(HDC a1, char *Src, unsigned int a3, char *a4, unsigned int a5, int a6)
{
  size_t v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  char *v9; // ecx
  int v10; // edi
  char *v12; // [esp+10h] [ebp-24h]
  char *v13; // [esp+14h] [ebp-20h]
  int MaxCount; // [esp+18h] [ebp-1Ch]

  if ( (a6 & 0xFFFFFF00) != 0
    || !Src
    || !a4
    || !a3
    || !a5
    || a3 >= 0x80000000
    || a5 >= 0x80000000
    || (unsigned __int8)a6 > 2u
    || a3 > (unsigned int)&unk_271000 )
  {
    goto LABEL_24;
  }
  v6 = 16 * a3;
  v7 = 40960000 - 16 * a3;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= v7 >> 3 )
    {
      v8 = 8;
      goto LABEL_13;
    }
LABEL_24:
    EngSetLastError(0x57u);
    return 0;
  }
  if ( a5 > v7 / 0xC )
    goto LABEL_24;
  v8 = 12;
LABEL_13:
  MaxCount = a5 * v8;
  if ( a5 * v8 + v6 >= 0x2710000 )
  {
    EngSetLastError(8u);
    return 0;
  }
  v9 = (char *)PALLOCMEM2(a5 * v8 + v6, 1886221383, 0);
  v12 = v9;
  if ( v9 )
  {
    v13 = &v9[v6];
    if ( v6 && ((unsigned int)&Src[v6] > _MmUserProbeAddress || &Src[v6] < Src) )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v9, Src, v6);
    if ( MaxCount && ((unsigned int)&a4[MaxCount] > _MmUserProbeAddress || &a4[MaxCount] < a4) )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v13, a4, MaxCount);
    v10 = GreGradientFill(a1, a3, (int)v13, a5, a6);
    Win32FreePool(v12);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v10;
}
