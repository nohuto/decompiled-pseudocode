/*
 * XREFs of ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180039738
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x180039014 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800395C0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DRemoveClip(CD2DContext *this)
{
  *((_BYTE *)this + 487) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 31) + 80LL))(*((_QWORD *)this + 31), 0LL, 1LL);
}
