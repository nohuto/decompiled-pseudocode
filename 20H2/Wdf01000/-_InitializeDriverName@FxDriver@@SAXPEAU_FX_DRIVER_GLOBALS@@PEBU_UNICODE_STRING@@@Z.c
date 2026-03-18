/*
 * XREFs of ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0053704
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004B560 (imp_WdfDriverCreate.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C002DAB0 (RtlStringCopyWorkerA.c)
 */

void __fastcall FxDriver::_InitializeDriverName(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath)
{
  char *DriverName; // r10
  unsigned int v3; // r8d
  wchar_t *Buffer; // r9
  unsigned __int64 v5; // rdx
  wchar_t *i; // rcx
  _WORD *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9

  DriverName = FxDriverGlobals->Public.DriverName;
  v3 = 0;
  *(_OWORD *)FxDriverGlobals->Public.DriverName = 0LL;
  *(_OWORD *)&FxDriverGlobals->Public.DriverName[16] = 0LL;
  if ( RegistryPath )
  {
    Buffer = RegistryPath->Buffer;
    v5 = (unsigned __int64)&Buffer[(unsigned __int64)RegistryPath->Length >> 1];
    for ( i = (wchar_t *)(v5 - 2); *i != 92; --i )
    {
      if ( i == Buffer )
        goto LABEL_14;
    }
    if ( i == Buffer || *i != 92 )
    {
LABEL_14:
      RtlStringCopyWorkerA(DriverName, v5, 0LL, "WDF");
      return;
    }
    v7 = i + 1;
    v8 = (__int64)(v5 - (_QWORD)v7) >> 1;
    if ( v8 > 0x1F )
      v8 = 31LL;
    if ( v8 )
    {
      v9 = 0LL;
      do
      {
        ++v3;
        DriverName[v9] = v7[v9];
        v9 = v3;
      }
      while ( v3 < v8 );
    }
  }
}
