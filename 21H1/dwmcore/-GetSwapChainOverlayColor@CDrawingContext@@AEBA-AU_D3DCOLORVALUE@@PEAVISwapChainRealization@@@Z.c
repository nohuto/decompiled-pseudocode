/*
 * XREFs of ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@@Z @ 0x18017BB18
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800BAB48 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

struct _D3DCOLORVALUE *__fastcall CDrawingContext::GetSwapChainOverlayColor(
        CDrawingContext *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        struct ISwapChainRealization *a3)
{
  bool v3; // cf
  char *v6; // rcx
  int (__fastcall **v7)(char *, GUID *, __int64 *); // rax
  char v8; // cl
  __int64 v9; // rcx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = CCommonRegistryData::m_dwOverlayTestMode == 0;
  *(_OWORD *)&retstr->r = 0LL;
  if ( v3 )
    return retstr;
  v6 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 4LL) + 8;
  v7 = *(int (__fastcall ***)(char *, GUID *, __int64 *))v6;
  v11 = 0LL;
  if ( (*v7)(v6, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v11) < 0 )
  {
    v8 = *(_BYTE *)(*((_QWORD *)this + 6) + 11417LL);
    retstr->a = 0.5;
    if ( v8 )
    {
      retstr->r = 1.0;
      retstr->g = 0.77999997;
      retstr->b = 0.055;
      goto LABEL_8;
    }
    retstr->r = 0.0;
    retstr->b = 1.0;
  }
  else
  {
    retstr->b = 0.0;
    retstr->r = 1.0;
    retstr->a = 0.5;
  }
  retstr->g = 1.0;
LABEL_8:
  if ( v11 )
  {
    v9 = *(int *)(*(_QWORD *)(v11 + 8) + 4LL) + v11 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return retstr;
}
