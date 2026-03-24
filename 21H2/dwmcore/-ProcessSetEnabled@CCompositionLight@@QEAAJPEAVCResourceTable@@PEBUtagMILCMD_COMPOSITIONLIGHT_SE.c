/*
 * XREFs of ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x1801F4B38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::ProcessSetEnabled(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_SETENABLED *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 162) != v3 )
  {
    *((_BYTE *)this + 162) = v3;
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 72LL))(this, 5LL);
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
  }
  return 0LL;
}
