/*
 * XREFs of NtAddAtomEx @ 0x1406F03B0
 * Callers:
 *     NtAddAtom @ 0x140953660 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x14024FF20 (RtlAddAtomToAtomTableEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAddAtomEx(char *Src, size_t Size, _WORD *a3, int a4)
{
  char v4; // r12
  size_t v6; // rbx
  char PreviousMode; // r15
  char *v9; // r14
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int16 v12; // [rsp+20h] [rbp-268h] BYREF
  __int64 v13; // [rsp+28h] [rbp-260h] BYREF
  char *v14; // [rsp+30h] [rbp-258h]
  _WORD v15[256]; // [rsp+40h] [rbp-248h] BYREF

  v4 = a4;
  v6 = (unsigned int)Size;
  v13 = 0LL;
  v12 = 0;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
  PsInvokeWin32Callout(2, (__int64)&v13, 0, 0LL);
  if ( !v13 )
    return 3221225506LL;
  if ( (unsigned int)v6 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = Src;
  v14 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v10 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_WORD *)v10 = *(_WORD *)v10;
      v9 = v14;
    }
    if ( Src )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)Src & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v6] > 0x7FFFFFFF0000LL || &Src[v6] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = (char *)v15;
      v14 = (char *)v15;
      memmove(v15, Src, v6);
      v15[v6 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlAddAtomToAtomTableEx(v13, v9, &v12, v4);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v12;
  }
  return (unsigned int)result;
}
