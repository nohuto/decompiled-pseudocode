/*
 * XREFs of _NtGdiEngStrokePath@32 @ 0x219789
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU1@@Z @ 0x216082 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8 (-CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YGHPAPAU_LINEATTRS@@PAU1@@Z @ 0x21684C (-bCaptureLINEATTRS@@YGHPAPAU_LINEATTRS@@PAU1@@Z.c)
 *     ?bCheckSurfacePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@@Z @ 0x2169D7 (-bCheckSurfacePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@@Z.c)
 */

int __stdcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        XFORMOBJ *pxo,
        int a4,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  SURFOBJ *ThreadCurrentObj; // eax
  SURFOBJ *v11; // edi
  unsigned int v13; // eax
  int v14; // esi
  struct _CLIPOBJ *DDIOBJ; // ebx
  unsigned int v16; // eax
  struct _PATHOBJ *v17; // [esp+0h] [ebp-68h]
  struct _CLIPOBJ *v18; // [esp+4h] [ebp-64h]
  unsigned int v19[8]; // [esp+10h] [ebp-58h] BYREF
  _DWORD v20[3]; // [esp+30h] [ebp-38h] BYREF
  _DWORD v21[2]; // [esp+3Ch] [ebp-2Ch] BYREF
  SURFOBJ *pso[3]; // [esp+44h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]
  PATHOBJ *ppoa; // [esp+74h] [ebp+Ch]
  XFORMOBJ *pxoa; // [esp+78h] [ebp+10h]
  BRUSHOBJ *pboa; // [esp+80h] [ebp+18h]

  v21[0] = 0;
  v21[1] = 0;
  memset(v19, 0, sizeof(v19));
  memset(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  pso[2] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++ThreadCurrentObj[4].sizlBitmap.cy;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct UMPDOBJ *)ThreadCurrentObj);
  ppoa = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v11, (int)ppo);
  v13 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v11, (int)pbo);
  if ( !v13 )
    v13 = (unsigned int)CaptureAndFakeBRUSHOBJ(pbo, v20);
  pboa = (BRUSHOBJ *)v13;
  if ( pso[0] && v13 && ppoa && plineattrs && pptlBrushOrg )
  {
    ms_exc.registration.TryLevel = 0;
    CapturePOINTL((_DWORD **)&pptlBrushOrg, v21);
    ms_exc.registration.TryLevel = -2;
    v14 = bCaptureLINEATTRS((const void **)&plineattrs, v19);
    if ( v14 )
    {
      if ( ((int)v11[4].hdev & 0x100) != 0 && (plineattrs->fl & 1) != 0 && !pxo )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
            1746);
        v14 = 0;
      }
      if ( v14 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v11, (struct _CLIPOBJ *)pxo, (struct _CLIPOBJ *)&pso[0]->sizlBitmap);
        v16 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(v11, a4);
        pxoa = (XFORMOBJ *)v16;
        if ( (plineattrs->fl & 1) != 0 )
          v14 = v16 != 0 ? v14 : 0;
        v14 = v14
           && bCheckSurfacePath((int)ppoa, (int)pso[0], (struct _SURFOBJ *)DDIOBJ, v17, v18)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pboa->iSolidColor == -1)
           && EngStrokePath(pso[0], ppoa, DDIOBJ, pxoa, pboa, pptlBrushOrg, plineattrs, mix);
        if ( plineattrs->pstyle )
          Win32FreePool((PATHOBJ *)plineattrs->pstyle);
      }
    }
  }
  else
  {
    v14 = 0;
  }
  if ( pso[1] )
    EngUnlockSurface(pso[0]);
  --v11[4].sizlBitmap.cy;
  return v14;
}
