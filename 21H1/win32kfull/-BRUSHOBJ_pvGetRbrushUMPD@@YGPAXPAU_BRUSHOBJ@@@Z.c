/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x1CC6D1
 * Callers:
 *     _NtGdiBRUSHOBJ_pvGetRbrush@4 @ 0x2170E1 (_NtGdiBRUSHOBJ_pvGetRbrush@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?vTryToCacheRealization@@YGXPAVEBRUSHOBJ@@PAVRBRUSH@@PAVBRUSH@@H@Z @ 0x96A78 (-vTryToCacheRealization@@YGXPAVEBRUSHOBJ@@PAVRBRUSH@@PAVBRUSH@@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void *__thiscall BRUSHOBJ_pvGetRbrushUMPD(int this)
{
  void *result; // eax
  int v3; // eax
  int RealizedBrush; // eax
  int v5; // ecx
  PKTHREAD CurrentThread; // eax
  struct EBRUSHOBJ *v7; // [esp+0h] [ebp-2Ch]
  struct BRUSH *v8; // [esp+0h] [ebp-2Ch]
  int (__stdcall *v9)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int); // [esp+4h] [ebp-28h]
  int v10; // [esp+4h] [ebp-28h]

  if ( *(_DWORD *)this != -1 )
    return 0;
  result = *(void **)(this + 4);
  if ( result )
    return result;
  if ( bUMPDSecurityGateEx() )
  {
    v3 = *(_DWORD *)(this + 56);
    if ( !v3 )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg() == NULL\n",
          404);
      return 0;
    }
    if ( !*(_DWORD *)(v3 + 28) )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\brushddi.cxx:%d:BRUSHOBJ_pvGetRbrushUMPD:pdebo->psoTarg()->hdev() == NULL\n",
          410);
      return 0;
    }
  }
  RealizedBrush = bGetRealizedBrush(
                    (EBRUSHOBJ *)this,
                    *(BRUSH **)(this + 72),
                    *(struct BRUSH **)(*(_DWORD *)(*(_DWORD *)(this + 56) + 28) + 1948),
                    v7,
                    v9);
  v5 = *(_DWORD *)(this + 4);
  if ( !RealizedBrush )
  {
    if ( v5 )
    {
      EngFreeUserMem((PVOID)(v5 - 16));
      *(_DWORD *)(this + 4) = 0;
    }
    return 0;
  }
  if ( !v5 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( !*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 36) )
    vTryToCacheRealization(
      (_DWORD *)(*(_DWORD *)(this + 4) - 16),
      (_DWORD *)this,
      *(struct EBRUSHOBJ **)(this + 72),
      0,
      v8,
      v10);
  return *(void **)(this + 4);
}
