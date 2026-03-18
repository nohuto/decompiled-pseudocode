/*
 * XREFs of ?TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z @ 0x1C004D878
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C005D048 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C00D55C0 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___ @ 0x1C004D030 (REMOTEVSYNCMAPPING--IterateList__lambda_3d79675884e940cafd73bf406652b69f___.c)
 */

void __fastcall REMOTEVSYNCMAPPING::TriggerRemoteVsync(KSPIN_LOCK *this, struct _LUID a2, int a3)
{
  char *v3; // rbx
  __int64 v5; // r8
  struct _MDL *v6; // r9
  _DWORD *v7[3]; // [rsp+20h] [rbp-40h] BYREF
  char *v8; // [rsp+38h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  char v10; // [rsp+58h] [rbp-8h]
  struct _LUID v11; // [rsp+78h] [rbp+18h] BYREF
  int v12; // [rsp+80h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = (char *)(this + 2);
  v10 = 0;
  v8 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v10 = 1;
  v7[0] = &v11;
  v7[1] = &v12;
  REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___((_QWORD **)this, v7, v5, v6);
  if ( v10 )
  {
    v10 = 0;
    *((_QWORD *)v8 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
