/*
 * XREFs of ??_E?$_Ref_count_obj@VDeactivatableDuckingDescriptor@@@std@@UEAAPEAXI@Z @ 0x18000D940
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<DeactivatableDuckingDescriptor>::`vector deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
