/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1405C13A0
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14088A6A0 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140706430 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  SC_ENV::Free(a1);
}
