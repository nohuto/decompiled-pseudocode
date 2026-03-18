/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x140640198
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x14063FB88 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1406400CC (_PnpGetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1406D3E2C (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1406EC718 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x14072E17C (_PnpCreateObjectDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140734ED8 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140978F9C (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140979070 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140979140 (_PnpGetMappedPropertyLocalesDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 296);
  return v3;
}
