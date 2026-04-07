/*
 * XREFs of ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18008B6C0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3CC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800537BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005382C (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800BDB94 (--$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 *     ?SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z @ 0x1800BE388 (-SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z.c)
 *     ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@II@Z @ 0x1800BE5A4 (-Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@II@Z.c)
 */

__int64 __fastcall CMagnifier::OnModifyWindowFilterList(
        CMagnifierRenderTargetProxy **this,
        const struct MAGN_FILTERLIST *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // r12
  CVisualGroupProxy **v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  CMagnifierRenderTargetProxy **v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v23; // [rsp+30h] [rbp-128h]
  struct CVisualProxy *v24[26]; // [rsp+40h] [rbp-118h] BYREF

  v4 = *(_DWORD *)a2 + *((_DWORD *)a2 + 1);
  v5 = 0LL;
  if ( dword_1800E8000 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E8000);
    if ( dword_1800E8000 == -1 )
    {
      dword_1800E7F2C = -2147023728;
      Init_thread_footer(&dword_1800E8000);
    }
  }
  v6 = this + 6;
  if ( this[6]
    || (v7 = CCompositor::CreateProxy<CVisualGroupProxy>(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
               this + 6),
        v8 = v7,
        v7 >= 0) )
  {
    if ( !v4 || *(_DWORD *)a2 == 1 && this[7] == *((CMagnifierRenderTargetProxy **)a2 + 1) )
    {
      v21 = CMagnifierRenderTargetProxy::SetFilterList(this[3], 0LL);
      v8 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F2C, 1LL, v21, 0xE6u);
    }
    else
    {
      v9 = 0;
      v10 = 0;
      v11 = 0LL;
      v23 = 0;
      if ( *(_DWORD *)a2 )
      {
        do
        {
          if ( (unsigned int)v11 >= 0x19 )
            break;
          if ( this[7] != *((CMagnifierRenderTargetProxy **)a2 + v11 + 1) )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
            if ( v12 )
            {
              v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 384);
                if ( v14 )
                {
                  ++v10;
                  v24[v5] = *(struct CVisualProxy **)(v14 + 16);
                  v5 = (unsigned int)(v5 + 1);
                }
              }
            }
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *(_DWORD *)a2 );
        v9 = 0;
      }
      if ( (unsigned int)v11 < v4 )
      {
        v15 = (CMagnifierRenderTargetProxy **)((char *)a2 + 8 * v11 + 8);
        while ( (unsigned int)v11 < 0x19 )
        {
          if ( this[7] != *v15 )
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
            if ( !v16 )
            {
              v8 = -2147023728;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F2C, 1LL, -2147023728, 0x115u);
              return v8;
            }
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            v9 = v23;
            if ( v17 )
            {
              v18 = *(_QWORD *)(v17 + 384);
              if ( v18 )
              {
                v9 = ++v23;
                v24[v5] = *(struct CVisualProxy **)(*(_QWORD *)(v18 + 256) + 16LL);
                v5 = (unsigned int)(v5 + 1);
              }
            }
          }
          LODWORD(v11) = v11 + 1;
          ++v15;
          if ( (unsigned int)v11 >= v4 )
            break;
        }
      }
      v19 = CVisualGroupProxy::Update(*v6, v24, v10, v9);
      v8 = v19;
      if ( v19 >= 0 )
      {
        v20 = CMagnifierRenderTargetProxy::SetFilterList(this[3], *v6);
        v8 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F2C, 1LL, v20, 0x127u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F2C, 1LL, v19, 0x125u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F2C, 1LL, v7, 0xE0u);
  }
  return v8;
}
