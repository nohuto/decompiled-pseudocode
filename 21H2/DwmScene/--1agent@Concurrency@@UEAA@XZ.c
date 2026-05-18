/*
 * XREFs of ??1agent@Concurrency@@UEAA@XZ @ 0x1800100E0
 * Callers:
 *     unknown_libname_19 @ 0x18012613B (unknown_libname_19.c)
 *     sub_1801308CB @ 0x1801308CB (sub_1801308CB.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::agent::~agent(Concurrency::agent *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy((char *)this + 8);
}
