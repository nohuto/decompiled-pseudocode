/*
 * XREFs of ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140250C60
 * Callers:
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C8990 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403C9028 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 * Callees:
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140250D64 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140251C3C (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 ThreadParams; // rax
  void *StartContext; // rbx
  KSTART_ROUTINE *StartRoutine; // rax
  NTSTATUS v8; // edi
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v11; // [rsp+42h] [rbp-1Eh]
  int v12; // [rsp+44h] [rbp-1Ch]
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE ThreadHandle; // [rsp+88h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  ThreadParams = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(a1, a3);
  StartContext = (void *)ThreadParams;
  if ( ThreadParams )
  {
    *(_QWORD *)(ThreadParams + 8) = a2;
    if ( a3 )
    {
      Object = 0;
      v12 = 0;
      v13[1] = v13;
      v13[0] = v13;
      v11 = 6;
      *(_QWORD *)(ThreadParams + 16) = &Object;
      StartRoutine = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread;
    }
    else
    {
      StartRoutine = (KSTART_ROUTINE *)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread;
    }
    v8 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, *(HANDLE *)(a2 + 1856), 0LL, StartRoutine, StartContext);
    if ( v8 >= 0 )
    {
      if ( a3 )
        KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      StartContext = 0LL;
      v8 = 0;
    }
    if ( StartContext )
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams(StartContext);
  }
  else
  {
    v8 = -1073741670;
  }
  if ( ThreadHandle )
    ObCloseHandle(ThreadHandle, 0);
  return (unsigned int)v8;
}
