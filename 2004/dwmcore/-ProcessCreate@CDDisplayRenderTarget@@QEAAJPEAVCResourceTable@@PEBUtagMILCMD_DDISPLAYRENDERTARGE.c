/*
 * XREFs of ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z @ 0x18018DB5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800342C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessCreate(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_CREATE *a3)
{
  void *v3; // rdx
  int v6; // eax

  v3 = (void *)*((_QWORD *)a3 + 3);
  if ( v3 != (void *)-1LL )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 19,
      v3);
  *(_QWORD *)((char *)this + 18588) = *((_QWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 4649) = 0;
  *((_DWORD *)this + 4653) = v6;
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 9);
  *((_DWORD *)this + 4654) = 3 - (*((_DWORD *)a3 + 10) < 3u);
  return 0LL;
}
