/*
 * XREFs of ZwSetInformationKey @ 0x1403F68C0
 * Callers:
 *     IopApplyMutableTagToRegistryKey @ 0x1406F507C (IopApplyMutableTagToRegistryKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x14087EFD8 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x14087F048 (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
