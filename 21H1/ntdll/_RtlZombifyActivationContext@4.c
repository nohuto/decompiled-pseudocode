/*
 * XREFs of _RtlZombifyActivationContext@4 @ 0x4B33DAA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

NTSTATUS __cdecl RtlZombifyActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  ULONG Flags; // eax
  NTSTATUS v2; // ebx
  void (__thiscall *v3)(_DWORD, int, PACTIVATION_CONTEXT, PVOID, ULONG, _DWORD, char *); // edi
  char v5; // [esp+Bh] [ebp-1h] BYREF

  if ( !ActivationContext || (((unsigned int)&ActivationContext[-1].InlineStorageMapEntries[31] + 3) | 7) == 0xFFFFFFFF )
    return -1073741811;
  Flags = ActivationContext->Flags;
  v2 = 0;
  if ( (Flags & 1) == 0 )
  {
    v3 = (void (__thiscall *)(_DWORD, int, PACTIVATION_CONTEXT, PVOID, ULONG, _DWORD, char *))ActivationContext->SentNotifications[0];
    if ( v3 )
    {
      v5 = 0;
      v3(
        v3,
        2,
        ActivationContext,
        ActivationContext->NotificationContext,
        ActivationContext->SentNotifications[1],
        0,
        &v5);
      Flags = ActivationContext->Flags;
    }
    ActivationContext->Flags = Flags | 1;
  }
  return v2;
}
