/*
 * XREFs of ??_GDuckingDescriptor@@UEAAPEAXI@Z @ 0x180014830
 * Callers:
 *     _std::shared_ptr_DuckingDescriptor_::_Setp_DuckingDescriptor__::_1_::catch$1 @ 0x1800420EF (_std--shared_ptr_DuckingDescriptor_--_Setp_DuckingDescriptor__--_1_--catch$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DuckingDescriptor *__fastcall DuckingDescriptor::`scalar deleting destructor'(DuckingDescriptor *this, char a2)
{
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
