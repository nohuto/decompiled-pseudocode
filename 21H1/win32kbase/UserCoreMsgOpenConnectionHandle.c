/*
 * XREFs of UserCoreMsgOpenConnectionHandle @ 0x1C01B49A0
 * Callers:
 *     <none>
 * Callees:
 *     CoreMsgOpenConnection @ 0x1C003B84C (CoreMsgOpenConnection.c)
 */

__int64 __fastcall UserCoreMsgOpenConnectionHandle(char a1, int *a2, void **a3, int a4)
{
  return CoreMsgOpenConnection(a1, a2, a3, a4);
}
