/*
 * XREFs of PnpClearDeviceTemporaryProperties @ 0x14075A6A8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x14072B2B4 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpClearDeviceTemporaryProperties(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v3 = (__int64 *)&off_140007AC0;
  v5 = 2LL;
  do
  {
    result = PnpSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, a1, 1u, a2, 0LL, *v3++, 0, 0LL, 0, 0);
    --v5;
  }
  while ( v5 );
  return result;
}
