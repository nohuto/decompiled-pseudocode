/*
 * XREFs of ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x180034BE4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x180034E3C (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRedirectVisual::ProcessSetRedirectedVisual(
        CRedirectVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CVisual *Resource; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rcx
  struct CVisual *v10; // rax
  CRedirectedVisualContent *v11; // rsi
  CRedirectedVisualContent *v12; // rax
  unsigned int v13; // ecx
  CRedirectedVisualContent *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 )
  {
    Resource = (struct CVisual *)CResourceTable::GetResource(a2, v5, 195LL);
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
      (*(void (__fastcall **)(CRedirectVisual *, CRedirectedVisualContent *))(*(_QWORD *)this + 328LL))(this, v11);
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
