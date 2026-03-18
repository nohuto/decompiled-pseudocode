/*
 * XREFs of ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x1800224C0
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1800222A8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180080AB4 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DRemoveClip(CD2DContext *this)
{
  *((_BYTE *)this + 439) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 26) + 80LL))(*((_QWORD *)this + 26), 0LL, 1LL);
}
