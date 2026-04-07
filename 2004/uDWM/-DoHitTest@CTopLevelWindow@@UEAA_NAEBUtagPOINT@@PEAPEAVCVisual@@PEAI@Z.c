/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18000DF30
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180002BD8 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180005B54 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x180094724 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800BF6C0 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  LONG v6; // r8d
  int v7; // r12d
  CTopLevelWindow *v8; // r15
  __int64 v9; // rbx
  char v10; // si
  __int64 v11; // rdi
  struct CWindowData *v12; // rcx
  POINT v13; // rbx
  int v14; // eax
  int top; // edi
  LONG x; // edx
  LONG left; // esi
  int v18; // eax
  int SystemMetricsForDpi; // esi
  int v20; // edi
  int v21; // eax
  LONG *v22; // rdx
  float *v24; // rdx
  LONG y; // eax
  float CorrectionScaleForUniformSpaceWindow; // xmm3_4
  __int64 v27; // rsi
  __int64 v28; // rax
  LONG **v29; // rdi
  LONG *v30; // rbx
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  struct CVisual **v32; // [rsp+40h] [rbp-C8h]
  unsigned int *v33; // [rsp+48h] [rbp-C0h]
  RECT v34; // [rsp+50h] [rbp-B8h] BYREF
  RECT v35; // [rsp+60h] [rbp-A8h] BYREF
  RECT rc; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v37[8]; // [rsp+88h] [rbp-80h] BYREF

  v32 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v33 = a4;
  *(_QWORD *)&rc.left = 0LL;
  LODWORD(v31) = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 48) == -1) )
    goto LABEL_13;
  LODWORD(v9) = -1;
  v10 = 0;
  while ( 1 )
  {
    if ( !v10 )
    {
      LODWORD(v9) = *((_DWORD *)this + 18);
      v10 = 1;
    }
    v9 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v9 == -1 )
      break;
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v9);
    *(struct tagPOINT *)&v34.left = *a2;
    v34.left -= *(_DWORD *)(v11 + 112);
    v34.top -= *(_DWORD *)(v11 + 116);
    if ( (*(_BYTE *)(v11 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v11, (struct D2DMatrix *)v37);
      if ( D2DMatrixInverse((struct D2DMatrix *)v37, v24, (const struct D2DMatrix *)v37) )
      {
        *(float *)&v35.left = (float)v34.left;
        *(float *)&v35.top = (float)v34.top;
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v35,
          (const struct D2DVector2 *)&v35,
          (const struct D2DMatrix *)v37);
        v34.top = (int)*(float *)&v35.top;
        v34.left = (int)*(float *)&v35.left;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, RECT *, RECT *, __int64 *))(*(_QWORD *)v11 + 136LL))(
             v11,
             &v34,
             &rc,
             &v31) )
      {
        break;
      }
    }
  }
  v8 = *(CTopLevelWindow **)&rc.left;
  if ( *(_QWORD *)&rc.left
    || a2->x < 0
    || a2->x >= *((_DWORD *)this + 30)
    || (y = a2->y, y < 0)
    || y >= *((_DWORD *)this + 31) )
  {
    v7 = v31;
  }
  else
  {
    v7 = *((_DWORD *)this + 48);
    v8 = this;
  }
  v6 = 0;
LABEL_13:
  v12 = (struct CWindowData *)*((_QWORD *)this + 91);
  v13 = *a2;
  *(struct tagPOINT *)&v34.left = *a2;
  v14 = *((_DWORD *)v12 + 87);
  if ( (v14 & 1) != 0 || (v14 & 2) != 0 )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v12);
    x = v13.x;
    if ( CorrectionScaleForUniformSpaceWindow == 1.0 )
    {
      top = v34.top;
      left = v34.left;
    }
    else
    {
      x = (int)((float)((float)v13.x / CorrectionScaleForUniformSpaceWindow) + 0.5);
      v34.left = x;
      left = x;
      top = (int)((float)((float)v34.top / CorrectionScaleForUniformSpaceWindow) + 0.5);
      v34.top = top;
      v13 = *(POINT *)&v34.left;
    }
  }
  else
  {
    top = v34.top;
    x = v13.x;
    left = v34.left;
  }
  if ( v8 && v7 == -2 )
  {
    if ( x >= *((_DWORD *)this + 149)
      && x < *((_DWORD *)this + 30) - *((_DWORD *)this + 150)
      && top >= *((_DWORD *)v12 + 24)
      && top < *((_DWORD *)this + 151) )
    {
      v7 = 2;
    }
    *(_QWORD *)&rc.left = 0LL;
    if ( *((_DWORD *)v12 + 14) - *((_DWORD *)v12 + 12) < 0 )
      rc.right = v6;
    else
      rc.right = *((_DWORD *)v12 + 14) - *((_DWORD *)v12 + 12);
    if ( *((_DWORD *)v12 + 15) - *((_DWORD *)v12 + 13) < 0 )
      rc.bottom = v6;
    else
      rc.bottom = *((_DWORD *)v12 + 15) - *((_DWORD *)v12 + 13);
    if ( !PtInRect(&rc, v13) )
    {
      v7 = 18;
      if ( top < 0 )
        v7 = 2;
    }
    v18 = *((_DWORD *)this + 148);
    if ( (v18 & 0x20) != 0 )
    {
      if ( (v18 & 0x20000) != 0 )
        v35.left = *((_DWORD *)this + 30) - left - 1;
      else
        v35.left = left;
      v27 = 5LL;
      v37[0] = *((_QWORD *)this + 66);
      v37[1] = *((_QWORD *)this + 61);
      v37[2] = *((_QWORD *)this + 62);
      v37[3] = *((_QWORD *)this + 63);
      v28 = *((_QWORD *)this + 64);
      v35.top = top;
      v29 = (LONG **)v37;
      v37[4] = v28;
      do
      {
        v30 = *v29;
        if ( *v29 )
        {
          v34.left = v30[28];
          v34.top = *((_DWORD *)this + 163);
          v34.right = v30[28] + v30[30];
          v34.bottom = v30[29] + v30[31];
          if ( v30 == *((LONG **)this + 66) )
          {
            v34.left = *((_DWORD *)this + 161);
          }
          else if ( v30 == *((LONG **)this + 64) )
          {
            v34.right = *((_DWORD *)this + 30) - *((_DWORD *)this + 162);
          }
          if ( PtInRect(&v34, *(POINT *)&v35.left) )
          {
            v7 = v30[48];
            v8 = (CTopLevelWindow *)v30;
          }
        }
        ++v29;
        --v27;
      }
      while ( v27 );
    }
    else if ( *((_QWORD *)this + 66) )
    {
      SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 91) + 324LL));
      v20 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 91) + 324LL));
      v21 = (SystemMetricsForDpi - v20 - GetSystemMetrics(46)) / 2;
      if ( v21 >= 1 )
      {
        v22 = (LONG *)*((_QWORD *)this + 66);
        v35.left = v22[28];
        v35.top = v22[29] - v21;
        v35.right = v22[28] + v22[30];
        v35.bottom = v22[29] + v21 + v22[31];
        if ( PtInRect(&v35, v13) )
        {
          v8 = (CTopLevelWindow *)*((_QWORD *)this + 66);
          v7 = *((_DWORD *)v8 + 48);
        }
      }
    }
  }
  *v32 = v8;
  *v33 = v7;
  return v8 != 0LL;
}
