/*
 * XREFs of CiSchedulerSetBufferingMode @ 0x1C00015B0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A6C0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSetBufferingMode @ 0x1C0003E40 (CiLogSetBufferingMode.c)
 *     CiLogThreadBuffering @ 0x1C00040AC (CiLogThreadBuffering.c)
 */

void __fastcall CiSchedulerSetBufferingMode(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edx
  char v5; // r8
  int v6; // r8d
  int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *i; // r14
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C0007370 )
      CiLogSetBufferingMode();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    v4 = *(_DWORD *)(a1 + 184) | 1;
    v5 = *(_BYTE *)(a1 + 184) | 1;
    *(_DWORD *)(a1 + 184) = v4;
    v6 = v5 & 4;
    if ( v6 || ((v4 >> 1) & 1) != (a2 == 1) )
    {
      if ( v6 )
      {
        v12 = v4;
        v13 = v4 | 8;
        v14 = v12 & 0xFFFFFFF7;
        if ( a2 != 1 )
          v13 = v14;
        *(_DWORD *)(a1 + 184) = v13;
      }
      else
      {
        v7 = 0;
        if ( a2 == 1 )
          v7 = 2;
        *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFFD | v7;
        if ( a2 == 1
          && (++CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
          && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
        {
          CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
          PoNotifyMediaBuffering();
        }
        v8 = *(_QWORD **)(a1 + 32);
        for ( i = (_QWORD *)(a1 + 32); v8 != i; v8 = (_QWORD *)*v8 )
        {
          if ( byte_1C0007370 )
            CiLogThreadBuffering(v8 - 10, a2 == 1);
          KeUpdateThreadTag(v8[2], a2);
        }
        if ( a2 != 1 )
        {
          v10 = CiTotalTasksBuffering == 1;
          v11 = --CiTotalTasksBuffering;
          if ( !v10 != CiCurrentMediaBufferingState && (!v11 || !CiTotalTasksDeadlineExpired) )
          {
            CiCurrentMediaBufferingState = !v10;
            PoNotifyMediaBuffering();
          }
        }
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
