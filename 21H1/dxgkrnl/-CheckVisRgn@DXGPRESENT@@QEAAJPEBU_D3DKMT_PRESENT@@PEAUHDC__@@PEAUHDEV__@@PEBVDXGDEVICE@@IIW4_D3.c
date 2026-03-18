/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C015B830
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000843C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C013BB78 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C013D524 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C015BD00 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C020F5D0 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C0279FB8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C027B41C (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
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
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  __int64 v29; // rsi
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // r12
  int v39; // ecx
  unsigned int v40; // r9d
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  int v60; // edx
  int v61; // edx
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rsi
  PVOID v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned int v72; // r15d
  __int16 v73; // ax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v83; // rax
  unsigned int v84; // ebx
  int v85; // r11d
  __int64 v86; // r15
  _DWORD *v87; // r8
  unsigned int v88; // eax
  int v89; // eax
  unsigned int v90; // eax
  int v91; // r9d
  int v92; // r10d
  int v93; // eax
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  unsigned int *v98; // r10
  _QWORD *v99; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v100; // ecx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  _QWORD *v104; // rax
  int v105; // [rsp+30h] [rbp-58h] BYREF
  int v106; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v107; // [rsp+38h] [rbp-50h]
  int v108; // [rsp+3Ch] [rbp-4Ch]
  int v109; // [rsp+40h] [rbp-48h]
  unsigned int v110; // [rsp+44h] [rbp-44h]
  __int64 v111; // [rsp+48h] [rbp-40h]
  int v114; // [rsp+B0h] [rbp+28h]

  v13 = 0;
  v14 = *((_QWORD *)a5 + 5);
  v15 = *((_QWORD *)a5 + 231);
  v111 = v15;
  v16 = *(_QWORD *)(v14 + 88);
  if ( !(*(unsigned int (**)(void))(v16 + 208))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v75 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v75 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v75);
    return 3223191559LL;
  }
  v105 = 0;
  v19 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v16 + 224))(&v105, 0LL, 0LL);
  v106 = 0;
  v114 = v19;
  v22 = (*(__int64 (__fastcall **)(int *))(v16 + 304))(&v106);
  if ( !v114 || (v15 = 0LL, v111 = 0LL, v105) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v15 )
    {
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      v76 = WdLogNewEntry5_WdEvent(v21, v20);
      *(_QWORD *)(v76 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v76);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v16 + 72))(a3, (char *)this + 24) )
      {
        v78 = WdLogNewEntry5_WdWarning(v24, v23, v25);
        *(_QWORD *)(v78 + 24) = this;
        *(_QWORD *)(v78 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v78);
        return 3221225485LL;
      }
      v26 = (*(__int64 (__fastcall **)(HDC, char *))(v16 + 312))(a3, (char *)this + 40);
      v28 = (_DWORD *)((char *)this + 24);
      if ( v26 )
      {
LABEL_8:
        if ( *v28 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
        {
          *((_DWORD *)this + 1) |= 3u;
          v104 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, v27);
          v104[3] = -1071775738LL;
          v104[4] = this;
          v104[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v104);
          return 3223191558LL;
        }
        if ( (*((_BYTE *)a5 + 1869) & 1) == 0 )
          *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2)
                                                                                             + 616LL)
                                                                                 + 8LL)
                                                                     + 528LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 624LL));
        if ( (!v15 || !v22 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v15 + 2672), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v114 || !v22 || v106 )
          {
            *((_DWORD *)this + 1) |= 0x10u;
            *((_QWORD *)this + 6) = a2->hWindow;
            v79 = WdLogNewEntry5_WdEvent(v28, v27);
            *(_QWORD *)(v79 + 24) = a5;
            WdLogEvent5_WdEvent(v79);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( !v15 )
        {
LABEL_46:
          if ( (a2->Flags.Value & 0x10000) == 0 )
          {
            if ( !a2->hWindow )
            {
LABEL_133:
              if ( (a2->Flags.Value & 0x100) != 0 )
              {
                v98 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v15 + 2672) + 112LL) + 3968LL * a2->VidPnSourceId);
                v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(
                        v98[157],
                        v98[158],
                        v98[159],
                        v98[160]);
                goto LABEL_52;
              }
LABEL_48:
              v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(0LL, 0LL, 0LL, 0LL);
              if ( v55 )
              {
                v58 = (a2->Flags.Value & 0x10000) != 0 ? 5LL : 4LL;
                if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v16 + 88))(a3, v55, v58) == -1 )
                {
                  (*(void (__fastcall **)(__int64))(v16 + 128))(v55);
                  goto LABEL_137;
                }
              }
LABEL_52:
              if ( v55 )
              {
                Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                v60 = *((_DWORD *)this + 1);
                if ( (*(_DWORD *)&Value & 0x10000) != 0 )
                {
                  if ( a2->hDestination )
                    v61 = v60 & 0xFFFFFFEF;
                  else
                    v61 = v60 | 0x10;
                }
                else if ( (v60 & 0x20) != 0 )
                {
                  v61 = v60 | 0x10;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 348LL) & 0x10) != 0
                       && (*(_BYTE *)&Value & 3) != 0 )
                {
                  v61 = v60 | 0x10;
                }
                else
                {
                  v61 = *((_DWORD *)this + 1) ^ (*((_DWORD *)this + 1) ^ (16
                                                                        * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v16 + 136))(
                                                                            v15,
                                                                            a4,
                                                                            a2->hWindow,
                                                                            v55))) & 0x10;
                }
                *((_DWORD *)this + 1) = v61;
                if ( (v61 & 0x10) != 0
                  && (a2->Flags.Value & 0x100) != 0
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v15 + 2672), a5, a2->VidPnSourceId)
                  && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                   *(ADAPTER_DISPLAY **)(v15 + 2672),
                                   a2->VidPnSourceId)
                     + 2) == 41 )
                {
                  if ( (v100 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                        (*(_BYTE *)&v100 & 1) != 0)
                    && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                    || (*(_BYTE *)&v100 & 2) != 0 && !a2->hWindow )
                  {
                    *((_DWORD *)this + 1) &= ~0x10u;
                  }
                }
                if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
                  goto LABEL_66;
                v62 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + 112))(v55, 0LL, 0LL);
                v65 = v62;
                if ( v62 )
                {
                  operator delete[](*((void **)this + 2));
                  v66 = operator new[]((unsigned int)v65, 0x4B677844u, PagedPool);
                  *((_QWORD *)this + 2) = v66;
                  if ( v66 )
                  {
                    v72 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID))(v16 + 112))(v55, (unsigned int)v65, v66);
                    if ( v72 > (unsigned int)v65 )
                    {
                      v103 = WdLogNewEntry5_WdAssertion(v71, v70);
                      *(_QWORD *)(v103 + 24) = 10764LL;
                      WdLogEvent5_WdAssertion(v103);
                    }
                    *((_DWORD *)this + 1) |= 2u;
                    if ( (a2->Flags.Value & 0x10000) != 0 )
                      v73 = (*(__int64 (__fastcall **)(HWND))(v16 + 376))(a2->hWindow);
                    else
                      v73 = 0;
                    *((_WORD *)this + 214) = v73;
                    if ( v72 <= 0x20 )
                    {
                      if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                        (*(void (__fastcall **)(HDC, char *))(v16 + 248))(a3, (char *)this + 128);
                      v13 = 0;
                    }
                    else
                    {
                      v13 = DXGPRESENT::CombineRectList(this, a2, a3, a5, a6, a7);
                    }
LABEL_66:
                    (*(void (__fastcall **)(__int64))(v16 + 128))(v55);
                    *((_QWORD *)this + 6) = a2->hWindow;
                    return v13;
                  }
                  v102 = WdLogNewEntry5_WdLowResource(v68, v67, 0LL, v69);
                  *(_QWORD *)(v102 + 24) = this;
                  *(_QWORD *)(v102 + 32) = v65;
                  WdLogEvent5_WdLowResource(v102);
                }
                else
                {
                  v101 = WdLogNewEntry5_WdError(v64, v63);
                  *(_QWORD *)(v101 + 24) = this;
                  *(_QWORD *)(v101 + 32) = v55;
                  WdLogEvent5_WdError(v101);
                }
                (*(void (__fastcall **)(__int64))(v16 + 128))(v55);
                return 3221225495LL;
              }
LABEL_137:
              v99 = (_QWORD *)WdLogNewEntry5_WdLowResource(v54, v53, v56, v57);
              v99[3] = this;
              v99[4] = a2->hWindow;
              v99[5] = a3;
              v99[6] = a4;
              v99[7] = a2->Flags.Value;
              WdLogEvent5_WdLowResource(v99);
              return 3221225495LL;
            }
            if ( (*(unsigned int (__fastcall **)(HDC))(v16 + 56))(a3)
              && (!v15 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 2672), a5)) )
            {
              *((_DWORD *)this + 1) |= 0x10u;
              *((_QWORD *)this + 6) = a2->hWindow;
              return 0LL;
            }
          }
          if ( a2->hWindow )
            goto LABEL_48;
          goto LABEL_133;
        }
        v29 = *(_QWORD *)(v15 + 2672);
        v30 = 0;
        if ( *(_DWORD *)(v29 + 80) )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)(v29 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 184)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 168)) )
            {
              v80 = WdLogNewEntry5_WdAssertion(v31, v32);
              *(_QWORD *)(v80 + 24) = 6010LL;
              WdLogEvent5_WdAssertion(v80);
            }
            v33 = *(unsigned int *)(v29 + 80);
            if ( v30 < (unsigned int)v33
              || (v81 = WdLogNewEntry5_WdAssertion(v31, v33),
                  *(_QWORD *)(v81 + 24) = 6011LL,
                  WdLogEvent5_WdAssertion(v81),
                  LODWORD(v33) = *(_DWORD *)(v29 + 80),
                  v30 < (unsigned int)v33) )
            {
              if ( a5 == *(const struct DXGDEVICE **)(3968LL * v30 + *(_QWORD *)(v29 + 112) + 688) )
                goto LABEL_46;
            }
            if ( ++v30 >= (unsigned int)v33 )
            {
              v29 = *(_QWORD *)(v15 + 2672);
              break;
            }
          }
        }
        v34 = *(_DWORD *)(v29 + 80);
        v35 = 0;
        if ( v34 )
        {
          v36 = *(_QWORD *)(v29 + 112);
          while ( 1 )
          {
            v37 = 3968LL * v35;
            if ( *(_QWORD *)(v37 + v36 + 688) )
            {
              if ( *(_DWORD *)(v37 + v36 + 696) == 1 )
                break;
            }
            if ( ++v35 >= v34 )
              goto LABEL_88;
          }
          v38 = 1;
        }
        else
        {
LABEL_88:
          v38 = 0;
        }
        v39 = *((_DWORD *)this + 10);
        v40 = v39 + *((_DWORD *)this + 6);
        v41 = v39 + *((_DWORD *)this + 8);
        v42 = *((unsigned int *)this + 11);
        v43 = (unsigned int)(v42 + *((_DWORD *)this + 7));
        v44 = v42 + *((_DWORD *)this + 9);
        v110 = v40;
        v109 = v41;
        v107 = v43;
        v108 = v44;
        if ( v40 != v41 && (_DWORD)v43 != v44 )
        {
          CurrentProcess = PsGetCurrentProcess(v42, v43);
          ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
          v47 = ProcessDxgProcess;
          if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
            || (Current = DXGTHREAD::GetCurrent(v42, v43)) == 0LL
            || (v48 = *((_QWORD *)Current + 1)) == 0 )
          {
            v48 = v47;
          }
          v49 = *(_QWORD *)(v48 + 88);
          if ( !v49 || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v49 + 224))(0LL, 0LL, 0LL) )
          {
            v42 = *(unsigned int *)(v29 + 80);
            if ( (_DWORD)v42 )
            {
              while ( 1 )
              {
                v51 = 3968LL * v13;
                v52 = *(_QWORD *)(v29 + 112);
                if ( *(_DWORD *)(v52 + v51 + 696) == 1 )
                {
                  if ( v13 >= (unsigned int)v42 )
                  {
                    v83 = WdLogNewEntry5_WdAssertion(v42, v43);
                    *(_QWORD *)(v83 + 24) = 6048LL;
                    WdLogEvent5_WdAssertion(v83);
                    v52 = *(_QWORD *)(v29 + 112);
                  }
                  if ( *(_BYTE *)(v52 + v51 + 720) )
                    break;
                }
                v42 = *(unsigned int *)(v29 + 80);
                if ( ++v13 >= (unsigned int)v42 )
                  goto LABEL_94;
              }
            }
            else
            {
LABEL_94:
              v13 = 0;
              v84 = 0;
              if ( !(_DWORD)v42 )
              {
LABEL_122:
                if ( (a2->Flags.Value & 0x100) == 0 && a9 )
                {
                  v96 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v43);
                  v96[3] = 261LL;
                  v96[4] = this;
                  v96[5] = a2->hSource;
                  v96[6] = a2->Flags.Value;
                  v96[7] = a2->VidPnSourceId;
                  WdLogEvent5_WdEvent(v96);
                  return 261LL;
                }
                goto LABEL_43;
              }
              while ( 1 )
              {
                if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v29, v84)
                  || !DmmIsTargetNonStandard(
                        *(struct DXGADAPTER **)(v29 + 16),
                        *(unsigned int *)(*(_QWORD *)(v29 + 112) + 3968LL * v84 + 1068)) )
                {
                  v42 = v110;
                  v85 = v109;
                  v86 = 3968LL * v84;
                  v87 = (_DWORD *)(v86 + *(_QWORD *)(v29 + 112));
                  v88 = v87[157];
                  v43 = (unsigned int)v87[159];
                  if ( (int)v110 <= (int)v88 )
                    v42 = v88;
                  v89 = v109;
                  if ( v109 >= (int)v43 )
                    v89 = v87[159];
                  if ( (int)v42 < v89 )
                  {
                    v90 = v87[158];
                    v91 = v107;
                    v42 = v107;
                    v43 = (unsigned int)v87[160];
                    v92 = v108;
                    if ( (int)v107 <= (int)v90 )
                      v42 = v90;
                    v93 = v108;
                    if ( v108 >= (int)v43 )
                      v93 = v87[160];
                    if ( (int)v42 < v93 )
                    {
                      if ( !v87[174] )
                      {
                        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v29, v84) )
                          goto LABEL_42;
                        v91 = v107;
                        v92 = v108;
                        v85 = v109;
                      }
                      v94 = *(_QWORD *)(v29 + 112);
                      v42 = v110;
                      if ( (signed int)v110 >= *(_DWORD *)(v86 + v94 + 628)
                        && v85 <= *(_DWORD *)(v86 + v94 + 636)
                        && v91 >= *(_DWORD *)(v86 + v94 + 632)
                        && v92 <= *(_DWORD *)(v86 + v94 + 640) )
                      {
                        break;
                      }
                    }
                  }
                }
                if ( ++v84 >= *(_DWORD *)(v29 + 80) )
                {
                  v13 = 0;
                  goto LABEL_122;
                }
              }
              if ( (*((_DWORD *)a5 + 108) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v111 + 2672)))
                && !DXGDEVICE::AllowLegacyPresent(a5, v43) )
              {
                *((_DWORD *)this + 1) |= 3u;
                *((_QWORD *)this + 6) = a2->hWindow;
                v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v43);
                v95[3] = -1071775738LL;
                v95[4] = this;
                v95[5] = a2->hSource;
                v95[6] = a2->Flags.Value;
                v95[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v95);
                if ( !*((_DWORD *)a5 + 108) && v38 )
                  *((_DWORD *)this + 1) |= 0x80u;
                return 3223191558LL;
              }
            }
LABEL_42:
            v13 = 0;
          }
        }
LABEL_43:
        if ( v38 && (a2->Flags.Value & 0x10000) == 0 && !v114 )
        {
          v97 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v43);
          v97[3] = -1071774910LL;
          v97[4] = this;
          v97[5] = a2->hSource;
          v97[6] = a2->Flags.Value;
          v97[7] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v97);
          return 3223192386LL;
        }
        v15 = v111;
        goto LABEL_46;
      }
    }
    else
    {
      if ( !v15 || v15 != *((_QWORD *)a5 + 231) )
      {
        v77 = WdLogNewEntry5_WdAssertion(v21, v20);
        *(_QWORD *)(v77 + 24) = 10436LL;
        WdLogEvent5_WdAssertion(v77);
      }
      v27 = 3968LL * a2->VidPnSourceId;
      v28 = (_DWORD *)((char *)this + 24);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)(v27 + *(_QWORD *)(*(_QWORD *)(v15 + 2672) + 112LL) + 628);
    }
    *((_QWORD *)this + 5) = 0LL;
    goto LABEL_8;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
