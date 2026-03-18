/*
 * XREFs of ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x18008BE98
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18008C0F0 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRedirectVisual::ProcessSetRedirectedVisual(
        CRedirectVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisual *Resource; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct CVisual *v10; // rax
  CRedirectedVisualContent *v11; // rsi
  CRedirectedVisualContent *v12; // rax
  __int64 v13; // rcx
  CRedirectedVisualContent *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0xC3u);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x1Au, 0LL);
      return v4;
    }
  }
  v9 = *((_QWORD *)this + 31);
  v10 = 0LL;
  if ( v9 )
    v10 = *(struct CVisual **)(v9 + 64);
  if ( Resource != v10 )
  {
    v11 = 0LL;
    if ( !Resource )
    {
LABEL_13:
      (*(void (__fastcall **)(CRedirectVisual *, CRedirectedVisualContent *))(*(_QWORD *)this + 320LL))(this, v11);
      if ( v11 )
        (*(void (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v11 + 16LL))(v11);
      return v4;
    }
    v12 = (CRedirectedVisualContent *)DefaultHeap::AllocClear(0x90uLL);
    if ( v12 )
      v14 = CRedirectedVisualContent::CRedirectedVisualContent(v12, Resource);
    else
      v14 = 0LL;
    if ( v14 )
    {
      (*(void (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = (*(__int64 (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v14 + 48LL))(v14);
      v4 = v15;
      if ( v15 >= 0 )
      {
        v11 = v14;
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x16u, 0LL);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x14u, 0LL);
    }
    if ( v14 )
      (*(void (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_12:
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v4, 0x2Bu, 0LL);
      return v4;
    }
    goto LABEL_13;
  }
  return v4;
}
