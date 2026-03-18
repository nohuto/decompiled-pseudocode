/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C01EA970
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00093C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C01D7AB4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01E9C14 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C01EAE60 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C02C1544 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C032E6B0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C033003C (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  const struct DXGDEVICE *v9; // r13
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  int v16; // eax
  int v17; // r14d
  int v18; // edi
  _DWORD *v19; // r14
  __int64 v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // r9
  unsigned int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r13d
  int v33; // eax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v40; // ecx
  unsigned int v41; // r14d
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdi
  unsigned int v47; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  int v49; // edx
  int v50; // edx
  unsigned int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned int v55; // r14d
  __int16 v56; // ax
  struct DXGTHREAD *Current; // rax
  unsigned int v59; // edi
  int v60; // r9d
  __int64 v61; // r14
  _DWORD *v62; // rdx
  int v63; // ecx
  int v64; // eax
  int v65; // ecx
  int v66; // eax
  int v67; // r8d
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned int *v70; // r10
  HDEV v71; // rdi
  const wchar_t *v72; // r9
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v73; // ecx
  int v74; // [rsp+50h] [rbp-58h] BYREF
  int v75; // [rsp+54h] [rbp-54h] BYREF
  int v76; // [rsp+58h] [rbp-50h]
  int v77; // [rsp+5Ch] [rbp-4Ch]
  int v78; // [rsp+60h] [rbp-48h]
  int v79; // [rsp+64h] [rbp-44h]
  __int64 v80; // [rsp+68h] [rbp-40h]

  v9 = a5;
  v12 = 0;
  v13 = *((_QWORD *)a5 + 5);
  v14 = *((_QWORD *)a5 + 231);
  v80 = v14;
  v15 = *(_QWORD *)(v13 + 88);
  if ( !(*(unsigned int (**)(void))(v15 + 208))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    WdLogSingleEntry1(4LL, -1071775737LL);
    return 3223191559LL;
  }
  v74 = 0;
  v16 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v15 + 224))(&v74, 0LL, 0LL);
  v75 = 0;
  v17 = v16;
  v79 = v16;
  v18 = (*(__int64 (__fastcall **)(int *))(v15 + 304))(&v75);
  if ( !v17 || (v14 = 0LL, v80 = 0LL, v74) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v14 )
    {
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      WdLogSingleEntry1(4LL, -1071775737LL);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      v19 = (_DWORD *)((char *)this + 24);
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v15 + 72))(a3, (char *)this + 24) )
      {
        WdLogSingleEntry2(3LL, this, a2->hWindow);
        return 3221225485LL;
      }
      if ( (*(unsigned int (__fastcall **)(HDC, char *))(v15 + 312))(a3, (char *)this + 40) )
        goto LABEL_8;
    }
    else
    {
      if ( !v14 || v14 != *((_QWORD *)a5 + 231) )
      {
        WdLogSingleEntry1(1LL, 10657LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter == pDevice->GetDisplayAdapter(pPresent->VidPnSourceId))",
          10657LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v19 = (_DWORD *)((char *)this + 24);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)(4000LL * a2->VidPnSourceId
                                                 + *(_QWORD *)(*(_QWORD *)(v14 + 2792) + 128LL)
                                                 + 628);
    }
    *((_QWORD *)this + 5) = 0LL;
LABEL_8:
    if ( *v19 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
    {
      *((_DWORD *)this + 1) |= 3u;
      WdLogSingleEntry3(4LL, -1071775738LL, this, a2->VidPnSourceId);
      return 3223191558LL;
    }
    if ( (*((_BYTE *)a5 + 1869) & 1) == 0 )
      *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 624LL)
                                                                             + 8LL)
                                                                 + 528LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 632LL));
    if ( !v14 || !v18 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v14 + 2792), a2->VidPnSourceId) )
    {
      if ( (a2->Flags.Value & 0x10000) == 0 )
      {
        if ( !v79 || !v18 || v75 )
        {
          *((_DWORD *)this + 1) |= 0x10u;
          *((_QWORD *)this + 6) = a2->hWindow;
          WdLogSingleEntry1(4LL, a5);
          return 0LL;
        }
        return 3223192386LL;
      }
      if ( !v14 )
      {
LABEL_45:
        if ( (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !a2->hWindow )
          {
LABEL_134:
            if ( (a2->Flags.Value & 0x100) != 0 )
            {
              v70 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v14 + 2792) + 128LL) + 4000LL * a2->VidPnSourceId);
              v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v15 + 80))(
                      v70[157],
                      v70[158],
                      v70[159],
                      v70[160]);
              goto LABEL_51;
            }
LABEL_47:
            v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v15 + 80))(0LL, 0LL, 0LL, 0LL);
            v46 = v45;
            if ( v45 )
            {
              v47 = (a2->Flags.Value & 0x10000) != 0 ? 5 : 4;
              if ( (*(unsigned int (__fastcall **)(HDC, __int64, _QWORD))(v15 + 88))(a3, v45, v47) == -1 )
              {
                (*(void (__fastcall **)(__int64))(v15 + 128))(v46);
                v71 = a4;
                WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
                v72 = L"0x%I64x unable to get VisRgn with hWindow=0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
                goto LABEL_139;
              }
            }
LABEL_51:
            Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            if ( v46 )
            {
              v49 = *((_DWORD *)this + 1);
              if ( (*(_DWORD *)&Value & 0x10000) != 0 )
              {
                if ( a2->hDestination )
                  v50 = v49 & 0xFFFFFFEF;
                else
                  v50 = v49 | 0x10;
              }
              else if ( (v49 & 0x20) != 0 )
              {
                v50 = v49 | 0x10;
              }
              else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 436LL) & 0x10) != 0
                     && (*(_BYTE *)&Value & 3) != 0 )
              {
                v50 = v49 | 0x10;
              }
              else
              {
                v50 = *((_DWORD *)this + 1) ^ (*((_DWORD *)this + 1) ^ (16
                                                                      * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v15 + 136))(
                                                                          v14,
                                                                          a4,
                                                                          a2->hWindow,
                                                                          v46))) & 0x10;
              }
              *((_DWORD *)this + 1) = v50;
              if ( (v50 & 0x10) != 0
                && (a2->Flags.Value & 0x100) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 2792), v9, a2->VidPnSourceId)
                && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v14 + 2792), a2->VidPnSourceId)
                   + 2) == 41 )
              {
                if ( (v73 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                      (*(_BYTE *)&v73 & 1) != 0)
                  && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                  || (*(_BYTE *)&v73 & 2) != 0 && !a2->hWindow )
                {
                  *((_DWORD *)this + 1) &= ~0x10u;
                }
              }
              if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
                goto LABEL_65;
              v51 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v15 + 112))(v46, 0LL, 0LL);
              v52 = v51;
              if ( v51 )
              {
                operator delete[](*((void **)this + 2));
                v54 = operator new[]((unsigned int)v52, 0x4B677844u, 256LL, v53);
                *((_QWORD *)this + 2) = v54;
                if ( v54 )
                {
                  v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v15 + 112))(v46, (unsigned int)v52, v54);
                  if ( v55 > (unsigned int)v52 )
                  {
                    WdLogSingleEntry1(1LL, 10985LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"RealSize <= RgnDataSize",
                      10985LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  *((_DWORD *)this + 1) |= 2u;
                  if ( (a2->Flags.Value & 0x10000) != 0 )
                    v56 = (*(__int64 (__fastcall **)(HWND))(v15 + 376))(a2->hWindow);
                  else
                    v56 = 0;
                  *((_WORD *)this + 214) = v56;
                  if ( v55 <= 0x20 )
                  {
                    if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                      (*(void (__fastcall **)(HDC, char *))(v15 + 248))(a3, (char *)this + 128);
                  }
                  else
                  {
                    v12 = DXGPRESENT::CombineRectList(this, a2, a3, v9, a6, a7);
                  }
LABEL_65:
                  (*(void (__fastcall **)(__int64))(v15 + 128))(v46);
                  *((_QWORD *)this + 6) = a2->hWindow;
                  return v12;
                }
                WdLogSingleEntry2(6LL, this, v52);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"0x%I64x fails to allocate memory of size 0x%I64x for VisRgnData",
                  (__int64)this,
                  v52,
                  0LL,
                  0LL,
                  0LL);
              }
              else
              {
                WdLogSingleEntry2(2LL, this, v46);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x fails to get the size for VisRgnData from 0x%I64x",
                  (__int64)this,
                  v46,
                  0LL,
                  0LL,
                  0LL);
              }
              (*(void (__fastcall **)(__int64))(v15 + 128))(v46);
              return 3221225495LL;
            }
            v71 = a4;
            WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
            v72 = L"0x%I64x not able to create hVisRgn hWindow = 0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
LABEL_139:
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)v72,
              (__int64)this,
              (__int64)a2->hWindow,
              (__int64)a3,
              (__int64)v71,
              a2->Flags.Value);
            return 3221225495LL;
          }
          if ( (*(unsigned int (__fastcall **)(HDC))(v15 + 56))(a3)
            && (!v14 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v14 + 2792), v9)) )
          {
            *((_DWORD *)this + 1) |= 0x10u;
            *((_QWORD *)this + 6) = a2->hWindow;
            return 0LL;
          }
        }
        if ( a2->hWindow )
          goto LABEL_47;
        goto LABEL_134;
      }
    }
    v20 = *(_QWORD *)(v14 + 2792);
    v21 = 0;
    if ( *(_DWORD *)(v20 + 96) )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)(v20 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184)
          && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
        {
          WdLogSingleEntry1(1LL, 6088LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"IsCoreResourceSharedOwner()",
            6088LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v23 = *(_DWORD *)(v20 + 96);
        if ( v21 < v23
          || (WdLogSingleEntry1(1LL, 6089LL),
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"VidPnSourceId < m_NumVidPnSources",
                6089LL,
                0LL,
                0LL,
                0LL,
                0LL),
              v23 = *(_DWORD *)(v20 + 96),
              v21 < v23) )
        {
          if ( a5 == *(const struct DXGDEVICE **)(4000LL * v21 + *(_QWORD *)(v20 + 128) + 728) )
            break;
        }
        if ( ++v21 >= v23 )
        {
          v20 = *(_QWORD *)(v80 + 2792);
          goto LABEL_22;
        }
      }
      v14 = v80;
      goto LABEL_45;
    }
LABEL_22:
    v24 = *(unsigned int *)(v20 + 96);
    v25 = 0;
    if ( (_DWORD)v24 )
    {
      v26 = *(_QWORD *)(v20 + 128);
      while ( 1 )
      {
        v27 = 4000LL * v25;
        if ( *(_QWORD *)(v27 + v26 + 728) )
        {
          if ( *(_DWORD *)(v27 + v26 + 736) == 1 )
            break;
        }
        if ( ++v25 >= (unsigned int)v24 )
          goto LABEL_27;
      }
      LOBYTE(v12) = 1;
    }
LABEL_27:
    v28 = *((_DWORD *)this + 10);
    v29 = (unsigned int)(v28 + *v19);
    v30 = (unsigned int)(v28 + *((_DWORD *)this + 8));
    v31 = *((unsigned int *)this + 11);
    v32 = v31 + *((_DWORD *)this + 7);
    v33 = v31 + *((_DWORD *)this + 9);
    v78 = v29;
    v77 = v30;
    v76 = v33;
    if ( (_DWORD)v29 != (_DWORD)v30 && v32 != v33 )
    {
      CurrentProcess = PsGetCurrentProcess(v31, v30, v29, v24);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v36 = ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
        || (Current = DXGTHREAD::GetCurrent()) == 0LL
        || (v37 = *((_QWORD *)Current + 3)) == 0 )
      {
        v37 = v36;
      }
      v38 = *(_QWORD *)(v37 + 88);
      if ( !v38 || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v38 + 224))(0LL, 0LL, 0LL) )
      {
        v40 = *(_DWORD *)(v20 + 96);
        v41 = 0;
        if ( v40 )
        {
          while ( 1 )
          {
            v42 = 4000LL * v41;
            v43 = *(_QWORD *)(v20 + 128);
            if ( *(_DWORD *)(v43 + v42 + 736) == 1 )
            {
              if ( v41 >= v40 )
              {
                WdLogSingleEntry1(1LL, 6126LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"VidPnSourceId < m_NumVidPnSources",
                  6126LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v43 = *(_QWORD *)(v20 + 128);
              }
              if ( *(_BYTE *)(v43 + v42 + 760) )
                break;
            }
            v40 = *(_DWORD *)(v20 + 96);
            if ( ++v41 >= v40 )
              goto LABEL_95;
          }
        }
        else
        {
LABEL_95:
          v59 = 0;
          if ( v40 )
          {
            while ( 1 )
            {
              if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v20, v59)
                || !DmmIsTargetNonStandard(
                      *(struct DXGADAPTER **)(v20 + 16),
                      *(_DWORD *)(4000LL * v59 + *(_QWORD *)(v20 + 128) + 1088)) )
              {
                v60 = v77;
                v61 = 4000LL * v59;
                v62 = (_DWORD *)(v61 + *(_QWORD *)(v20 + 128));
                v63 = v62[157];
                v64 = v62[159];
                if ( v78 > v63 )
                  v63 = v78;
                if ( v77 < v64 )
                  v64 = v77;
                if ( v63 < v64 )
                {
                  v65 = v62[158];
                  v66 = v62[160];
                  v67 = v76;
                  if ( v32 > v65 )
                    v65 = v32;
                  if ( v76 < v66 )
                    v66 = v76;
                  if ( v65 < v66 )
                  {
                    if ( !v62[184] )
                    {
                      if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v20, v59) )
                        goto LABEL_41;
                      v67 = v76;
                      v60 = v77;
                    }
                    v68 = *(_QWORD *)(v20 + 128);
                    if ( v78 >= *(_DWORD *)(v61 + v68 + 628)
                      && v60 <= *(_DWORD *)(v61 + v68 + 636)
                      && v32 >= *(_DWORD *)(v61 + v68 + 632)
                      && v67 <= *(_DWORD *)(v61 + v68 + 640) )
                    {
                      break;
                    }
                  }
                }
              }
              if ( ++v59 >= *(_DWORD *)(v20 + 96) )
                goto LABEL_122;
            }
            v9 = a5;
            v14 = v80;
            if ( (*((_DWORD *)a5 + 108) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v80 + 2792)))
              && !DXGDEVICE::AllowLegacyPresent(a5, (unsigned int)v62) )
            {
              *((_DWORD *)this + 1) |= 3u;
              *((_QWORD *)this + 6) = a2->hWindow;
              WdLogSingleEntry5(4LL, -1071775738LL, this, a2->hSource, a2->Flags.Value, a2->VidPnSourceId);
              if ( !*((_DWORD *)a5 + 108) && (_BYTE)v12 )
                *((_DWORD *)this + 1) |= 0x80u;
              return 3223191558LL;
            }
            goto LABEL_42;
          }
LABEL_122:
          v69 = a2->Flags.Value;
          if ( (v69 & 0x100) == 0 && a9 )
          {
            WdLogSingleEntry5(4LL, 261LL, this, a2->hSource, v69, a2->VidPnSourceId);
            return 261LL;
          }
        }
      }
    }
LABEL_41:
    v9 = a5;
    v14 = v80;
LABEL_42:
    if ( (_BYTE)v12 )
    {
      v44 = a2->Flags.Value;
      if ( (v44 & 0x10000) == 0 && !v79 )
      {
        WdLogSingleEntry5(4LL, -1071774910LL, this, a2->hSource, v44, a2->VidPnSourceId);
        return 3223192386LL;
      }
    }
    v12 = 0;
    goto LABEL_45;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
