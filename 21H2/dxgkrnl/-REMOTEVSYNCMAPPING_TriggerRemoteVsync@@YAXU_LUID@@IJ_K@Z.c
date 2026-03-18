/*
 * XREFs of ?REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@IJ_K@Z @ 0x1C0015AF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _lambda_f259e23562b9d456c7d694602274f108_::operator() @ 0x1C0058DF8 (_lambda_f259e23562b9d456c7d694602274f108_--operator().c)
 */

void __fastcall REMOTEVSYNCMAPPING_TriggerRemoteVsync(struct _LUID a1, int a2, int a3, __int64 a4)
{
  _QWORD **v8; // rdi
  char *v9; // rbx
  _QWORD *v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  _QWORD *v14; // rdx
  _QWORD v15[5]; // [rsp+60h] [rbp-88h] BYREF
  char *v16; // [rsp+88h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  char v18; // [rsp+A8h] [rbp-40h]
  struct _LUID v19; // [rsp+F0h] [rbp+8h] BYREF
  int v20; // [rsp+F8h] [rbp+10h] BYREF
  int v21; // [rsp+100h] [rbp+18h] BYREF
  __int64 v22; // [rsp+108h] [rbp+20h] BYREF

  if ( !DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2373LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v19 = a1;
  v8 = (_QWORD **)((char *)DXGGLOBAL::m_pGlobal + 304920);
  v22 = a4;
  v21 = a3;
  v20 = a2;
  v9 = (char *)DXGGLOBAL::m_pGlobal + 304936;
  v18 = 0;
  v16 = (char *)DXGGLOBAL::m_pGlobal + 304936;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DXGGLOBAL::m_pGlobal + 38117, &LockHandle);
  *((_QWORD *)v9 + 1) = KeGetCurrentThread();
  v10 = *v8;
  v15[0] = &v19;
  v15[1] = &v20;
  v15[2] = &v21;
  v15[3] = &v22;
  v18 = 1;
  if ( v10 == v8 )
    goto LABEL_3;
  do
  {
    v14 = v10;
    v10 = (_QWORD *)*v10;
  }
  while ( (unsigned __int8)lambda_f259e23562b9d456c7d694602274f108_::operator()(v15, v14) && v10 != v8 );
  if ( v18 )
  {
LABEL_3:
    v18 = 0;
    *((_QWORD *)v16 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
