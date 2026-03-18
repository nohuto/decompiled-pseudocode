/*
 * XREFs of ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18026B51C
 * Callers:
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x18026ABC0 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x18026B004 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180268CC4 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x180269CF8 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18026B9E0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CCursorState::UpdateHardwareCursorOverlay(
        CCursorState *this,
        struct CCursorState::MonitorData *a2,
        char a3)
{
  float v3; // xmm4_4
  __int64 *v4; // r12
  float v5; // xmm3_4
  float v6; // xmm0_4
  __int64 v9; // rcx
  float v10; // xmm4_4
  float v11; // xmm0_4
  int v12; // r14d
  int v13; // r15d
  int v14; // eax
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // eax
  CCursorState *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  __int128 *v23; // r14
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  bool v30; // cf
  int updated; // eax
  unsigned int v32; // r8d
  int v33; // [rsp+28h] [rbp-69h]
  float v34; // [rsp+38h] [rbp-59h] BYREF
  __int64 v35; // [rsp+40h] [rbp-51h] BYREF
  __int64 v36; // [rsp+48h] [rbp-49h] BYREF
  __int128 v37; // [rsp+50h] [rbp-41h]
  __int64 v38; // [rsp+60h] [rbp-31h]
  char v39[8]; // [rsp+68h] [rbp-29h] BYREF
  CCursorState *v40; // [rsp+70h] [rbp-21h]
  __int64 v41; // [rsp+78h] [rbp-19h] BYREF
  __int128 v42; // [rsp+80h] [rbp-11h] BYREF
  __int64 v43; // [rsp+90h] [rbp-1h]
  std::_Ref_count_base *v44[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+17h] BYREF
  int v46; // [rsp+B0h] [rbp+1Fh]
  int v47; // [rsp+B4h] [rbp+23h]
  int v48; // [rsp+B8h] [rbp+27h]
  int v49; // [rsp+BCh] [rbp+2Bh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v3 = *((float *)this + 12);
  v4 = (__int64 *)((char *)a2 + 96);
  v5 = *((float *)this + 13);
  v6 = v3 * *((float *)a2 + 3);
  v40 = this;
  v9 = *((_QWORD *)a2 + 12);
  v10 = (float)((float)(v3 * *((float *)a2 + 4)) + (float)(v5 * *((float *)a2 + 8))) + *((float *)a2 + 16);
  v11 = (float)((float)((float)(v5 * *((float *)a2 + 7)) + v6) + *((float *)a2 + 15)) + 6291456.25;
  v34 = v11;
  v12 = ((int)(LODWORD(v11) << 10) >> 11) - *(_DWORD *)v9;
  v34 = v10 + 6291456.25;
  v13 = ((int)(LODWORD(v34) << 10) >> 11) - *(_DWORD *)(v9 + 4);
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**(_QWORD **)(v9 + 24) + 24LL))(
          *(_QWORD *)(v9 + 24),
          &v35,
          (char *)&v35 + 4);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1473LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v14,
      v33);
  v15 = 0;
  v16 = 0;
  if ( *((_DWORD *)a2 + 20) - v12 >= 0 )
    v15 = *((_DWORD *)a2 + 20) - v12;
  if ( *((_DWORD *)a2 + 21) - v13 >= 0 )
    v16 = *((_DWORD *)a2 + 21) - v13;
  v17 = 0;
  if ( HIDWORD(v35) + v13 - *((_DWORD *)a2 + 23) >= 0 )
    v17 = HIDWORD(v35) + v13 - *((_DWORD *)a2 + 23);
  v18 = 0;
  if ( (int)v35 + v12 - *((_DWORD *)a2 + 22) >= 0 )
    v18 = v35 + v12 - *((_DWORD *)a2 + 22);
  v19 = (CCursorState *)(unsigned int)(v18 + v15);
  v20 = v17 + v16;
  if ( (unsigned int)v35 < (unsigned int)v19 )
    v19 = (CCursorState *)(unsigned int)v35;
  v21 = v35 - (_DWORD)v19;
  LODWORD(v35) = v35 - (_DWORD)v19;
  if ( HIDWORD(v35) < v20 )
    v20 = HIDWORD(v35);
  v22 = HIDWORD(v35) - v20;
  HIDWORD(v35) -= v20;
  if ( !v21 || !v22 )
    goto LABEL_33;
  v45 = *(_QWORD *)a2;
  v46 = *((_DWORD *)a2 + 2);
  v47 = v12 + v15;
  v23 = 0LL;
  v49 = 1;
  v48 = v13 + v16;
  if ( a3
    || !*((_BYTE *)a2 + 140)
    || v15 != *((_DWORD *)a2 + 31)
    || v16 != *((_DWORD *)a2 + 32)
    || v21 != *((_DWORD *)a2 + 33)
    || v22 != *((_DWORD *)a2 + 34) )
  {
    v24 = *v4;
    v23 = &v42;
    v44[0] = (std::_Ref_count_base *)__PAIR64__(v16, v15);
    v44[1] = (std::_Ref_count_base *)__PAIR64__(v22, v21);
    v25 = *(__int64 **)(v24 + 24);
    v26 = *v25;
    v36 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64 *, std::_Ref_count_base **, __int64, __int64 *))(v26 + 64))(
            v25,
            v44,
            1LL,
            &v36);
    if ( v27 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1528LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v27,
        v33);
    v28 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v36 + 40LL))(v36, v39, &v41);
    if ( v28 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1532LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v28,
        v33);
    v29 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v36 + 32LL))(v36, &v34);
    if ( v29 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1535LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v29,
        v33);
    v30 = *((_BYTE *)v40 + 72) != 0;
    *(_QWORD *)((char *)&v37 + 4) = v35;
    *((float *)&v37 + 3) = v34;
    LODWORD(v37) = v30 + 1;
    v38 = v41;
    v42 = v37;
    v43 = v41;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  }
  updated = NtHWCursorUpdatePointer(&v45, v23);
  if ( updated < 0 )
  {
    wil::details::in1diag3::_Log_NtStatus(retaddr, (void *)0x608, v32, (const char *)(unsigned int)updated, v33);
    *(_OWORD *)v44 = 0LL;
    std::shared_ptr<CCursorState::ShapeData>::operator=(v4, (__int64 *)v44);
    v19 = v44[1];
    if ( v44[1] )
      std::_Ref_count_base::_Decref(v44[1]);
LABEL_33:
    CCursorState::EnsureHardwareOverlayCleared(v19, a2);
    return;
  }
  *(_QWORD *)((char *)a2 + 132) = v35;
  *((_BYTE *)a2 + 140) = 1;
  *((_DWORD *)a2 + 31) = v15;
  *((_DWORD *)a2 + 32) = v16;
}
