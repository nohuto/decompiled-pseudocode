/*
 * XREFs of ??_ECConstraintModel@@UEAAPEAXI@Z @ 0x180138DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180138C68 (--1CConstraintModel@@UEAA@XZ.c)
 */

void **__fastcall CConstraintModel::`vector deleting destructor'(void **this, char a2)
{
  CConstraintModel::~CConstraintModel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
