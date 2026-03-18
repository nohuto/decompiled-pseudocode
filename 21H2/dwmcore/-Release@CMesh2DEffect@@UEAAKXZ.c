/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1802B2970
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x18010D590 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CMesh2DEffect@@WBA@EAAKXZ @ 0x18010D5B0 (-Release@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)this + 4);
}
