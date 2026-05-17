/*
 * XREFs of _umatherr @ 0x180094EC4
 * Callers:
 *     _except1 @ 0x180094810 (_except1.c)
 *     _handle_qnan1 @ 0x180094B78 (_handle_qnan1.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x180094E90 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180095174 (_ctrlfp.c)
 *     _matherr @ 0x180096174 (_matherr.c)
 */

double __fastcall umatherr(int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  char *v9; // rax
  struct _exception Except; // [rsp+20h] [rbp-38h] BYREF

  v7 = &unk_180164170;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&_lconv_c )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = (char *)*((_QWORD *)&unk_180164170 + 2 * v8 + 1);
LABEL_6:
  Except.name = v9;
  if ( v9 )
  {
    Except.arg1 = a3;
    Except.arg2 = a4;
    Except.retval = a5;
    Except.type = a1;
    ctrlfp(a6, 65472LL);
    if ( !matherr(&Except) )
      set_errno_from_matherr(a1);
    return Except.retval;
  }
  else
  {
    ctrlfp(a6, 65472LL);
    set_errno_from_matherr(a1);
    return a5;
  }
}
