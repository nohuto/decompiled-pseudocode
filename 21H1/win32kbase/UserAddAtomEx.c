/*
 * XREFs of UserAddAtomEx @ 0x1C0019C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C014370C (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomEx(__int64 a1, int a2)
{
  PRTL_ATOM_TABLE v2; // rdi
  int v4; // ebx
  __int64 result; // rax
  ULONG v6; // eax
  RTL_ATOM v7; // [rsp+48h] [rbp+20h] BYREF

  v2 = UserAtomTableHandle;
  v7 = 0;
  v4 = RtlAddAtomToAtomTableEx(UserAtomTableHandle, a1, &v7);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v2, v4);
    v6 = RtlNtStatusToDosError(v4);
    UserSetLastError(v6);
  }
  result = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v2, v7);
      return v7;
    }
  }
  return result;
}
