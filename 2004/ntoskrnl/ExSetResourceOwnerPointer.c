/*
 * XREFs of ExSetResourceOwnerPointer @ 0x1405AFF40
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x1408641F0 (CcSetBcbOwnerPointer.c)
 * Callees:
 *     ExpSetResourceOwnerPointerEx @ 0x140279730 (ExpSetResourceOwnerPointerEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer, 0);
}
