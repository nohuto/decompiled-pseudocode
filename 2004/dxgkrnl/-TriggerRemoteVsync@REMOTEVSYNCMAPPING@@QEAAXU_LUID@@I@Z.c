/*
 * XREFs of ?TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z @ 0x1C004E888
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C005E0C8 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C00DCFD4 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___ @ 0x1C004E040 (REMOTEVSYNCMAPPING--IterateList__lambda_3d79675884e940cafd73bf406652b69f___.c)
 */

void __fastcall REMOTEVSYNCMAPPING::TriggerRemoteVsync(KSPIN_LOCK *this, struct _LUID a2, int a3)
{
  char *v3; // rbx
  _DWORD *v5[3]; // [rsp+20h] [rbp-40h] BYREF
  char *v6; // [rsp+38h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  char v8; // [rsp+58h] [rbp-8h]
  struct _LUID v9; // [rsp+78h] [rbp+18h] BYREF
  int v10; // [rsp+80h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v3 = (char *)(this + 2);
  v8 = 0;
  v6 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v8 = 1;
  v5[0] = &v9;
  v5[1] = &v10;
  REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___((_QWORD **)this, v5);
  if ( v8 )
  {
    v8 = 0;
    *((_QWORD *)v6 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
