/*
 * XREFs of _NtGdiEngAssociateSurface@12 @ 0x2175AE
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHdev@@YGPAUHDEV__@@PAU1@@Z @ 0x2165D3 (-ValidUmpdHdev@@YGPAUHDEV__@@PAU1@@Z.c)
 *     ?ValidUmpdHooks@@YGHPAVPDEVOBJ@@K@Z @ 0x216658 (-ValidUmpdHooks@@YGHPAVPDEVOBJ@@K@Z.c)
 */

BOOL __stdcall NtGdiEngAssociateSurface(HSURF hsurf, struct PDEV *a2, int a3)
{
  BOOL v3; // ebx
  int v4; // eax
  int v5; // esi
  struct PDEV *v6; // eax
  HDEV v7; // edi
  FLONG v8; // edx

  v3 = 0;
  v4 = HmgShareLockCheckIgnoreStockBit(hsurf, 5);
  v5 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 72) & 0x40000) != 0 )
    {
      v6 = ValidUmpdHdev(a2);
      v7 = (HDEV)v6;
      if ( v6 )
      {
        a2 = v6;
        if ( (a3 & 0xFFFC0200) == 0 && ValidUmpdHooks((int)&a2, a3 & 0xFFFFB7EF) )
          v3 = EngAssociateSurface(hsurf, v7, v8);
        PDEVOBJ::vUnreferencePdev(&a2, 0);
      }
    }
    DEC_SHARE_REF_CNT(v5);
  }
  return v3;
}
