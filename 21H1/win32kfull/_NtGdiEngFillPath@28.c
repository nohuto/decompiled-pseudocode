/*
 * XREFs of _NtGdiEngFillPath@28 @ 0x218304
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z @ 0x2161F8 (-CaptureAndFakeBRUSHOBJ@@YGPAU_BRUSHOBJ@@PAU1@0@Z.c)
 *     ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335 (-CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCheckSurfacePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@@Z @ 0x2169D7 (-bCheckSurfacePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@@Z.c)
 */

int __stdcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  int v7; // ebx
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  SURFOBJ *ThreadCurrentObj; // eax
  SURFOBJ *v11; // esi
  SURFOBJ *v13; // edi
  unsigned int v14; // eax
  struct _PATHOBJ *v15; // [esp+0h] [ebp-4Ch]
  struct _CLIPOBJ *v16; // [esp+4h] [ebp-48h]
  _DWORD v17[3]; // [esp+10h] [ebp-3Ch] BYREF
  _DWORD v18[2]; // [esp+1Ch] [ebp-30h] BYREF
  SURFOBJ *pso[3]; // [esp+24h] [ebp-28h] BYREF
  int v20; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]
  PATHOBJ *ppoa; // [esp+58h] [ebp+Ch]
  CLIPOBJ *pcoa; // [esp+5Ch] [ebp+10h]
  BRUSHOBJ *pboa; // [esp+60h] [ebp+14h]

  v7 = 0;
  v20 = 0;
  v18[0] = 0;
  v18[1] = 0;
  memset(v17, 0, sizeof(v17));
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
  v13 = pso[0];
  if ( pso[0] )
    pcoa = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v11, pco, (struct _CLIPOBJ *)&pso[0]->sizlBitmap);
  else
    pcoa = 0;
  v14 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v11, (int)pbo);
  if ( !v14 )
    v14 = (unsigned int)CaptureAndFakeBRUSHOBJ(pbo, v17);
  pboa = (BRUSHOBJ *)v14;
  if ( v13 )
  {
    if ( v14 )
    {
      if ( ppoa )
      {
        if ( pcoa )
        {
          if ( !pcoa->iMode )
          {
            if ( pptlBrushOrg )
            {
              ms_exc.registration.TryLevel = 0;
              CapturePOINTL((_DWORD **)&pptlBrushOrg, v18);
              v20 = 1;
              ms_exc.registration.TryLevel = -2;
              if ( bCheckSurfacePath((int)ppoa, (int)v13, (struct _SURFOBJ *)pcoa, v15, v16) )
              {
                if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pboa->iSolidColor == -1 )
                {
                  if ( EngFillPath(v13, ppoa, pcoa, pboa, pptlBrushOrg, mix, flOptions) )
                    v7 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( pso[1] )
    EngUnlockSurface(v13);
  --v11[4].sizlBitmap.cy;
  return v7;
}
