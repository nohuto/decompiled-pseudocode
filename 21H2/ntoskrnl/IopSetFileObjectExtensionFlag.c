/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x1402F7040
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402722F0 (IopCheckInitiatorHint.c)
 *     IopRevokeFileObjectForProcess @ 0x140507924 (IopRevokeFileObjectForProcess.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406F68FC (IopAllocateFoExtensionsOnCreate.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140893DB0 (IoSetFileObjectIgnoreSharing.c)
 *     IoRegisterContainerNotification @ 0x140894BA0 (IoRegisterContainerNotification.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1402D0A50 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a3 )
  {
    result = IopAllocateFileObjectExtension(a1, (__int64 *)&v6);
    v5 = v6;
    goto LABEL_3;
  }
  v5 = *(_DWORD **)(a1 + 208);
  if ( !v5 )
  {
    result = 3221226021LL;
LABEL_3:
    if ( (int)result < 0 )
      return result;
  }
  *v5 |= a2;
  return 0LL;
}
