/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1406A9EE8
 * Callers:
 *     _PnpValidateObjectNameDispatch @ 0x14068066C (_PnpValidateObjectNameDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406A98D8 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1406A9E1C (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1406B1FA4 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x14071E3EC (_PnpCreateObjectDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x14072B608 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140971E2C (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140971F00 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140971FD0 (_PnpGetMappedPropertyLocalesDispatch.c)
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
