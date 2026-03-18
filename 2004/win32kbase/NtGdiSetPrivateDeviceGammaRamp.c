/*
 * XREFs of NtGdiSetPrivateDeviceGammaRamp @ 0x1C014C8E0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C014C19C (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 */

__int64 __fastcall NtGdiSetPrivateDeviceGammaRamp(HDC a1, void *Src, int a3)
{
  unsigned int v6; // edi
  void *v7; // rbx

  v6 = 0;
  if ( Src )
  {
    v7 = PALLOCMEM2(0x600uLL, 0x706D7447u, 0);
    if ( v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      memmove(v7, Src, 0x600uLL);
      v6 = GreSetPrivateDeviceGammaRamp(a1, v7, a3);
      Win32FreePool((__int64)v7);
    }
  }
  return v6;
}
