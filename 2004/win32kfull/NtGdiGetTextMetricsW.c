/*
 * XREFs of NtGdiGetTextMetricsW @ 0x1C00D8E10
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextMetricsW @ 0x1C000C294 (GreGetTextMetricsW.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtGdiGetTextMetricsW(HDC a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int TextMetricsW; // r9d
  _OWORD v7[5]; // [rsp+20h] [rbp-58h] BYREF

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    memset(v7, 0, 0x44uLL);
    TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v7);
    if ( TextMetricsW )
    {
      if ( a2 + 68 > MmUserProbeAddress || a2 + 68 <= a2 || (a2 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a2 = v7[0];
      *(_OWORD *)(a2 + 16) = v7[1];
      *(_OWORD *)(a2 + 32) = v7[2];
      *(_OWORD *)(a2 + 48) = v7[3];
      *(_DWORD *)(a2 + 64) = v7[4];
    }
  }
  return TextMetricsW;
}
