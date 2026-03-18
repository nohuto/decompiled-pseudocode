/*
 * XREFs of DpiPdoVerifyOpmParameters @ 0x1C01EDB50
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoVerifyOpmParameters(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( !a2 )
    goto LABEL_7;
  if ( a3 >= a6 )
  {
    if ( !a7 || a4 )
    {
      if ( a5 >= a7 )
        return 0LL;
      goto LABEL_8;
    }
LABEL_7:
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    return 3221225485LL;
  }
LABEL_8:
  WdLogSingleEntry2(2LL, a1, -1073741789LL);
  return 3221225507LL;
}
