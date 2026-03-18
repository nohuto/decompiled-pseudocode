/*
 * XREFs of ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801C5AA4
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801C3EE0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801C47C4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x1801C4FD4 (-ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTAR.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801C522C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x18019AB7C (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@.c)
 */

void **__fastcall std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear(
        void ***a1)
{
  void **result; // rax

  std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
    *a1,
    a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
