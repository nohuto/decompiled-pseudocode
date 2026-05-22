/*
 * XREFs of ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x1801030E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x180102FE8 (--1InputDeliveryServer@@UEAA@XZ.c)
 */

InputDeliveryServer *__fastcall InputDeliveryServer::`scalar deleting destructor'(
        InputDeliveryServer *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  InputDeliveryServer::~InputDeliveryServer(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
