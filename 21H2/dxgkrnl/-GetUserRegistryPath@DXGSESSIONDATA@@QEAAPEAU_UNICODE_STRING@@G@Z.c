/*
 * XREFs of ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0019B80
 * Callers:
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01D3878 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01D642C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA574 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct _UNICODE_STRING *__fastcall DXGSESSIONDATA::GetUserRegistryPath(
        DXGSESSIONDATA *this,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v7; // rax

  if ( !*((_QWORD *)this + 2342) && a2 )
  {
    *((_WORD *)this + 9364) = 0;
    v7 = 2 * ((unsigned __int64)a2 >> 1);
    if ( !is_mul_ok((unsigned __int64)a2 >> 1, 2uLL) )
      v7 = -1LL;
    *((_QWORD *)this + 2342) = operator new[](v7, 0x4B677844u, 256LL, a4);
    *((_WORD *)this + 9365) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18728);
}
