/*
 * XREFs of ?DisconnectCallbackThunk@ServiceModuleBase@Internal@Windows@@SAJPEAUtagComCallData@@@Z @ 0x1800B9570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ServiceModuleBase::DisconnectCallbackThunk(struct tagComCallData *a1)
{
  return (*(__int64 (__fastcall **)(struct tagComCallData *))(*(_QWORD *)&a1->dwDispid + 8LL))(a1);
}
