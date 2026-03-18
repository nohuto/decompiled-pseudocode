/*
 * XREFs of ?ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CREATE@@@Z @ 0x1800D2F40
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x1800D2FBC (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessCreate(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_CREATE *a3)
{
  unsigned int v5; // ecx
  int v6; // eax

  *(_QWORD *)((char *)this + 228) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 55) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 59) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 9);
  CLegacyRenderTarget::SetSDRBoost(this, 1.0);
  v5 = 3;
  v6 = 2;
  if ( *((_DWORD *)a3 + 10) < 3u )
    v5 = *((_DWORD *)a3 + 10);
  if ( v5 > 2 )
    v6 = v5;
  *((_DWORD *)this + 56) = v6;
  return 0LL;
}
