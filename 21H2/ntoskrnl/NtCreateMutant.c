/*
 * XREFs of NtCreateMutant @ 0x1406DDC40
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x1402ED1C0 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateMutant(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  char PreviousMode; // di
  int Object; // ecx
  __int64 v7; // [rsp+58h] [rbp-10h] BYREF

  v3 = (_QWORD *)a1;
  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v3 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v3;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = PreviousMode;
  Object = ObCreateObjectEx(a1, (_DWORD)ExMutantObjectType, a3, PreviousMode);
  if ( Object >= 0 )
  {
    KeInitializeMutantEx(0LL);
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v7);
    if ( Object >= 0 )
      *v3 = v7;
  }
  return (unsigned int)Object;
}
