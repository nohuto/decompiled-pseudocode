/*
 * XREFs of DpiPdoVerifyOpmParameters @ 0x1C016F408
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C6B4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoVerifyOpmParameters(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx

  v7 = (unsigned int)a1;
  if ( a2 )
  {
    if ( a3 < a6 )
    {
LABEL_8:
      v9 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v9 + 24) = v7;
      v10 = -1073741789LL;
      goto LABEL_9;
    }
    if ( !a7 || a4 )
    {
      if ( a5 >= a7 )
        return 0LL;
      goto LABEL_8;
    }
  }
  v9 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v9 + 24) = v7;
  v10 = -1073741811LL;
LABEL_9:
  *(_QWORD *)(v9 + 32) = v10;
  WdLogEvent5_WdError(v9);
  return (unsigned int)v10;
}
