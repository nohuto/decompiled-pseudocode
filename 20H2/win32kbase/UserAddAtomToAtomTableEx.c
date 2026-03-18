/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C008F720
 * Callers:
 *     Win32UserInitialize @ 0x1C0291A10 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C013B06C (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(struct _RTL_ATOM_TABLE *a1, __int64 a2, int a3)
{
  int v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  RTL_ATOM v9[12]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = 0;
  v5 = RtlAddAtomToAtomTableEx(a1, a2, v9);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(a1, v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7, v8);
  }
  result = v9[0];
  if ( v9[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(a1, v9[0]);
      return v9[0];
    }
  }
  return result;
}
