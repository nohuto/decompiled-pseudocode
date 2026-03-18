/*
 * XREFs of _NtGdiEngStrokeAndFillPath@40 @ 0x219580
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
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

int __stdcall NtGdiEngStrokeAndFillPath(
        XFORMOBJ *pxo,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        int a4,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  int v10; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  SURFOBJ *ThreadCurrentObj; // eax
  SURFOBJ *v14; // edi
  SURFOBJ *v16; // ebx
  unsigned int v17; // eax
  BRUSHOBJ *v18; // eax
  unsigned int v19; // eax
  struct _PATHOBJ *v20; // [esp+0h] [ebp-78h]
  struct _CLIPOBJ *v21; // [esp+4h] [ebp-74h]
  unsigned int v22[8]; // [esp+10h] [ebp-68h] BYREF
  _DWORD v23[3]; // [esp+30h] [ebp-48h] BYREF
  _DWORD v24[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  _DWORD v25[2]; // [esp+48h] [ebp-30h] BYREF
  SURFOBJ *pso[3]; // [esp+50h] [ebp-28h] BYREF
  int v27; // [esp+5Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]
  XFORMOBJ *pxoa; // [esp+80h] [ebp+8h]
  PATHOBJ *ppoa; // [esp+84h] [ebp+Ch]
  CLIPOBJ *pcoa; // [esp+88h] [ebp+10h]
  BRUSHOBJ *pboStrokea; // [esp+90h] [ebp+18h]

  v10 = 0;
  v27 = 0;
  v25[0] = 0;
  v25[1] = 0;
  memset(v22, 0, sizeof(v22));
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = (SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = ThreadCurrentObj;
  pso[2] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++ThreadCurrentObj[4].sizlBitmap.cy;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, (struct _SURFOBJ *)pxo, (struct UMPDOBJ *)ThreadCurrentObj);
  ppoa = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v14, (int)ppo);
  v16 = pso[0];
  if ( pso[0] )
    pcoa = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, pco, (struct _CLIPOBJ *)&pso[0]->sizlBitmap);
  else
    pcoa = 0;
  v17 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, (int)pboStroke);
  if ( !v17 )
    v17 = (unsigned int)CaptureAndFakeBRUSHOBJ(pboStroke, v24);
  pboStrokea = (BRUSHOBJ *)v17;
  v18 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v14, (int)pboFill);
  if ( !v18 )
    v18 = CaptureAndFakeBRUSHOBJ(pboFill, v23);
  pboFill = v18;
  if ( v16 )
  {
    if ( pboStrokea )
    {
      if ( v18 )
      {
        if ( ppoa )
        {
          if ( plineattrs )
          {
            if ( pcoa )
            {
              if ( pptlBrushOrg )
              {
                ms_exc.registration.TryLevel = 0;
                CapturePOINTL((_DWORD **)&pptlBrushOrg, v25);
                v27 = 1;
                ms_exc.registration.TryLevel = -2;
                v10 = bCaptureLINEATTRS((const void **)&plineattrs, v22);
                if ( v10 )
                {
                  v19 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(v14, a4);
                  pxoa = (XFORMOBJ *)v19;
                  if ( (plineattrs->fl & 1) != 0 )
                    v10 = v19 != 0 ? v10 : 0;
                  v10 = v10
                     && bCheckSurfacePath((int)ppoa, (int)v16, (struct _SURFOBJ *)pcoa, v20, v21)
                     && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1)
                     && EngStrokeAndFillPath(
                          v16,
                          ppoa,
                          pcoa,
                          pxoa,
                          pboStrokea,
                          plineattrs,
                          pboFill,
                          pptlBrushOrg,
                          mixFill,
                          flOptions);
                  if ( plineattrs->pstyle )
                    Win32FreePool((PATHOBJ *)plineattrs->pstyle);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( pso[1] )
    EngUnlockSurface(v16);
  --v14[4].sizlBitmap.cy;
  return v10;
}
