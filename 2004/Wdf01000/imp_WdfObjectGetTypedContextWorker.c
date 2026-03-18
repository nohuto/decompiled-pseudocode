/*
 * XREFs of imp_WdfObjectGetTypedContextWorker @ 0x1C0002160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C0038BE4 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall imp_WdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  _FX_DRIVER_GLOBALS **_a2; // rax
  __int64 v4; // rcx
  char *v5; // rcx
  const char *ContextName; // rdx
  const char *_a1; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  _a2 = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    _a2 = (_FX_DRIVER_GLOBALS **)((char *)_a2 - *(unsigned __int16 *)_a2);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(_a2[2], retaddr);
  v4 = *((unsigned __int16 *)_a2 + 5);
  if ( (_WORD)v4 && (v5 = (char *)_a2 + v4) != 0LL )
  {
    while ( *((const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v5 + 4) != TypeInfo )
    {
      v5 = (char *)*((_QWORD *)v5 + 1);
      if ( !v5 )
        goto LABEL_13;
    }
    return v5 + 48;
  }
  else
  {
LABEL_13:
    ContextName = TypeInfo->ContextName;
    _a1 = "<no typename given>";
    if ( ContextName )
      _a1 = ContextName;
    WPP_IFR_SF_sq(_a2[2], 3u, 0xBu, 0xDu, WPP_HandleAPI_cpp_Traceguids, _a1, _a2);
    return 0LL;
  }
}
