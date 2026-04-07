/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x1800212F0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C060 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800173D0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x1800219D8 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180027878 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003E0C0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003F1BC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     floor_0 @ 0x18005638A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  int v2; // eax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  CVisual *v7; // rcx
  int v8; // r8d
  char v9; // bp
  int v10; // r14d
  char v11; // dl
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // r14d
  int v16; // r13d
  __int64 v17; // rdx
  int SystemMetricsForDpi; // edi
  unsigned int v19; // esi
  int v20; // ecx
  int v21; // eax
  int updated; // eax
  unsigned int v23; // ebp
  int v24; // ebp
  float v25; // xmm6_4
  int v26; // r12d
  int v27; // edi
  __int64 *v28; // rcx
  CVisual *v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // ebp
  CVisual *v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // ebp
  CVisual *v45; // rcx
  __int64 *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  int v50; // edi
  int v51; // eax
  __int64 v52; // rax
  int v53; // ecx
  _DWORD *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // [rsp+90h] [rbp+8h] BYREF
  int v58; // [rsp+94h] [rbp+Ch]
  int v59; // [rsp+98h] [rbp+10h] BYREF
  int v60; // [rsp+9Ch] [rbp+14h]

  if ( *((_QWORD *)this + 60) )
  {
    v2 = *((_DWORD *)this + 149);
    v3 = (_DWORD *)*((_QWORD *)this + 68);
    if ( v3[32] != v2 )
    {
      v3[32] = v2;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 68);
    }
    v4 = *((_DWORD *)this + 151);
    if ( v3[34] != v4 )
    {
      v3[34] = v4;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 68);
    }
    v5 = *((_DWORD *)this + 150);
    if ( v3[33] != v5 )
    {
      v3[33] = v5;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 68);
    }
    v6 = *((_DWORD *)this + 152);
    if ( v3[35] != v6 )
    {
      v3[35] = v6;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
    }
    v7 = (CVisual *)*((_QWORD *)this + 37);
    if ( v7 )
      CVisual::SetInsetFromParent(v7, (const struct _MARGINS *)(*((_QWORD *)this + 68) + 128LL));
  }
  v8 = *((_DWORD *)this + 150);
  if ( v8 <= 0 )
    v8 = *(_DWORD *)(*((_QWORD *)this + 91) + 96LL);
  if ( (*((_BYTE *)this + 592) & 2) != 0 )
  {
    v9 = 1;
    ++v8;
  }
  else
  {
    v9 = 0;
  }
  v10 = *((_DWORD *)this + 149);
  v11 = *((_BYTE *)this + 240) & 4;
  v12 = 644LL;
  if ( !v11 )
    v12 = 628LL;
  v13 = *(_OWORD *)((char *)this + v12);
  v14 = v8 - 1;
  if ( v8 - 1 <= DWORD1(v13) + 1 )
    v14 = DWORD1(v13) + 1;
  v57 = v14;
  if ( v11 )
    v15 = v10 + 2;
  else
    v15 = 2 * v10 - v13;
  v16 = 0;
  v17 = *(unsigned int *)(*((_QWORD *)this + 91) + 324LL);
  if ( v9 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(53LL, v17);
  }
  else
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, v17) + *(_DWORD *)(*((_QWORD *)this + 91) + 96LL);
    if ( SystemMetricsForDpi >= *((_DWORD *)this + 155) - DWORD2(v13) )
      SystemMetricsForDpi = *((_DWORD *)this + 155) - DWORD2(v13);
    if ( SystemMetricsForDpi < 0 )
    {
      SystemMetricsForDpi = 0;
      v19 = DWORD2(v13);
      v20 = DWORD2(v13);
      v21 = DWORD2(v13);
      goto LABEL_27;
    }
  }
  v19 = DWORD2(v13);
  v20 = DWORD2(v13);
  v21 = DWORD2(v13);
  if ( !v9 )
  {
LABEL_27:
    if ( (*((_BYTE *)this + 240) & 4) != 0 && (v20 = v21, *((_DWORD *)this + 163) > *((_DWORD *)this + 159)) )
    {
      if ( --SystemMetricsForDpi < 0 )
        SystemMetricsForDpi = 0;
    }
    else
    {
      v19 = v20 + 1;
    }
    goto LABEL_29;
  }
  v19 = *((_DWORD *)this + 151) - SystemMetricsForDpi - 2;
  if ( (int)v19 <= SDWORD2(v13) )
    v19 = DWORD2(v13);
LABEL_29:
  updated = CTopLevelWindow::UpdateNCAreaButton(this, 3LL, (unsigned int)SystemMetricsForDpi, v19, &v57);
  v23 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xBF4u);
    return v23;
  }
  v24 = 0;
  v25 = FLOAT_2_1818182;
  if ( *((_QWORD *)this + 63) )
  {
    if ( (*((_BYTE *)this + 592) & 2) != 0 )
      LOBYTE(v24) = 1;
    if ( (_BYTE)v24 )
      v33 = 53LL;
    else
      v33 = 31LL;
    v34 = GetSystemMetricsForDpi(v33, *(unsigned int *)(*((_QWORD *)this + 91) + 324LL));
    v35 = (int)floor_0((float)((float)v34 * 0.95454544) + 0.5);
    if ( (_BYTE)v24 )
    {
      v36 = v35;
    }
    else
    {
      v35 = (int)floor_0((float)((float)v35 * 2.1818182) + 0.5);
      v36 = SystemMetricsForDpi;
    }
    v37 = (CVisual *)*((_QWORD *)this + 63);
    v59 = v35;
    CVisual::SetInsetFromParentTop(v37, v19);
    v38 = (__int64 *)*((_QWORD *)this + 63);
    v26 = v57;
    if ( *((_DWORD *)v38 + 33) != v57 )
    {
      v55 = *v38;
      *((_DWORD *)v38 + 33) = v57;
      (*(void (__fastcall **)(__int64 *, __int64))(v55 + 24))(v38, 2LL);
      v38 = (__int64 *)*((_QWORD *)this + 63);
    }
    v39 = *v38;
    v60 = v36;
    v40 = (*(__int64 (__fastcall **)(__int64 *, int *))(v39 + 96))(v38, &v59);
    v24 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0xC5Cu);
    }
    else
    {
      v26 += *(_DWORD *)(*((_QWORD *)this + 63) + 120LL);
      v57 = v26;
    }
  }
  else
  {
    v26 = v57;
  }
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xBF5u);
    return (unsigned int)v24;
  }
  v24 = 0;
  if ( *((_QWORD *)this + 62) )
  {
    if ( (*((_BYTE *)this + 592) & 2) != 0 )
      LOBYTE(v24) = 1;
    if ( (_BYTE)v24 )
      v41 = 53LL;
    else
      v41 = 31LL;
    v42 = GetSystemMetricsForDpi(v41, *(unsigned int *)(*((_QWORD *)this + 91) + 324LL));
    v43 = (int)floor_0((float)((float)v42 * 0.95454544) + 0.5);
    if ( (_BYTE)v24 )
    {
      v44 = v43;
    }
    else
    {
      if ( !*((_QWORD *)this + 61) )
        v25 = FLOAT_2_2272727;
      v43 = (int)floor_0((float)((float)v43 * v25) + 0.5);
      v44 = SystemMetricsForDpi;
    }
    v45 = (CVisual *)*((_QWORD *)this + 62);
    v59 = v43;
    CVisual::SetInsetFromParentTop(v45, v19);
    v46 = (__int64 *)*((_QWORD *)this + 62);
    if ( *((_DWORD *)v46 + 33) != v26 )
    {
      v56 = *v46;
      *((_DWORD *)v46 + 33) = v26;
      (*(void (__fastcall **)(__int64 *, __int64))(v56 + 24))(v46, 2LL);
      v46 = (__int64 *)*((_QWORD *)this + 62);
    }
    v47 = *v46;
    v60 = v44;
    v48 = (*(__int64 (__fastcall **)(__int64 *, int *))(v47 + 96))(v46, &v59);
    v24 = v48;
    if ( v48 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0xC5Cu);
    else
      v57 = *(_DWORD *)(*((_QWORD *)this + 62) + 120LL) + v26;
  }
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0xBF6u);
    return (unsigned int)v24;
  }
  v27 = CTopLevelWindow::UpdateNCAreaButton(this, 0LL, (unsigned int)SystemMetricsForDpi, v19, &v57);
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xBF7u);
    return (unsigned int)v27;
  }
  v28 = (__int64 *)*((_QWORD *)this + 66);
  if ( v28 )
  {
    v49 = *((_QWORD *)this + 91);
    if ( *(_QWORD *)(v49 + 136) || (*((_DWORD *)this + 148) & 0x10000) == 0 )
    {
      v50 = GetSystemMetricsForDpi(49LL, *(unsigned int *)(v49 + 324));
      v51 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 91) + 324LL));
      v28 = (__int64 *)*((_QWORD *)this + 66);
      v16 = v51;
    }
    else
    {
      v50 = 0;
    }
    v52 = *v28;
    v59 = v50;
    v60 = v16;
    v27 = (*(__int64 (__fastcall **)(__int64 *, int *))(v52 + 96))(v28, &v59);
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC08u);
      return (unsigned int)v27;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 66),
      DWORD2(v13) + (*((_DWORD *)this + 151) - *(_DWORD *)(*((_QWORD *)this + 66) + 124LL) - DWORD2(v13)) / 2);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 66), v15);
    v53 = *(_DWORD *)(*((_QWORD *)this + 66) + 120LL);
    if ( v53 > 0 )
      v15 += v53 + 5;
  }
  v29 = (CVisual *)*((_QWORD *)this + 65);
  if ( v29 )
  {
    CVisual::SetInsetFromParentTop(v29, SDWORD2(v13));
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v15);
    v54 = (_DWORD *)*((_QWORD *)this + 65);
    if ( v54[33] != v57 )
    {
      v54[33] = v57;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v54 + 24LL))(v54, 2LL);
      v54 = (_DWORD *)*((_QWORD *)this + 65);
    }
    v57 = v54[30];
    v58 = *((_DWORD *)this + 151) - DWORD2(v13);
    v27 = (*(__int64 (__fastcall **)(_DWORD *, int *))(*(_QWORD *)v54 + 96LL))(v54, &v57);
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC1Cu);
      return (unsigned int)v27;
    }
  }
  v30 = CTopLevelWindow::UpdatePinnedParts(this);
  v31 = v30;
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xC1Fu);
  return v31;
}
