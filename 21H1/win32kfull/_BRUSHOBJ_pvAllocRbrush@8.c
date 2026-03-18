/*
 * XREFs of _BRUSHOBJ_pvAllocRbrush@8 @ 0x1CC83F
 * Callers:
 *     _VerifierBRUSHOBJ_pvAllocRbrush@8 @ 0x1FC789 (_VerifierBRUSHOBJ_pvAllocRbrush@8.c)
 *     ?MulRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x203B8D (-MulRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

PVOID __stdcall BRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  _DWORD *v2; // eax
  PVOID result; // eax

  if ( gpCachedDbrush )
  {
    v2 = (_DWORD *)_InterlockedExchange((volatile __int32 *)gpCachedDbrush, 0);
    if ( v2 )
    {
      if ( cj + 16 >= cj && v2[1] >= cj + 16 )
        goto LABEL_5;
      Win32FreePool(v2);
    }
  }
  v2 = PALLOCMEM2(cj + 16, 1919050823, 1);
  if ( v2 )
  {
    v2[1] = cj + 16;
LABEL_5:
    result = v2 + 4;
    pbo->pvRbrush = result;
    return result;
  }
  return 0;
}
