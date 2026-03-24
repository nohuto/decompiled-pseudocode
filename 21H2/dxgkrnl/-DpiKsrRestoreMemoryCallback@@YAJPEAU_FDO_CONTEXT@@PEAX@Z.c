/*
 * XREFs of ?DpiKsrRestoreMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x1C02D2580
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02D232C (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiKsrRestoreMemoryCallback(struct _FDO_CONTEXT *a1, void *a2, __int64 a3)
{
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*((_DWORD *)a1 + 1380) & 2) != 0 )
  {
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 1;
    DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v4, a3);
  }
  return 0LL;
}
