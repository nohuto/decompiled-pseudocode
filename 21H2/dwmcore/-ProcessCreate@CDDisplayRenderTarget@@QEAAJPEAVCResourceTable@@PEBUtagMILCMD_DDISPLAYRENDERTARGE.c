/*
 * XREFs of ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z @ 0x1801C8AAC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessCreate(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_CREATE *a3)
{
  void *v3; // rdx
  int v6; // eax
  int v7; // eax

  v3 = (void *)*((_QWORD *)a3 + 3);
  if ( v3 != (void *)-1LL )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 20,
      v3);
  this[2301] = (void *)*((_QWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 4604) = 0;
  *((_DWORD *)this + 4608) = v6;
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 9);
  this[13] = (void *)*((_QWORD *)a3 + 5);
  if ( *((_DWORD *)a3 + 12) >= 3u )
    v7 = 3;
  else
    v7 = 2;
  *((_DWORD *)this + 4609) = v7;
  return 0LL;
}
