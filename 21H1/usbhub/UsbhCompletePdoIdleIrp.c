/*
 * XREFs of UsbhCompletePdoIdleIrp @ 0x1C0018D98
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetDx @ 0x1C0018BE0 (UsbhPdoSetDx.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0057714 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSetIdleIrpState @ 0x1C0018E80 (UsbhSetIdleIrpState.c)
 *     UsbhGetIdleIrpState @ 0x1C0018EF0 (UsbhGetIdleIrpState.c)
 *     UsbhIdleIrp_Event @ 0x1C0058A58 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhCompletePdoIdleIrp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rsi
  struct _KEVENT *v7; // r14
  __int64 v8; // rcx
  int v9; // ecx
  int IdleIrpState; // r9d
  PIRP v11; // rsi
  KIRQL NewIrql; // [rsp+20h] [rbp-28h]
  KIRQL v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3;
  v13 = 0;
  v6 = PdoExt(a2);
  v7 = (struct _KEVENT *)(v6 + 514);
  KeWaitForSingleObject(v6 + 514, Executive, 0, 0, 0LL);
  IdleIrpState = UsbhGetIdleIrpState(v8, a2, &v13);
  NewIrql = v13;
  if ( IdleIrpState == 2 )
  {
    v6[360] = v4;
    IdleIrpState = 3;
  }
  UsbhSetIdleIrpState(v9, a2, 9, IdleIrpState, NewIrql);
  v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 366), 0LL);
  KeSetEvent(v7, 0, 0);
  Log(a1, 16, 1668303172, v4, (__int64)v11);
  if ( v11 )
    UsbhIdleIrp_Event(a1, a2, v11, 5LL, v4);
}
