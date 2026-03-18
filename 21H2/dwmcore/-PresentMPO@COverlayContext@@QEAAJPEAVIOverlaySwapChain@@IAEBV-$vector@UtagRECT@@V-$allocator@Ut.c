/*
 * XREFs of ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18004FA7C
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800BD210 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x1800500BC (-DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x180050204 (-UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x180050318 (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0d_EventWriteTransfer @ 0x180112C1E (McTemplateU0d_EventWriteTransfer.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x1801B9250 (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::PresentMPO(COverlayContext *this, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // r12
  unsigned int v7; // r13d
  unsigned __int64 v8; // r14
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  const void *updated; // rax
  int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // r15d
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  int v24; // r13d
  SIZE_T v25; // rax
  __int64 v26; // rbx
  _DWORD *v27; // r11
  __int64 v28; // rax
  int v29; // r15d
  __int64 v30; // rax
  unsigned int v31; // r10d
  int v32; // edx
  int *v33; // r8
  int v34; // eax
  __int64 v35; // rax
  ULONGLONG Ptr; // r15
  char v37; // r8
  unsigned int v38; // ecx
  _DWORD *v39; // rax
  unsigned int v40; // ecx
  _DWORD *v41; // rax
  _DWORD *v42; // rbx
  char v43; // [rsp+B0h] [rbp-88h]
  unsigned int v44; // [rsp+B4h] [rbp-84h]
  int v45; // [rsp+B8h] [rbp-80h]
  unsigned int v46; // [rsp+BCh] [rbp-7Ch]
  __int64 v48; // [rsp+C8h] [rbp-70h]
  __int64 v49; // [rsp+D0h] [rbp-68h]
  _DWORD *v50; // [rsp+D8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+E8h] [rbp-50h] BYREF

  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5);
  v7 = 0;
  v50 = 0LL;
  v8 = 0LL;
  v44 = 0;
  COverlayContext::DbgSaveOverlayStateInfoBefore(this);
  if ( !(_DWORD)v5 && !*((_BYTE *)this + 11025) )
  {
    v8 = (unsigned int)(*((_DWORD *)this + 2820) + 1);
    v9 = operator new(saturated_mul(v8, 0x88uLL));
    memset_0(v9, 0, 136 * v8);
    v11 = 0;
    if ( (_DWORD)v8 )
    {
      v10 = (__int64)v9;
      do
      {
        *(_DWORD *)v10 = v11++;
        v10 += 136LL;
      }
      while ( v11 < (unsigned int)v8 );
    }
    v9[1] = 1;
    *(_OWORD *)(v9 + 6) = *((_OWORD *)this + 682);
    *(_OWORD *)(v9 + 10) = *((_OWORD *)this + 683);
    *(_OWORD *)(v9 + 14) = *((_OWORD *)this + 684);
    *(_OWORD *)(v9 + 18) = *((_OWORD *)this + 685);
    *(_OWORD *)(v9 + 22) = *((_OWORD *)this + 686);
    *(_OWORD *)(v9 + 26) = *((_OWORD *)this + 687);
    *(_OWORD *)(v9 + 30) = *((_OWORD *)this + 688);
    v12 = (__int64)(a4[1] - *a4) >> 4;
    v9[21] = v12;
    if ( (_DWORD)v12 )
      *((_QWORD *)v9 + 11) = *a4;
    goto LABEL_8;
  }
  v24 = v5;
  if ( (int)v5 + 1 <= (unsigned int)(*((_DWORD *)this + 2820) + 1) )
    v24 = *((_DWORD *)this + 2820);
  v7 = v24 + 1;
  v9 = operator new(saturated_mul(v7, 0x88uLL));
  memset_0(v9, 0, 136LL * v7);
  v25 = 4LL * v7;
  if ( !is_mul_ok(v7, 4uLL) )
    v25 = -1LL;
  v26 = 0LL;
  v50 = operator new(v25);
  v27 = v50;
  if ( *((_BYTE *)this + 11024) )
  {
    *v9 = 0;
    v9[1] = 1;
    v9[4] = 0;
    *(_OWORD *)(v9 + 6) = *((_OWORD *)this + 682);
    *(_OWORD *)(v9 + 10) = *((_OWORD *)this + 683);
    *(_OWORD *)(v9 + 14) = *((_OWORD *)this + 684);
    *(_OWORD *)(v9 + 18) = *((_OWORD *)this + 685);
    *(_OWORD *)(v9 + 22) = *((_OWORD *)this + 686);
    *(_OWORD *)(v9 + 26) = *((_OWORD *)this + 687);
    *(_OWORD *)(v9 + 30) = *((_OWORD *)this + 688);
    v28 = (__int64)(a4[1] - *a4) >> 4;
    v9[21] = v28;
    if ( (_DWORD)v28 )
      *((_QWORD *)v9 + 11) = *a4;
  }
  else
  {
    if ( !*((_BYTE *)this + 11296) )
      goto LABEL_36;
    *(_QWORD *)v9 = 0LL;
  }
  v8 = 1LL;
  *((_QWORD *)v9 + 1) = 0LL;
LABEL_36:
  if ( (_DWORD)v5 )
  {
    v49 = 0LL;
    v29 = 1;
    v45 = 1;
    do
    {
      v30 = *((_QWORD *)this + 913);
      v46 = v29;
      if ( *(_BYTE *)(v26 + v30 + 184) )
      {
        v43 = *(_BYTE *)(v26 + v30 + 181);
        v48 = *(_QWORD *)(v26 + v30 + 16);
        *(_DWORD *)(v26 + *((_QWORD *)this + 913) + 188) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 296LL))(v48);
        *(_DWORD *)(v26 + *((_QWORD *)this + 913) + 208) = v29;
        *(_BYTE *)(v26 + *((_QWORD *)this + 913) + 181) = 0;
        *(_DWORD *)(v26 + *((_QWORD *)this + 913) + 216) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 280LL))(v48);
        v33 = &v9[34 * (unsigned int)v8];
        v52.Ptr = (ULONGLONG)v33;
        *v33 = v29;
        v33[1] = 1;
        v34 = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)a2 + 168LL))(
                a2,
                v48,
                v33 + 2,
                v33 + 4);
        v17 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v34, 0xA62u, 0LL);
          goto LABEL_15;
        }
        v35 = *((_QWORD *)this + 913);
        Ptr = v52.Ptr;
        *(_OWORD *)(v52.Ptr + 24) = *(_OWORD *)(v26 + v35 + 32);
        *(_OWORD *)(Ptr + 40) = *(_OWORD *)(v26 + v35 + 48);
        *(_OWORD *)(Ptr + 56) = *(_OWORD *)(v26 + v35 + 64);
        *(_OWORD *)(Ptr + 72) = *(_OWORD *)(v26 + v35 + 80);
        *(_OWORD *)(Ptr + 88) = *(_OWORD *)(v26 + v35 + 96);
        *(_OWORD *)(Ptr + 104) = *(_OWORD *)(v26 + v35 + 112);
        *(_OWORD *)(Ptr + 120) = *(_OWORD *)(v26 + v35 + 128);
        if ( !v43 )
          *(_DWORD *)(Ptr + 84) = (*(__int64 (__fastcall **)(__int64, ULONGLONG))(*(_QWORD *)v48 + 288LL))(
                                    v48,
                                    Ptr + 88);
        v29 = v45;
        if ( (unsigned int)(v45 - 1) < 2 )
        {
          v10 = v49 + 1104LL * *((int *)this + 4490);
          *((_BYTE *)this + v10 + 11816) = 1;
        }
        v27 = v50;
        v8 = (unsigned int)(v8 + 1);
      }
      else
      {
        v27[v44] = v29;
        v10 = ++v44;
      }
      v49 += 480LL;
      ++v29;
      v26 += 224LL;
      v45 = v29;
    }
    while ( v46 < (unsigned int)v5 );
  }
  v31 = v5 + 1;
  v32 = 1;
  if ( (int)v5 + 1 < v7 )
  {
    while ( 1 )
    {
      v37 = 0;
      v38 = 0;
      if ( (_DWORD)v8 )
      {
        v39 = v9;
        while ( *v39 != v32 )
        {
          ++v38;
          v39 += 34;
          if ( v38 >= (unsigned int)v8 )
            goto LABEL_60;
        }
        ++v32;
        v37 = 1;
      }
LABEL_60:
      v40 = 0;
      if ( v44 )
      {
        v41 = v27;
        while ( *v41 != v32 )
        {
          ++v40;
          ++v41;
          if ( v40 >= v44 )
            goto LABEL_66;
        }
        ++v32;
        v37 = 1;
      }
LABEL_66:
      if ( !v37 )
      {
        ++v31;
        v10 = 136LL * (unsigned int)v8;
        v8 = (unsigned int)(v8 + 1);
        *(_DWORD *)((char *)v9 + v10) = v32;
        *(_DWORD *)((char *)v9 + v10 + 4) = 0;
        if ( v31 >= v7 )
          break;
      }
    }
  }
LABEL_8:
  if ( (_DWORD)v8 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      McTemplateU0d_EventWriteTransfer(v10, &EVTDESC_OVERLAY_PRESENT_Start, (unsigned int)v8);
    updated = COverlayContext::UpdateHDRMetaData(this);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, const void *, _DWORD *, _DWORD))(*(_QWORD *)a2 + 192LL))(
            a2,
            1LL,
            a3,
            *((unsigned int *)this + 3),
            updated,
            v9,
            v8);
    v18 = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits);
    if ( v17 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
        goto LABEL_13;
      v42 = v9 + 20;
      do
      {
        if ( (v18 & 4) != 0 )
        {
          McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer(
            v15,
            v14,
            *((_QWORD *)v42 - 9),
            *(v42 - 19),
            *(v42 - 20),
            *(v42 - 14),
            *(v42 - 13),
            *(v42 - 12),
            *(v42 - 11),
            *(v42 - 10),
            *(v42 - 9),
            *(v42 - 8),
            *(v42 - 7),
            *(v42 - 6),
            *(v42 - 5),
            *(v42 - 4),
            *(v42 - 3),
            *(v42 - 2),
            *(v42 - 1),
            *v42,
            v42[5]);
          v18 = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits);
        }
        v42 += 34;
        --v8;
      }
      while ( v8 );
    }
    if ( (v18 & 4) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_PRESENT_Stop,
        v16,
        1u,
        &v52);
LABEL_13:
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v17, 0xAEDu, 0LL);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v17 = -2003304309;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003304309, 0xAF8u, 0LL);
LABEL_14:
  *((_BYTE *)this + 11296) = *((_BYTE *)this + 11024);
  *((_BYTE *)this + 11305) = *((_BYTE *)this + 11025);
  *((_DWORD *)this + 2820) = v5;
LABEL_15:
  COverlayContext::DbgSaveOverlayStateInfoAfter(this);
  v19 = *((_QWORD *)this + 913);
  v20 = *((_QWORD *)this + 914);
  while ( v19 != v20 )
  {
    *(_BYTE *)(v19 + 184) = 0;
    *(_BYTE *)(v19 + 181) = 0;
    v19 += 224LL;
  }
  if ( v9 )
  {
    if ( v7 )
    {
      v22 = v9 + 2;
      v23 = v7;
      do
      {
        if ( *v22 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 16LL))(*v22);
        v22 += 17;
        --v23;
      }
      while ( v23 );
    }
    DefaultHeap::Free(v9);
  }
  if ( v50 )
    DefaultHeap::Free(v50);
  return (unsigned int)v17;
}
