/*
 * XREFs of ?ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORMATRIXEFFECT@@@Z @ 0x1801B4E64
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorMatrixEffect::ProcessUpdate(
        CColorMatrixEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORMATRIXEFFECT *a3)
{
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a3 + 8);
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 24);
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)a3 + 40);
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)((char *)a3 + 56);
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)((char *)a3 + 72);
  *((_DWORD *)this + 58) = *((_DWORD *)a3 + 22);
  *((_DWORD *)this + 59) = *((_DWORD *)a3 + 23);
  (*(void (__fastcall **)(CColorMatrixEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
