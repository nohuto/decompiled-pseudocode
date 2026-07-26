/*
 * XREFs of GetMsgDpc @ 0x1C0008F34
 * Callers:
 *     NdisMRegisterInterruptEx @ 0x1C0131E20 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetMsgDpc(__int64 a1, int a2, int a3)
{
  return *(_QWORD *)(a1 + 224) + ((unsigned __int64)(a3 + a2 * (ndisMaxNumberOfProcessors + 1)) << 6);
}
