/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x1800AE918
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x1800D6700 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 *     std::_dynamic_atexit_destructor_for__initlocks___0 @ 0x1800D6820 (std--_dynamic_atexit_destructor_for__initlocks___0.c)
 * Callees:
 *     _Mtxdst @ 0x1800B682C (_Mtxdst.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_1801931A0) < 0 )
  {
    v1 = &stru_1801933B0;
    v2 = 4LL;
    do
    {
      Mtxdst(v1++);
      --v2;
    }
    while ( v2 );
  }
}
