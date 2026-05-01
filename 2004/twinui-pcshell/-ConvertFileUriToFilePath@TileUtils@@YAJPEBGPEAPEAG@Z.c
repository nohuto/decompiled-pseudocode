/*
 * XREFs of ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x18047AB6C
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18046E994 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800493A4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileUtils::ConvertFileUriToFilePath(LPCWSTR pwzURI, void **a2, unsigned __int16 **a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  void *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-18h]
  IUri *ppURI; // [rsp+50h] [rbp+18h] BYREF
  BSTR bstrString; // [rsp+58h] [rbp+20h] BYREF

  ppURI = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppURI);
  v5 = CreateUri(pwzURI, 0x8020u, 0LL, &ppURI);
  if ( v5 >= 0 )
  {
    v5 = ((__int64 (__fastcall *)(IUri *, BSTR *))ppURI->lpVtbl->GetPath)(ppURI, &bstrString);
    if ( v5 >= 0 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( bstrString[v8] );
      v5 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, bstrString, v8, v10, a2);
      SysFreeString(bstrString);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppURI);
  return (unsigned int)v5;
}
