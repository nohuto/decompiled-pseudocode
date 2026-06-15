/*
 * XREFs of ?Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180140D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallEnableWorkItem::Process(CallEnableWorkItem *this, struct PhoneTopology *a2)
{
  PhoneTopology::DoSetCellularEnable(a2, (CallEnableWorkItem *)((char *)this + 8), *((_DWORD *)this + 4));
}
