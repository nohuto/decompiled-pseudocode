/*
 * XREFs of NtOpenKeyedEvent @ 0x14095D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14060CA70 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtOpenKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  NTSTATUS result; // eax
  void *v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)KeyedEventHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *KeyedEventHandle = 0LL;
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)ExpKeyedEventObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)&v7);
  if ( result >= 0 )
    *KeyedEventHandle = v7;
  return result;
}
