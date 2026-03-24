/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800C39AC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECE84 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9824 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180195010 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x180195174 (-EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribb.c)
 *     ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x18019646C (-erase@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuperWetInkMa.c)
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x18019FEC8 (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        CSuperWetInkManager *a1,
        struct IMonitorTarget *a2,
        _DWORD *a3,
        bool *a4)
{
  const struct CSuperWetInkManager::SuperWetStroke *v4; // rbx
  char v5; // r14
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  CSuperWetInkManager *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-20h]
  _BYTE v27[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 *v29; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v30; // [rsp+90h] [rbp+50h]
  CRenderTargetBitmap *v31; // [rsp+98h] [rbp+58h] BYREF

  v30 = a3;
  v4 = (const struct CSuperWetInkManager::SuperWetStroke *)*((_QWORD *)a1 + 1);
  *a4 = 0;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 == *((const struct CSuperWetInkManager::SuperWetStroke **)a1 + 2) )
        {
          if ( !v5 )
            return 0LL;
          v17 = *(_QWORD *)a2;
          v29 = 0LL;
          v18 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(v17 + 120))(a2);
          v19 = v18 + *(int *)(*(_QWORD *)(v18 + 8) + 4LL);
          if ( v29 )
          {
            v20 = (__int64)v29 + *(int *)(v29[1] + 4) + 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 **))(v19 + 8))(
                  v19 + 8,
                  &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
                  &v29);
          v22 = v21;
          if ( v21 >= 0 )
          {
            v23 = *v29;
            v31 = 0LL;
            v24 = (*(__int64 (__fastcall **)(__int64 *, CRenderTargetBitmap **))(v23 + 208))(v29, &v31);
            v22 = v24;
            if ( v24 >= 0 )
            {
              v24 = CComputeScribbleRenderer::ScheduleScribble(v31, a4);
              v22 = v24;
              if ( v24 >= 0 )
              {
                if ( v31 )
                  CRenderTargetBitmap::Release(v31);
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
                return 0LL;
              }
              v25 = 196LL;
            }
            else
            {
              v25 = 193LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v25,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
              (const char *)(unsigned int)v24,
              v26);
            if ( v31 )
              CRenderTargetBitmap::Release(v31);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBE,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
              (const char *)(unsigned int)v21,
              v26);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
          return v22;
        }
        if ( *((struct IMonitorTarget **)v4 + 1) == a2 )
          break;
        v4 = (const struct CSuperWetInkManager::SuperWetStroke *)((char *)v4 + 80);
      }
      if ( !*((_BYTE *)v4 + 72) )
      {
        LOBYTE(v29) = 0;
        v10 = CSuperWetInkManager::CheckLocalComputeScribbleSupport(a1, v4, (bool *)&v29);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x96,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
            (const char *)(unsigned int)v10,
            v26);
          return v11;
        }
        if ( !(_BYTE)v29 )
        {
          v4 = *(const struct CSuperWetInkManager::SuperWetStroke **)std::vector<CSuperWetInkManager::SuperWetStroke>::erase(
                                                                       (char *)a1 + 8,
                                                                       v27,
                                                                       v4);
          goto LABEL_12;
        }
        a3 = v30;
      }
      *((_BYTE *)v4 + 72) = 0;
      *((_DWORD *)v4 + 11) = *a3;
      *((_DWORD *)v4 + 12) = a3[1];
      *((_DWORD *)v4 + 13) = a3[2];
      *((_DWORD *)v4 + 14) = a3[3];
      v12 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 120LL))(a2);
      v13 = *(int *)(*(_QWORD *)(v12 + 8) + 12LL) + v12 + 8;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v31 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64, _QWORD *, CRenderTargetBitmap **))(**(_QWORD **)v4 + 16LL))(
             *(_QWORD *)v4,
             v14,
             (_QWORD *)v4 + 2,
             &v31) >= 0 )
        break;
      v4 = (const struct CSuperWetInkManager::SuperWetStroke *)((char *)v4 + 80);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v31);
LABEL_12:
      a3 = v30;
    }
    v16 = CSuperWetInkManager::EnqueueSuperWetScribbleLocally(v15, a2, v31);
    v11 = v16;
    if ( v16 < 0 )
      break;
    v5 = 1;
    v4 = (const struct CSuperWetInkManager::SuperWetStroke *)((char *)v4 + 80);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v31);
    a3 = v30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB5,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
    (const char *)(unsigned int)v16,
    v26);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v31);
  return v11;
}
