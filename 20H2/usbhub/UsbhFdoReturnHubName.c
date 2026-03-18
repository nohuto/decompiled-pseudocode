/*
 * XREFs of UsbhFdoReturnHubName @ 0x1C0030CB0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0009690 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhGetHubPdoName @ 0x1C002C2FC (UsbhGetHubPdoName.c)
 */

__int64 __fastcall UsbhFdoReturnHubName(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  int HubPdoName; // eax

  v5 = a1;
  FdoExt(a1);
  PdoExt(a2);
  Log(v5, 8, 1919446590, a3, 0LL);
  HubPdoName = UsbhGetHubPdoName(
                 v5,
                 a2,
                 *(_WORD **)(a3 + 24),
                 *(_DWORD *)(*(_QWORD *)(a3 + 184) + 8LL),
                 (unsigned int *)(a3 + 56));
  *(_DWORD *)(a3 + 48) = HubPdoName;
  LODWORD(v5) = HubPdoName;
  IofCompleteRequest((PIRP)a3, 0);
  UsbhDecPdoIoCount(a2, a3);
  return (unsigned int)v5;
}
