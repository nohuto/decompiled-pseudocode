/*
 * XREFs of ZwSetInformationKey @ 0x1403F5630
 * Callers:
 *     IopApplyMutableTagToRegistryKey @ 0x1406D259C (IopApplyMutableTagToRegistryKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x14087DCE8 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x14087DD58 (CmpDoReDoSetLastWriteTime.c)
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
