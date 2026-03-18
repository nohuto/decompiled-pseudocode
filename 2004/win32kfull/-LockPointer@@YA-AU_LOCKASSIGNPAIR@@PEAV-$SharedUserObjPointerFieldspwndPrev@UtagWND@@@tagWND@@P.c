/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C01045D4
 * Callers:
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = 0LL;
  if ( a3 )
    v3 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(*(_QWORD *)(a2 - 56) + 80LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
