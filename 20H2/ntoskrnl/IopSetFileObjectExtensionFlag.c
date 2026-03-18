/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x14023CDD0
 * Callers:
 *     IopCheckInitiatorHint @ 0x1403642C0 (IopCheckInitiatorHint.c)
 *     IopRevokeFileObjectForProcess @ 0x140505E24 (IopRevokeFileObjectForProcess.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14062CB7C (IopAllocateFoExtensionsOnCreate.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140896680 (IoSetFileObjectIgnoreSharing.c)
 *     IoRegisterContainerNotification @ 0x140897470 (IoRegisterContainerNotification.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14029FD20 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _DWORD *v6; // rcx
  _DWORD *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( (_BYTE)a3 )
  {
    result = IopAllocateFileObjectExtension(a1, &v7, a3, a4);
    v6 = v7;
    goto LABEL_3;
  }
  v6 = *(_DWORD **)(a1 + 208);
  if ( !v6 )
  {
    result = 3221226021LL;
LABEL_3:
    if ( (int)result < 0 )
      return result;
  }
  *v6 |= a2;
  return 0LL;
}
