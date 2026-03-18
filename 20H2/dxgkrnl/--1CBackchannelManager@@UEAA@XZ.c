/*
 * XREFs of ??1CBackchannelManager@@UEAA@XZ @ 0x1C006C97C
 * Callers:
 *     ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1C006C750 (--_GCBackchannelManager@@UEAAPEAXI@Z.c)
 *     ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x1C006C7A0 (--_GCDWMBackchannelManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C006C9B4 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CBackchannelManager::~CBackchannelManager(PVOID *this)
{
  *this = &CBackchannelManager::`vftable';
  CBackchannelManager::Clear((CBackchannelManager *)this);
  ObfDereferenceObject(this[4]);
}
