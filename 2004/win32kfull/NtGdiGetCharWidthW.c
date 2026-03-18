/*
 * XREFs of NtGdiGetCharWidthW @ 0x1C00E2010
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     GreGetCharWidthW @ 0x1C00E1D38 (GreGetCharWidthW.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, const void *a4, char a5, char *a6)
{
  __int64 v7; // rbx
  unsigned int CharWidthW; // esi
  float *v10; // rdi
  void *v11; // r15
  int v12; // r14d
  ULONG64 v14; // rcx
  size_t v15; // r8

  v7 = a3;
  CharWidthW = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !a3 )
    return 0LL;
  if ( a4 )
  {
    v12 = 1;
    if ( a3 <= 0x1388000 )
      v11 = PALLOCMEM2(2 * a3, 1886221383LL, 0);
  }
  if ( !v12 || v11 )
  {
    if ( (unsigned int)v7 <= 0x9C4000 )
      v10 = (float *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    if ( v10 )
    {
      if ( v12 )
      {
        v14 = (ULONG64)a4 + 2 * v7;
        if ( v14 < (unsigned __int64)a4 || v14 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, a4, 2 * v7);
      }
      CharWidthW = GreGetCharWidthW(a1, a2, v7, (unsigned __int16 *)v11, a5, v10);
      if ( CharWidthW )
      {
        v15 = 4LL * (unsigned int)v7;
        if ( (unsigned __int64)&a6[v15] > MmUserProbeAddress || &a6[v15] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, v15);
      }
      FreeTmpBuffer(v10);
    }
    if ( v12 )
      Win32FreePool(v11);
  }
  return CharWidthW;
}
