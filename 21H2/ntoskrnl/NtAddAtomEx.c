/*
 * XREFs of NtAddAtomEx @ 0x1405FEBB0
 * Callers:
 *     NtAddAtom @ 0x140956E70 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x14027B8C0 (RtlAddAtomToAtomTableEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  char v4; // r12
  size_t v6; // rbx
  char PreviousMode; // r15
  WCHAR *v9; // r14
  __int64 v10; // rcx
  NTSTATUS result; // eax
  USHORT v12; // [rsp+20h] [rbp-268h] BYREF
  __int64 v13; // [rsp+28h] [rbp-260h] BYREF
  PWSTR v14; // [rsp+30h] [rbp-258h]
  _WORD v15[256]; // [rsp+40h] [rbp-248h] BYREF

  v4 = Flags;
  v6 = Length;
  v13 = 0LL;
  v12 = 0;
  if ( (Flags & 0xFFFFFFFD) != 0 )
    return -1073741811;
  PsInvokeWin32Callout(2LL, &v13, 0LL, 0LL);
  if ( !v13 )
    return -1073741790;
  if ( (unsigned int)v6 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = AtomName;
  v14 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v10 = (__int64)Atom;
      if ( (unsigned __int64)Atom >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_WORD *)v10 = *(_WORD *)v10;
      v9 = v14;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v6 > 0x7FFFFFFF0000LL || (PWSTR)((char *)AtomName + v6) < AtomName )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = v15;
      v14 = v15;
      memmove(v15, AtomName, v6);
      v15[v6 >> 1] = 0;
    }
  }
  result = RtlAddAtomToAtomTableEx(v13, v9, &v12, v4);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = v12;
  }
  return result;
}
