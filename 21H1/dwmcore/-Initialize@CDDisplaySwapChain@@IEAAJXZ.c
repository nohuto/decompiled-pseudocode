/*
 * XREFs of ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18023B07C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180244534 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180088B50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800A20EC (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801508CC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@?$vector@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180239E08 (--$_Emplace_reallocate@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@-$vector.c)
 *     ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x18023BB70 (-UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CDDisplaySwapChain::Initialize(CDDisplaySwapChain *this)
{
  __int64 v2; // rdx
  wil::details *v3; // rcx
  wil::details *Event; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rcx
  signed int LastErrorFailHr; // ebx
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // esi
  CRegion *v12; // rax
  CRegion **v13; // rdx
  int updated; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-18h]
  CRegion *v18; // [rsp+40h] [rbp+8h] BYREF

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 49,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3, v2, v5, v6);
  }
  if ( LastErrorFailHr < 0 )
  {
    v17 = 16;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, LastErrorFailHr, v17, 0LL);
    return (unsigned int)LastErrorFailHr;
  }
  v9 = 0;
  v10 = *((_QWORD *)this + 26) - *((_QWORD *)this + 25);
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = (v10 >> 5) - 1;
  v11 = ((__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 5) - 1;
  if ( (unsigned int)((__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 5) != 1 )
  {
    while ( 1 )
    {
      v12 = (CRegion *)operator new(0x48uLL);
      if ( v12 )
      {
        v7 = (__int64)v12 + 8;
        *(_QWORD *)v12 = (char *)v12 + 8;
        *((_DWORD *)v12 + 2) = 0;
      }
      v18 = v12;
      if ( !v12 )
        break;
      v13 = (CRegion **)*((_QWORD *)this + 47);
      if ( *((CRegion ***)this + 48) == v13 )
      {
        std::vector<std::unique_ptr<CRegion>>::_Emplace_reallocate<std::unique_ptr<CRegion>>(
          (__int64 *)this + 46,
          (__int64)v13,
          (__int64 *)&v18);
        if ( v18 )
          CRegion::`scalar deleting destructor'(v18, 1);
      }
      else
      {
        *v13 = v12;
        *((_QWORD *)this + 47) += 8LL;
      }
      if ( ++v9 >= v11 )
        goto LABEL_14;
    }
    LastErrorFailHr = -2147024882;
    v17 = 27;
    goto LABEL_18;
  }
LABEL_14:
  updated = CDDisplaySwapChain::UpdateBackBufferTextureTarget(this);
  LastErrorFailHr = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x20u, 0LL);
  return (unsigned int)LastErrorFailHr;
}
