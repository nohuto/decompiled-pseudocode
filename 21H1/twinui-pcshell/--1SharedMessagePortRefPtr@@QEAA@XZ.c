/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x180443FE0
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180341C62 (_KeyboardHosting--TabTipAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x180444294 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
