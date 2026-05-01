/*
 * XREFs of ??1agent@Concurrency@@UEAA@XZ @ 0x1800451BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::agent::~agent(Concurrency::agent *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy((char *)this + 8);
}
