/*
 * XREFs of ExSetResourceOwnerPointerEx @ 0x140279710
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetResourceOwnerPointerEx @ 0x140279730 (ExpSetResourceOwnerPointerEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer);
}
