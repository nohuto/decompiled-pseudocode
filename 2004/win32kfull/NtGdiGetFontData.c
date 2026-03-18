/*
 * XREFs of NtGdiGetFontData @ 0x1C00DF5A0
 * Callers:
 *     <none>
 * Callees:
 *     ulGetFontData @ 0x1C00DF6A8 (ulGetFontData.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontData(HDC a1, __int64 a2, __int64 a3, void *a4, unsigned int a5)
{
  const void *v7; // rdi
  unsigned int FontData; // ebx
  ULONG64 v9; // rdx

  v7 = 0LL;
  FontData = -1;
  if ( a5 )
  {
    if ( a5 <= 0x2710000 )
      v7 = (const void *)AllocFreeTmpBuffer(a5);
    if ( v7 )
    {
      FontData = ulGetFontData(a1, a5);
      if ( FontData != -1 )
      {
        if ( FontData > a5 )
          FontData = -1;
        if ( FontData != -1 )
        {
          v9 = (ULONG64)a4 + FontData;
          if ( v9 > MmUserProbeAddress || v9 <= (unsigned __int64)a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a4, v7, FontData);
        }
      }
      FreeTmpBuffer(v7);
    }
  }
  else
  {
    return (unsigned int)ulGetFontData(a1, 0);
  }
  return FontData;
}
