/*
 * XREFs of CiSchedulerSetBufferingMode @ 0x1C0002640
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000AA20 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSetBufferingMode @ 0x1C00040F0 (CiLogSetBufferingMode.c)
 *     CiLogThreadBuffering @ 0x1C000435C (CiLogThreadBuffering.c)
 */

void __fastcall CiSchedulerSetBufferingMode(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edx
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *i; // r14
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // edx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C00073C0 )
      CiLogSetBufferingMode();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    *(_DWORD *)(a1 + 184) |= 1u;
    v4 = *(_DWORD *)(a1 + 184);
    if ( (v4 & 4) != 0 || ((v4 >> 1) & 1) != (a2 == 1) )
    {
      if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
      {
        v11 = v4 & 0xFFFFFFF7;
        if ( a2 == 1 )
          v11 = *(_DWORD *)(a1 + 184) | 8;
        *(_DWORD *)(a1 + 184) = v11;
      }
      else
      {
        v5 = 0;
        v6 = 2LL;
        if ( a2 == 1 )
          v5 = 2;
        *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFFD | v5;
        if ( a2 == 1 )
        {
          if ( ++CiTotalTasksBuffering )
            v6 = 1LL;
          else
            LOBYTE(v6) = 0;
          if ( (_BYTE)v6 != CiCurrentMediaBufferingState && (!(_BYTE)v6 || !CiTotalTasksDeadlineExpired) )
          {
            CiCurrentMediaBufferingState = v6;
            PoNotifyMediaBuffering(v6);
          }
        }
        v7 = *(_QWORD **)(a1 + 32);
        for ( i = (_QWORD *)(a1 + 32); v7 != i; v7 = (_QWORD *)*v7 )
        {
          if ( byte_1C00073C0 )
            CiLogThreadBuffering(v7 - 10, a2 == 1);
          KeUpdateThreadTag(v7[2], a2);
        }
        if ( a2 != 1 )
        {
          v9 = CiTotalTasksBuffering == 1;
          v10 = --CiTotalTasksBuffering;
          if ( !v9 != CiCurrentMediaBufferingState && (!v10 || !CiTotalTasksDeadlineExpired) )
          {
            CiCurrentMediaBufferingState = !v9;
            LOBYTE(v6) = !v9;
            PoNotifyMediaBuffering(v6);
          }
        }
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
