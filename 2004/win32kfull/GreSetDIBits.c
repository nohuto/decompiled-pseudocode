/*
 * XREFs of GreSetDIBits @ 0x1C02C1020
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C021F8F8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GreSetDIBitsInternal @ 0x1C01174DC (GreSetDIBitsInternal.c)
 *     pbmiConvertInfo @ 0x1C02B0928 (pbmiConvertInfo.c)
 */

__int64 __fastcall GreSetDIBits(HDC a1, __int64 a2, __int64 a3, unsigned int a4, void *a5, unsigned int *a6)
{
  unsigned int *v9; // rdi
  unsigned int v10; // eax
  unsigned int v12; // esi

  v9 = a6;
  if ( !a6 )
    goto LABEL_7;
  v10 = *a6;
  if ( *a6 == 12 )
  {
    v9 = (unsigned int *)pbmiConvertInfo((unsigned __int16 *)a6);
    v10 = *a6;
  }
  if ( v10 >= 0x28 && a6[4] - 4 <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
LABEL_7:
    v12 = GreSetDIBitsInternal(a1, a2, a3, a4, a5, v9, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0LL);
    if ( v9 )
    {
      if ( v9 != a6 )
        Win32FreePool(v9);
    }
    return v12;
  }
}
