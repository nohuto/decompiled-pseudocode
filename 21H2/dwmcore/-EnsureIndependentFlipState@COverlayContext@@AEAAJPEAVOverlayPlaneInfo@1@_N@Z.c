/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18000EC4C
 * Callers:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18001DFD8 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 * Callees:
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18000CE8C (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180111C8E (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     McTemplateU0tu_EventWriteTransfer @ 0x1801B89A8 (McTemplateU0tu_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3)
{
  int v3; // r12d
  int v7; // ebx
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 *v10; // r14
  unsigned int v11; // ebp
  __int64 v12; // r8
  char v13; // r12
  __int64 v14; // rax
  unsigned int v16; // ebx
  __int64 (__fastcall *v17)(__int64 *, _QWORD, _QWORD, _QWORD); // rdi
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r9d
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // r9d
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // edi
  int v33; // [rsp+30h] [rbp-68h]
  unsigned int v34; // [rsp+34h] [rbp-64h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  _BYTE v36[16]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *((_DWORD *)a2 + 48);
  v33 = v3;
  v7 = 0;
  v8 = 0;
  v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
  v9 = v35;
  if ( a3 && (!*((_BYTE *)this + 11308) || !*((_BYTE *)a2 + 177)) )
    a3 = 0;
  v10 = (__int64 *)*((_QWORD *)a2 + 2);
  if ( a3 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*v10 + 96))(*((_QWORD *)a2 + 2));
    v13 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v10 + 104))(v10, &v34);
    if ( !CCommonRegistryData::m_customRefreshRateMode || !v11 )
    {
LABEL_7:
      *((_DWORD *)a2 + 49) = 0;
      *((_DWORD *)a2 + 50) = 0;
      *((_DWORD *)a2 + 48) = 0;
      *((_BYTE *)a2 + 204) = 0;
LABEL_8:
      v3 = v33;
      v9 = v35;
      goto LABEL_9;
    }
    v22 = *(unsigned __int8 *)(*((_QWORD *)g_pComposition + 27) + 577LL);
    if ( !(_BYTE)v22
      || -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5) != 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
        McTemplateU0tu_EventWriteTransfer(
          0x6DB6DB6DB6DB6DB7LL,
          v22,
          *(unsigned __int8 *)(*((_QWORD *)g_pComposition + 27) + 577LL),
          0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5));
      goto LABEL_7;
    }
    if ( *((_BYTE *)this + 11301) )
    {
      if ( !COverlayContext::IsFullscreen((__int64 **)this, a2) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
          McTemplateU0qqqq_EventWriteTransfer(
            v23,
            (unsigned int)&CustomDurationRejectPlaneFullscreenTest,
            *((_DWORD *)a2 + 17),
            *((_DWORD *)a2 + 18),
            *((_DWORD *)a2 + 19),
            *((_DWORD *)a2 + 20));
        goto LABEL_7;
      }
    }
    else if ( *((_BYTE *)this + 11024) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &CustomDurationRejectDesktopPlaneEnabledTest,
          v12,
          1LL,
          v36);
      goto LABEL_7;
    }
    if ( v11 == *((_DWORD *)a2 + 49) && v34 == *((_DWORD *)a2 + 50) && v13 == *((_BYTE *)a2 + 204) )
    {
      v8 = *((_DWORD *)a2 + 48);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
      {
        v24 = -1;
        if ( v13 )
          v24 = v34;
        McTemplateU0qqq_EventWriteTransfer(v34, (unsigned int)&CustomDurationUseCachedDuration, v11, v24, v8);
      }
    }
    else
    {
      LOBYTE(v12) = v13;
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v35 + 152LL))(v35, v11, v12, v34);
      v8 = v25;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000000) != 0 )
      {
        v27 = -1;
        if ( v13 )
          v27 = v34;
        McTemplateU0qqq_EventWriteTransfer(v26, (unsigned int)&CustomDurationComputeSupportedDuration, v11, v27, v25);
      }
      *((_DWORD *)a2 + 50) = v34;
      *((_DWORD *)a2 + 49) = v11;
      *((_BYTE *)a2 + 204) = v13;
      *((_DWORD *)a2 + 48) = v8;
    }
    goto LABEL_8;
  }
LABEL_9:
  v14 = *v10;
  if ( a3 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v14 + 312))(v10) )
    {
      v16 = *((_DWORD *)a2 + 52);
      v17 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v10 + 336);
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
      v19 = v17(v10, *((_QWORD *)a2 + 3), v18, v16);
      v7 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xB94u, 0LL);
      }
      else
      {
        if ( !*((_BYTE *)a2 + 183) )
        {
          LOBYTE(v21) = 1;
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v10 + 400))(v10, 3LL, v21);
        }
        *((_BYTE *)a2 + 183) = 1;
      }
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v14 + 312))(v10) )
  {
    v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v10 + 360))(v10, *((_QWORD *)a2 + 3));
    v7 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xBA9u, 0LL);
    (*(void (__fastcall **)(__int64 *, __int64))(*v10 + 400))(v10, 3LL);
    *((_BYTE *)a2 + 183) = 0;
  }
  if ( v8 != v3 && *((_BYTE *)a2 + 183) )
  {
    v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v10 + 352))(v10, *((_QWORD *)a2 + 3), v8);
    v32 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xBBCu, 0LL);
    if ( !v7 || v7 >= 0 && v32 < 0 )
      return (unsigned int)v32;
  }
  return (unsigned int)v7;
}
