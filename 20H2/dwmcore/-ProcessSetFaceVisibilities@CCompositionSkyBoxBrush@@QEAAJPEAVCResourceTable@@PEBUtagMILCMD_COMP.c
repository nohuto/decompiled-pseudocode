/*
 * XREFs of ?ProcessSetFaceVisibilities@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSKYBOXBRUSH_SETFACEVISIBILITIES@@@Z @ 0x1801BB98C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetFaceVisibilities(
        CCompositionSkyBoxBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSKYBOXBRUSH_SETFACEVISIBILITIES *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 28) != v3 )
  {
    *((_DWORD *)this + 28) = v3;
    (*(void (__fastcall **)(CCompositionSkyBoxBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  return 0LL;
}
