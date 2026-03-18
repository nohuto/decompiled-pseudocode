/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x140502554
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140502170 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x14027B310 (IopSetFileObjectExtensionFlag.c)
 *     IopCancelIrpsInFileObjectList @ 0x14034725C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1406A0028 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2)
{
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, 1) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
