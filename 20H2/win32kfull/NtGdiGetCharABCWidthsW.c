/*
 * XREFs of NtGdiGetCharABCWidthsW @ 0x1C00F15D0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     GreGetCharABCWidthsW @ 0x1C00F1738 (GreGetCharABCWidthsW.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharABCWidthsW(HDC a1, __int64 a2, unsigned int a3, const void *a4, int a5, char *a6)
{
  __int64 v6; // r14
  unsigned int CharABCWidthsW; // r12d
  const void *v8; // rdi
  void *v9; // rbx
  int v10; // esi
  unsigned int v11; // r15d
  char *v12; // r9
  ULONG64 v14; // rcx

  v6 = a3;
  CharABCWidthsW = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( !a6 )
    return 0LL;
  if ( a4 )
  {
    v10 = 1;
    if ( a3 - 1 <= 0x1387FFF )
      v9 = PALLOCMEM2(2 * a3, 1886221383LL, 0);
  }
  if ( !v10 || v9 )
  {
    if ( (unsigned int)v6 <= 0x341555 )
    {
      v11 = 12 * v6;
      v8 = (const void *)AllocFreeTmpBuffer((unsigned int)(12 * v6));
    }
    if ( v8 )
    {
      if ( v10 )
      {
        v14 = (ULONG64)a4 + 2 * v6;
        if ( v14 < (unsigned __int64)a4 || v14 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, a4, 2 * v6);
      }
      CharABCWidthsW = GreGetCharABCWidthsW(a1, a5, (__int64)v8);
      if ( CharABCWidthsW )
      {
        v12 = &a6[v11];
        if ( (unsigned __int64)v12 > MmUserProbeAddress || v12 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v8, v11);
      }
      FreeTmpBuffer(v8);
    }
    if ( v10 )
    {
      if ( v9 )
        Win32FreePool(v9);
    }
  }
  return CharABCWidthsW;
}
