/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02B4210
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C01301A4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C0130290 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C01302E8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0130440 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C013137C (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     EngStrokePath @ 0x1C013BD70 (EngStrokePath.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C0141EB8 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B1D44 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B2108 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B2230 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 NtGdiEngStrokePath(struct _SURFOBJ *a1, __int64 a2, struct _CLIPOBJ *a3, __int64 a4, struct _BRUSHOBJ *a5, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rdi
  PATHOBJ *v12; // r12
  struct _BRUSHOBJ *pbo; // r14
  SURFOBJ *v14; // r15
  unsigned int v15; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *DDIOBJ; // r13
  unsigned __int64 v18; // rax
  XFORMOBJ *v19; // r11
  PFLOAT_LONG pstyle; // rcx
  struct _POINTL v21; // [rsp+40h] [rbp-98h] BYREF
  struct UMPDOBJ *v22; // [rsp+48h] [rbp-90h]
  SURFOBJ *pso; // [rsp+50h] [rbp-88h] BYREF
  int v24; // [rsp+58h] [rbp-80h]
  struct _BRUSHOBJ v25; // [rsp+60h] [rbp-78h] BYREF
  struct _LINEATTRS v26; // [rsp+78h] [rbp-60h] BYREF
  POINTL *pptlBrushOrg; // [rsp+108h] [rbp+30h] BYREF
  va_list va; // [rsp+108h] [rbp+30h]
  LINEATTRS *v30; // [rsp+110h] [rbp+38h] BYREF
  va_list va1; // [rsp+110h] [rbp+38h]
  __int64 mix; // [rsp+118h] [rbp+40h]
  va_list va2; // [rsp+120h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  pptlBrushOrg = va_arg(va1, POINTL *);
  va_copy(va2, va1);
  v30 = va_arg(va2, LINEATTRS *);
  mix = va_arg(va2, _QWORD);
  v21 = 0LL;
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v22 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a1, ThreadCurrentObj);
  v12 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v10, a2);
  pbo = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a5);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(a5, &v25);
  v14 = pso;
  if ( pso && pbo && v12 && v30 && pptlBrushOrg )
  {
    CapturePOINTL((struct _POINTL **)va, &v21);
    v15 = bCaptureLINEATTRS((struct _LINEATTRS **)va1, &v26);
    plineattrs = v30;
    if ( v15 )
    {
      if ( (*((_DWORD *)v10 + 103) & 0x100) != 0 && (v30->fl & 1) != 0 && !a3 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngStrokePath:LA_GEOMETRIC && pco == NULL\n",
            1746);
        v15 = 0;
      }
      if ( v15 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a3, &v14->sizlBitmap);
        v18 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v10, a4);
        if ( (plineattrs->fl & 1) != 0 )
          v15 &= -(v18 != 0);
        v15 = v15
           && (unsigned int)bCheckSurfacePath(v14, v12, DDIOBJ)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1)
           && EngStrokePath(v14, v12, DDIOBJ, v19, pbo, pptlBrushOrg, plineattrs, mix);
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  else
  {
    v15 = 0;
  }
  if ( v24 )
    EngUnlockSurface(v14);
  --*((_DWORD *)v10 + 105);
  return v15;
}
