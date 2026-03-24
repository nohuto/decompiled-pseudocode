/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x1403621E0
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402602E0 (IopCheckInitiatorHint.c)
 *     IopRevokeFileObjectForProcess @ 0x1405079A4 (IopRevokeFileObjectForProcess.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14072044C (IopAllocateFoExtensionsOnCreate.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140893C50 (IoSetFileObjectIgnoreSharing.c)
 *     IoRegisterContainerNotification @ 0x140894A40 (IoRegisterContainerNotification.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14022C1D0 (IopAllocateFileObjectExtension.c)
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
