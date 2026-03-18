/*
 * XREFs of SendVisibilityChanged @ 0x1C00481B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendVisibilityChanged(__int64 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  DWORD2(v2[0]) = (unsigned __int8)a1;
  return InputExtensibilityCallout::CoreMsgSendMessage(a1, 1LL, v2, 32LL, 0LL, *((_QWORD *)&v2[0] + 1));
}
