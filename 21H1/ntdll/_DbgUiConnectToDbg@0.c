/*
 * XREFs of _DbgUiConnectToDbg@0 @ 0x4B32D7F0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCreateDebugObject@16 @ 0x4B2F33D0 (_ZwCreateDebugObject@16.c)
 */

NTSTATUS DbgUiConnectToDbg(void)
{
  NTSTATUS v0; // ecx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+0h] [ebp-18h] BYREF

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.Length = 24;
    return ZwCreateDebugObject(&NtCurrentTeb()->DbgSsReserved[1], 0x1F000Fu, &ObjectAttributes, 1u);
  }
  return v0;
}
