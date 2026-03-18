/*
 * XREFs of ??0CDrawListCache@@AEAA@XZ @ 0x1800AF5BC
 * Callers:
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CDrawListCache *__fastcall CDrawListCache::CDrawListCache(CDrawListCache *this)
{
  struct CComposition *v1; // rdx
  __int64 v2; // rax
  CDrawListCache *result; // rax

  v1 = g_pComposition;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDrawListCache::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *((_QWORD *)this + 2) = &CDrawListCache::`vftable'{for `IDeviceResourceNotify'};
  v2 = 0LL;
  if ( v1 )
    v2 = *((_QWORD *)v1 + 62);
  *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 2LL;
  *((_QWORD *)this + 7) = 2LL;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 50) = 0;
  *((_BYTE *)this + 102) = 0;
  return result;
}
