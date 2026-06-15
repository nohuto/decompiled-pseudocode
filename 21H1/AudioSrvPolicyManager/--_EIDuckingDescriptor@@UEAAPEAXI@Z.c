/*
 * XREFs of ??_EIDuckingDescriptor@@UEAAPEAXI@Z @ 0x180014870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

IDuckingDescriptor *__fastcall IDuckingDescriptor::`vector deleting destructor'(IDuckingDescriptor *this, char a2)
{
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
