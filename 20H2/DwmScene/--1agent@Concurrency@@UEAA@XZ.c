/*
 * XREFs of ??1agent@Concurrency@@UEAA@XZ @ 0x180010000
 * Callers:
 *     unknown_libname_19 @ 0x18012086B (unknown_libname_19.c)
 *     sub_18012AFB3 @ 0x18012AFB3 (sub_18012AFB3.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::agent::~agent(Concurrency::agent *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy((char *)this + 8);
}
