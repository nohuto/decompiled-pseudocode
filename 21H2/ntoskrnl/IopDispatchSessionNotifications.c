/*
 * XREFs of IopDispatchSessionNotifications @ 0x140894EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall IopDispatchSessionNotifications(_QWORD *CallbackContext, int *Argument1, PVOID Argument2)
{
  __int64 v3; // r8
  __int64 v4; // rax

  v3 = Argument1[8];
  v4 = CallbackContext[6];
  if ( (!v4 || v4 == *((_QWORD *)Argument1 + 7))
    && (*((_DWORD *)IopSessionEventType + v3) & (_DWORD)CallbackContext[7]) != 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, int))CallbackContext[3])(
      *((_QWORD *)Argument1 + 7),
      CallbackContext[5],
      v3,
      CallbackContext[8],
      *((_QWORD *)Argument1 + 6),
      Argument1[10]);
  }
}
