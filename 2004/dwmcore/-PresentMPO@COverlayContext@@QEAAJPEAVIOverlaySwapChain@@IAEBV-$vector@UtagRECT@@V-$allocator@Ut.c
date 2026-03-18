/*
 * XREFs of ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E6388
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800E6210 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 *     ??$ReleaseInterfaceNoNULL@UIDXGIResource@@@@YAXPEAUIDXGIResource@@@Z @ 0x18017AD94 (--$ReleaseInterfaceNoNULL@UIDXGIResource@@@@YAXPEAUIDXGIResource@@@Z.c)
 *     ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x18017D020 (-DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18017D170 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18017E5B8 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x18017E7E4 (-UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x18017F63C (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::PresentMPO(COverlayContext *this, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r14
  unsigned int Ptr; // r13d
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  char *v12; // r10
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // r15d
  int v16; // r12d
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rax
  char *v20; // rdx
  char *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  unsigned int v33; // r9d
  char v34; // dl
  unsigned int v35; // ecx
  _DWORD *v36; // rax
  unsigned int v37; // ecx
  _DWORD *v38; // rax
  __int64 (__fastcall *v39)(__int64, __int64, _QWORD, _QWORD, const void *, _DWORD *, _DWORD); // rbx
  const void *updated; // rax
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // r8
  char v44; // al
  _DWORD *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rbx
  __int64 v49; // rsi
  unsigned int v51; // [rsp+20h] [rbp-138h]
  int v52; // [rsp+B0h] [rbp-A8h]
  unsigned int v53; // [rsp+B4h] [rbp-A4h]
  _DWORD *lpMem; // [rsp+C0h] [rbp-98h]
  char *v56; // [rsp+D0h] [rbp-88h]
  char *v57; // [rsp+D8h] [rbp-80h]
  __int64 v59; // [rsp+E8h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+F0h] [rbp-68h] BYREF

  lpMem = 0LL;
  v6 = 0;
  v7 = 0LL;
  v53 = 0;
  v60.Ptr = (*((_QWORD *)this + 915) - *((_QWORD *)this + 914)) / 224LL;
  Ptr = v60.Ptr;
  COverlayContext::DbgSaveOverlayStateInfoBefore(this);
  if ( LODWORD(v60.Ptr) || *((_BYTE *)this + 11033) )
  {
    v15 = v60.Ptr;
    if ( LODWORD(v60.Ptr) + 1 <= (unsigned int)(*((_DWORD *)this + 2852) + 1) )
      v15 = *((_DWORD *)this + 2852);
    v6 = v15 + 1;
    v10 = operator new(saturated_mul(v6, 0x88uLL));
    if ( !v10 )
    {
      v51 = 2485;
      goto LABEL_14;
    }
    lpMem = operator new(saturated_mul(v6, 4uLL));
    if ( !lpMem )
    {
      v51 = 2488;
      goto LABEL_14;
    }
    memset_0(v10, 0, 136LL * v6);
    v12 = 0LL;
    if ( LODWORD(v60.Ptr)
      && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*((COverlayContext::OverlayPlaneInfo **)this + 914)) )
    {
      v17 = v60.Ptr;
      v18 = (int)v12;
    }
    else
    {
      v17 = (int)v12;
      v18 = 1;
    }
    if ( *((_BYTE *)this + 11032) == (_BYTE)v12 )
    {
      if ( *((_BYTE *)this + 11416) == (_BYTE)v12 )
      {
LABEL_27:
        if ( Ptr )
        {
          v57 = v12;
          v52 = v18;
          v20 = v12;
          v56 = v12;
          v21 = v12;
          LODWORD(v11) = v18;
          do
          {
            v22 = *((_QWORD *)this + 914);
            if ( v21[v22 + 220] == (_BYTE)v12 )
            {
              lpMem[v53++] = v11;
            }
            else
            {
              *(_DWORD *)&v21[*((_QWORD *)this + 914) + 192] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v21[v22 + 16]
                                                                                                 + 240LL))(*(_QWORD *)&v21[v22 + 16]);
              *(_DWORD *)&v21[*((_QWORD *)this + 914) + 204] = v52;
              v21[*((_QWORD *)this + 914) + 217] = 0;
              v23 = *(_QWORD *)&v21[*((_QWORD *)this + 914) + 16];
              *(_DWORD *)&v21[*((_QWORD *)this + 914) + 212] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23
                                                                                                  + 232LL))(v23);
              v59 = 34LL * (unsigned int)v7;
              v10[v59] = v52;
              v10[v59 + 1] = 1;
              v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _DWORD *))(*(_QWORD *)a2 + 120LL))(
                      a2,
                      *(_QWORD *)&v21[*((_QWORD *)this + 914) + 16],
                      &v10[v59 + 2],
                      &v10[v59 + 4]);
              v12 = 0LL;
              v16 = v24;
              if ( v24 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xA06u, 0LL);
                goto LABEL_68;
              }
              v26 = *((_QWORD *)this + 914);
              v21 = v57;
              LODWORD(v11) = v52;
              v20 = v56;
              v27 = *(_OWORD *)&v57[v26 + 48];
              v28 = *(_OWORD *)&v57[v26 + 64];
              v29 = *(_OWORD *)&v57[v26 + 80];
              v30 = *(_OWORD *)&v57[v26 + 96];
              v31 = *(_OWORD *)&v57[v26 + 112];
              v32 = *(_OWORD *)&v57[v26 + 128];
              *(_OWORD *)&v10[v59 + 6] = *(_OWORD *)&v57[v26 + 32];
              *(_OWORD *)&v10[v59 + 10] = v27;
              *(_OWORD *)&v10[v59 + 14] = v28;
              *(_OWORD *)&v10[v59 + 18] = v29;
              *(_OWORD *)&v10[v59 + 22] = v30;
              *(_OWORD *)&v10[v59 + 26] = v31;
              *(_OWORD *)&v10[v59 + 30] = v32;
              if ( (unsigned int)(v52 - v18) < 2 )
              {
                v56[1104 * *((int *)this + 4520) + 11936 + (_QWORD)this] = 1;
                LODWORD(v11) = v52;
              }
              v7 = (unsigned int)(v7 + 1);
            }
            v11 = (unsigned int)(v11 + 1);
            v21 += 224;
            v52 = v11;
            v20 += 480;
            v57 = v21;
            v56 = v20;
          }
          while ( (int)v11 - v18 < Ptr );
        }
        v33 = Ptr + 1;
        if ( Ptr + 1 < v6 )
        {
          while ( 1 )
          {
            v34 = (char)v12;
            v35 = (unsigned int)v12;
            if ( (_DWORD)v7 )
            {
              v36 = v10;
              while ( *v36 != v18 )
              {
                ++v35;
                v36 += 34;
                if ( v35 >= (unsigned int)v7 )
                  goto LABEL_44;
              }
              ++v18;
              v34 = 1;
            }
LABEL_44:
            v37 = (unsigned int)v12;
            if ( v53 )
            {
              v38 = lpMem;
              while ( *v38 != v18 )
              {
                ++v37;
                ++v38;
                if ( v37 >= v53 )
                  goto LABEL_50;
              }
              ++v18;
              v34 = 1;
            }
LABEL_50:
            if ( !v34 )
            {
              ++v33;
              v11 = 136LL * (unsigned int)v7;
              v7 = (unsigned int)(v7 + 1);
              *(_DWORD *)((char *)v10 + v11) = v18;
              *(_DWORD *)((char *)v10 + v11 + 4) = (_DWORD)v12;
              if ( v33 >= v6 )
                break;
            }
          }
          Ptr = v60.Ptr;
        }
LABEL_53:
        if ( !(_DWORD)v7 )
        {
          v16 = -2003304309;
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003304309, 0xA91u, v12);
          goto LABEL_67;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0q_EventWriteTransfer(v11, &EVTDESC_OVERLAY_PRESENT_Start, (unsigned int)v7);
        v39 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, const void *, _DWORD *, _DWORD))(*(_QWORD *)a2 + 144LL);
        updated = COverlayContext::UpdateHDRMetaData(this);
        v16 = v39(a2, 1LL, a3, *((unsigned int *)this + 4), updated, v10, v7);
        v44 = Microsoft_Windows_Dwm_CoreEnableBits;
        if ( v16 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
            goto LABEL_64;
          v45 = v10 + 20;
          do
          {
            if ( (v44 & 0x20) != 0 )
            {
              McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer(
                v42,
                v41,
                *((_QWORD *)v45 - 9),
                *(v45 - 19),
                *(v45 - 20),
                *(v45 - 14),
                *(v45 - 13),
                *(v45 - 12),
                *(v45 - 11),
                *(v45 - 10),
                *(v45 - 9),
                *(v45 - 8),
                *(v45 - 7),
                *(v45 - 6),
                *(v45 - 5),
                *(v45 - 4),
                *(v45 - 3),
                *(v45 - 2),
                *(v45 - 1),
                *v45,
                v45[5]);
              v44 = Microsoft_Windows_Dwm_CoreEnableBits;
            }
            v45 += 34;
            --v7;
          }
          while ( v7 );
        }
        if ( (v44 & 0x20) != 0 )
          McGenEventWrite_EventWriteTransfer(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_OVERLAY_PRESENT_Stop,
            v43,
            1u,
            &v60);
LABEL_64:
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v16, 0xA86u, 0LL);
          goto LABEL_68;
        }
LABEL_67:
        *((_BYTE *)this + 11416) = *((_BYTE *)this + 11032);
        *((_BYTE *)this + 11424) = *((_BYTE *)this + 11033);
        *((_DWORD *)this + 2852) = Ptr;
        goto LABEL_68;
      }
      *v10 = v17;
      v10[1] = (_DWORD)v12;
    }
    else
    {
      *v10 = v17;
      v10[1] = 1;
      v10[4] = (_DWORD)v12;
      *(_OWORD *)(v10 + 6) = *(_OWORD *)((char *)this + 10920);
      *(_OWORD *)(v10 + 10) = *(_OWORD *)((char *)this + 10936);
      *(_OWORD *)(v10 + 14) = *(_OWORD *)((char *)this + 10952);
      *(_OWORD *)(v10 + 18) = *(_OWORD *)((char *)this + 10968);
      *(_OWORD *)(v10 + 22) = *(_OWORD *)((char *)this + 10984);
      *(_OWORD *)(v10 + 26) = *(_OWORD *)((char *)this + 11000);
      *(_OWORD *)(v10 + 30) = *(_OWORD *)((char *)this + 11016);
      v19 = (__int64)(a4[1] - *a4) >> 4;
      v10[21] = v19;
      if ( (_DWORD)v19 )
        *((_QWORD *)v10 + 11) = *a4;
    }
    v7 = 1LL;
    *((_QWORD *)v10 + 1) = v12;
    goto LABEL_27;
  }
  v7 = (unsigned int)(*((_DWORD *)this + 2852) + 1);
  v10 = operator new(saturated_mul(v7, 0x88uLL));
  if ( v10 )
  {
    memset_0(v10, 0, 136LL * (unsigned int)v7);
    v12 = 0LL;
    v13 = 0;
    if ( (_DWORD)v7 )
    {
      v11 = (__int64)v10;
      do
      {
        *(_DWORD *)v11 = v13++;
        v11 += 136LL;
      }
      while ( v13 < (unsigned int)v7 );
    }
    v10[1] = 1;
    *(_OWORD *)(v10 + 6) = *(_OWORD *)((char *)this + 10920);
    *(_OWORD *)(v10 + 10) = *(_OWORD *)((char *)this + 10936);
    *(_OWORD *)(v10 + 14) = *(_OWORD *)((char *)this + 10952);
    *(_OWORD *)(v10 + 18) = *(_OWORD *)((char *)this + 10968);
    *(_OWORD *)(v10 + 22) = *(_OWORD *)((char *)this + 10984);
    *(_OWORD *)(v10 + 26) = *(_OWORD *)((char *)this + 11000);
    *(_OWORD *)(v10 + 30) = *(_OWORD *)((char *)this + 11016);
    v14 = (__int64)(a4[1] - *a4) >> 4;
    v10[21] = v14;
    if ( (_DWORD)v14 )
      *((_QWORD *)v10 + 11) = *a4;
    goto LABEL_53;
  }
  v51 = 2629;
LABEL_14:
  v16 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, v51, 0LL);
LABEL_68:
  COverlayContext::DbgSaveOverlayStateInfoAfter(this);
  v46 = *((_QWORD *)this + 914);
  v47 = *((_QWORD *)this + 915);
  while ( v46 != v47 )
  {
    *(_BYTE *)(v46 + 220) = 0;
    v46 += 224LL;
  }
  if ( v10 )
  {
    if ( v6 )
    {
      v48 = v10 + 2;
      v49 = v6;
      do
      {
        ReleaseInterfaceNoNULL<IDXGIResource>(*v48);
        v48 += 17;
        --v49;
      }
      while ( v49 );
    }
    operator delete(v10);
  }
  if ( lpMem )
    operator delete(lpMem);
  return (unsigned int)v16;
}
