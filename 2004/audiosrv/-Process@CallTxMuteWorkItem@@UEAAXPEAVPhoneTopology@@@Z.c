/*
 * XREFs of ?Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180140D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallTxMuteWorkItem::Process(CallTxMuteWorkItem *this, struct PhoneTopology *a2)
{
  PhoneTopology::DoSetCellularTxMute(a2, (CallTxMuteWorkItem *)((char *)this + 8), *((_DWORD *)this + 4));
}
