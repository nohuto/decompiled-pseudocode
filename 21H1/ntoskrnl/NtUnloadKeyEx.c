/*
 * XREFs of NtUnloadKeyEx @ 0x140659380
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  char v2; // r8

  v2 = 1;
  return CmUnloadKey(TargetKey, 0LL, v2, Event);
}
