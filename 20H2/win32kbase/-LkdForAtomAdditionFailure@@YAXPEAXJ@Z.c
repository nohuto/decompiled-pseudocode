/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C013B06C
 * Callers:
 *     UserAddAtomToAtomTableEx @ 0x1C008F720 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomEx @ 0x1C0093740 (UserAddAtomEx.c)
 *     UserAddAtomToAtomTable @ 0x1C00BEBAC (UserAddAtomToAtomTable.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 */

void __fastcall LkdForAtomAdditionFailure(PRTL_ATOM_TABLE a1, int a2)
{
  __int64 ThreadWin32Thread; // rax

  if ( a1 == UserAtomTableHandle )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 224LL) |= 0x800uLL;
    if ( !byte_1C0252420 )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, a2, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
      byte_1C0252420 = 1;
    }
  }
}
