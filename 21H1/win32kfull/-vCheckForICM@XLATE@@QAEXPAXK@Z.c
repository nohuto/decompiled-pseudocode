/*
 * XREFs of ?vCheckForICM@XLATE@@QAEXPAXK@Z @ 0x225EBC
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 * Callees:
 *     <none>
 */

void __thiscall XLATE::vCheckForICM(XLATE *this, void *a2, unsigned int a3)
{
  int v4; // eax
  int v5; // ecx

  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  if ( (a3 & 7) != 0 )
  {
    if ( (a3 & 3) != 0 )
    {
      *((_DWORD *)this + 13) = a3;
      *((_DWORD *)this + 12) = a2;
      if ( (a3 & 2) != 0 )
      {
        v4 = HmgShareLockCheck(a2, 14);
        if ( v4 )
        {
          *((_DWORD *)this + 1) |= 0x10u;
          DEC_SHARE_REF_CNT(v4);
        }
      }
      else if ( (a3 & 1) != 0 )
      {
        v5 = *((_DWORD *)this + 1) | 0x20;
        *((_DWORD *)this + 1) = v5;
        if ( (a3 & 0x10000000) != 0 )
        {
          if ( a2 )
            *((_DWORD *)this + 1) = v5 | 8;
        }
      }
    }
    else if ( (a3 & 4) != 0 )
    {
      *((_DWORD *)this + 1) |= 0x20u;
      *((_DWORD *)this + 13) = a3;
    }
  }
}
