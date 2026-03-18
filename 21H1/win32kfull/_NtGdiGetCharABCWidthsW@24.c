/*
 * XREFs of _NtGdiGetCharABCWidthsW@24 @ 0x8636A
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _GreGetCharABCWidthsW@24 @ 0x866BE (_GreGetCharABCWidthsW@24.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, void *a4, int a5, char *a6)
{
  const void *v6; // esi
  ULONG v8; // edx
  int CharABCWidthsW; // [esp+10h] [ebp-2Ch]
  int v10; // [esp+14h] [ebp-28h]
  int MaxCount; // [esp+18h] [ebp-24h]
  void *v12; // [esp+1Ch] [ebp-20h]
  void *Src; // [esp+20h] [ebp-1Ch]

  CharABCWidthsW = 0;
  Src = 0;
  v12 = 0;
  v10 = 0;
  MaxCount = 0;
  if ( !a6 )
    return 0;
  v6 = a4;
  if ( a4 )
  {
    v10 = 1;
    if ( a3 )
    {
      if ( a3 <= 0x1388000 )
        v12 = PALLOCMEM2(2 * a3, 1886221383, 0);
    }
  }
  if ( !v10 || v12 )
  {
    if ( a3 <= 0x341555 )
    {
      MaxCount = 12 * a3;
      v6 = a4;
      Src = (void *)AllocFreeTmpBuffer(12 * a3);
    }
    if ( Src )
    {
      if ( v10 )
      {
        v8 = (ULONG)v6 + 2 * a3;
        if ( v8 < (unsigned int)v6 || v8 > _MmUserProbeAddress )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v12, v6, 2 * a3);
      }
      CharABCWidthsW = GreGetCharABCWidthsW(a1, a3, (int)v12, a5, (int)Src);
      if ( CharABCWidthsW )
      {
        if ( (unsigned int)&a6[MaxCount] > _MmUserProbeAddress || &a6[MaxCount] <= a6 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a6, Src, MaxCount);
      }
      FreeTmpBuffer(Src);
    }
    if ( v10 )
    {
      if ( v12 )
        Win32FreePool(v12);
    }
  }
  return CharABCWidthsW;
}
