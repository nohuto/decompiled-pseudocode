/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x140505E24
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140505A40 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 *     IopCancelIrpsInFileObjectList @ 0x14031892C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14069A808 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  LOBYTE(a3) = 1;
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, a3, a4) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
