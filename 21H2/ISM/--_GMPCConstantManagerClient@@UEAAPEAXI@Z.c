/*
 * XREFs of ??_GMPCConstantManagerClient@@UEAAPEAXI@Z @ 0x180112900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x1801114B0 (--1MPCConstantManagerClient@@UEAA@XZ.c)
 */

MPCConstantManagerClient *__fastcall MPCConstantManagerClient::`scalar deleting destructor'(
        MPCConstantManagerClient *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  MPCConstantManagerClient::~MPCConstantManagerClient(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
