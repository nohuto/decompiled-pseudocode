/*
 * XREFs of ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x1800A37F8
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800A30D8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800A3680 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DRemoveClip(CD2DContext *this)
{
  *((_BYTE *)this + 487) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 31) + 80LL))(*((_QWORD *)this + 31), 0LL, 1LL);
}
