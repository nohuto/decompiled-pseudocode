/*
 * XREFs of ??$MakeAndInitialize@V?$ValueReference@I@@U?$IReference@I@Foundation@Windows@@J@Details@WRL@Microsoft@@YAJPEAPEAU?$IReference@I@Foundation@Windows@@$$QEAJ@Z @ 0x180281304
 * Callers:
 *     ?CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@PEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180284664 (-CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBU.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ValueReference@I@@QEAA@XZ @ 0x180281C54 (--0-$ValueReference@I@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ValueReference<unsigned int>,Windows::Foundation::IReference<unsigned int>,long>(
        _QWORD *a1,
        _DWORD *a2)
{
  LPVOID v4; // rax
  unsigned int v5; // edi
  _DWORD *v6; // rbx

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x48uLL);
  if ( v4 )
  {
    v6 = (_DWORD *)ValueReference<unsigned int>::ValueReference<unsigned int>(v4);
    v6[16] = *a2;
    v5 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_513ef3af_e784_5325_a91e_97c2b8111cf3,
           a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
