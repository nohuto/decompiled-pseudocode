/*
 * XREFs of ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x180057310
 * Callers:
 *     ??_EPhoneTopology@@O7EAAPEAXI@Z @ 0x180075BA0 (--_EPhoneTopology@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x18005734C (--1PhoneTopology@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PhoneTopology *__fastcall PhoneTopology::`scalar deleting destructor'(PhoneTopology *this, char a2)
{
  PhoneTopology::~PhoneTopology(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x518);
  return this;
}
