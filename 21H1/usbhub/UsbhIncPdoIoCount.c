/*
 * XREFs of UsbhIncPdoIoCount @ 0x1C0014F6C
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0016DC0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoPower_Sequence @ 0x1C003C5D0 (UsbhPdoPower_Sequence.c)
 *     UsbhCreatePdo @ 0x1C0053F94 (UsbhCreatePdo.c)
 *     UsbhPdoDeviceControl @ 0x1C00556F0 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x1C00578D0 (UsbhPdoSuccess.c)
 *     UsbhPdoSystemControl @ 0x1C0057950 (UsbhPdoSystemControl.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 */

__int64 __fastcall UsbhIncPdoIoCount(__int64 a1, __int64 a2, int a3, int a4)
{
  KSPIN_LOCK *v7; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // si
  char *PoolWithTag; // rdx
  _DWORD *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  int v16; // [rsp+20h] [rbp-28h]

  v7 = (KSPIN_LOCK *)PdoExt(a1);
  v8 = v7 + 152;
  v9 = KeAcquireSpinLockRaiseToDpc(v7 + 152);
  v10 = v9;
  if ( *((_DWORD *)v7 + 196) == 2 )
  {
    KeReleaseSpinLock(v8, v9);
    return 3221225486LL;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      v12 = v7 + 153;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_DWORD *)PoolWithTag + 9) = 0;
      LOBYTE(v16) = HIBYTE(a3);
      BYTE1(v16) = BYTE2(a3);
      BYTE2(v16) = BYTE1(a3);
      *((_QWORD *)PoolWithTag + 3) = a2;
      *((_DWORD *)PoolWithTag + 8) = a4;
      HIBYTE(v16) = a3;
      *(_DWORD *)PoolWithTag = v16;
      v13 = PoolWithTag + 8;
      v14 = (_QWORD *)*((_QWORD *)v12 + 1);
      if ( (_DWORD *)*v14 != v12 )
        __fastfail(3u);
      *v13 = v12;
      *((_QWORD *)PoolWithTag + 2) = v14;
      *v14 = v13;
      *((_QWORD *)v12 + 1) = v13;
    }
    else
    {
      ++*((_DWORD *)v7 + 316);
    }
    KeReleaseSpinLock(v8, v10);
    return 0LL;
  }
}
