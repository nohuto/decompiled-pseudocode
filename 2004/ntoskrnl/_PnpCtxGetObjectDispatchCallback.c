/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1405DB8B8
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x1405DB2A8 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1405DB7EC (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1406C2244 (_PnpGetObjectListDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x14070512C (_PnpValidateObjectNameDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x14072018C (_PnpCreateObjectDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140726448 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x1409731CC (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1409732A0 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140973370 (_PnpGetMappedPropertyLocalesDispatch.c)
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
