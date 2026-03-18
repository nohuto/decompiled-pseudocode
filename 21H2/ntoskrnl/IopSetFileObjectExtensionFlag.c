/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x1402A34C8
 * Callers:
 *     IopCheckInitiatorHint @ 0x140280170 (IopCheckInitiatorHint.c)
 *     IopRevokeFileObjectForProcess @ 0x140559124 (IopRevokeFileObjectForProcess.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071CAFC (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140881730 (IoSetFileObjectIgnoreSharing.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1402A3A60 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( a3 )
  {
    result = IopAllocateFileObjectExtension(a1, &v6);
    if ( (int)result < 0 )
      return result;
    v5 = v6;
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 208);
    if ( !v5 )
      return 3221226021LL;
  }
  *v5 |= a2;
  return 0LL;
}
