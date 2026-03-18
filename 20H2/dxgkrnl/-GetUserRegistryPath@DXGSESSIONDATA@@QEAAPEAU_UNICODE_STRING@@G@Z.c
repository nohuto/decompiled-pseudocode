/*
 * XREFs of ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C000C494
 * Callers:
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C0168838 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _UNICODE_STRING *__fastcall DXGSESSIONDATA::GetUserRegistryPath(DXGSESSIONDATA *this, unsigned __int16 a2)
{
  SIZE_T v5; // rax

  if ( !*((_QWORD *)this + 2339) && a2 )
  {
    *((_WORD *)this + 9352) = 0;
    v5 = 2 * ((unsigned __int64)a2 >> 1);
    if ( !is_mul_ok((unsigned __int64)a2 >> 1, 2uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 2339) = operator new[](v5, 0x4B677844u, PagedPool);
    *((_WORD *)this + 9353) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18704);
}
