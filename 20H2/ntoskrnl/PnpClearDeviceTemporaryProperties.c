/*
 * XREFs of PnpClearDeviceTemporaryProperties @ 0x140747EA4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140734B84 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpClearDeviceTemporaryProperties(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v3 = (__int64 *)&off_140007AF0;
  v5 = 2LL;
  do
  {
    result = PnpSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, a1, 1u, a2, 0LL, *v3++, 0, 0LL, 0, 0);
    --v5;
  }
  while ( v5 );
  return result;
}
