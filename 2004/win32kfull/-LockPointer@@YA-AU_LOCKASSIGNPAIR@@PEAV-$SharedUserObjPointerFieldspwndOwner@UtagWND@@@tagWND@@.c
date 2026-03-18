/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0033644
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C0031D44 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00333D4 (zzzImeSetOwnerWindow.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
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
  *(_QWORD *)(*(_QWORD *)(a2 - 80) + 64LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
