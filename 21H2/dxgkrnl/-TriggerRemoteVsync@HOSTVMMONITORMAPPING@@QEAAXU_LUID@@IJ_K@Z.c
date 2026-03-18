/*
 * XREFs of ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x1C002F844
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C006CCBC (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CED50 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     _lambda_f259e23562b9d456c7d694602274f108_::operator() @ 0x1C0058DF8 (_lambda_f259e23562b9d456c7d694602274f108_--operator().c)
 */

void __fastcall HOSTVMMONITORMAPPING::TriggerRemoteVsync(KSPIN_LOCK *this, struct _LUID a2, int a3, int a4, char a5)
{
  char *v5; // rbx
  HOSTVMMONITORMAPPING *v7; // rbx
  HOSTVMMONITORMAPPING *v8; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-50h] BYREF
  char *v10; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+68h] [rbp-8h]
  struct _LUID v13; // [rsp+98h] [rbp+28h] BYREF
  int v14; // [rsp+A0h] [rbp+30h] BYREF
  int v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v5 = (char *)(this + 2);
  v12 = 0;
  v10 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v7 = (HOSTVMMONITORMAPPING *)*this;
  v9[0] = &v13;
  v9[1] = &v14;
  v9[2] = &v15;
  v9[3] = &a5;
  v12 = 1;
  if ( v7 == (HOSTVMMONITORMAPPING *)this )
    goto LABEL_5;
  do
  {
    v8 = v7;
    v7 = *(HOSTVMMONITORMAPPING **)v7;
  }
  while ( (unsigned __int8)lambda_f259e23562b9d456c7d694602274f108_::operator()(v9, v8)
       && v7 != (HOSTVMMONITORMAPPING *)this );
  if ( v12 )
  {
LABEL_5:
    v12 = 0;
    *((_QWORD *)v10 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
