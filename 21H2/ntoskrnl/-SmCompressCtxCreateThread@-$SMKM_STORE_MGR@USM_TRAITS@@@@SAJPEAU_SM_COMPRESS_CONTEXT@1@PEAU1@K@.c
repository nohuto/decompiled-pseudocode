/*
 * XREFs of ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403898C4
 * Callers:
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403D7250 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403D8FF0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x14037907C (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x1403899C8 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 ThreadParams; // rax
  void *StartContext; // rdi
  void (__fastcall *StartRoutine)(PRKEVENT *); // rax
  NTSTATUS v8; // ebx
  __int128 Object; // [rsp+40h] [rbp-20h] BYREF
  char *v11; // [rsp+50h] [rbp-10h]
  HANDLE ThreadHandle; // [rsp+88h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  v11 = 0LL;
  Object = 0LL;
  ThreadParams = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(a1, a3);
  StartContext = (void *)ThreadParams;
  if ( ThreadParams )
  {
    *(_QWORD *)(ThreadParams + 8) = a2;
    if ( a3 )
    {
      DWORD1(Object) = 0;
      v11 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      *(_QWORD *)(ThreadParams + 16) = &Object;
      StartRoutine = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread;
    }
    else
    {
      StartRoutine = (void (__fastcall *)(PRKEVENT *))SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread;
    }
    v8 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           *(HANDLE *)(a2 + 1856),
           0LL,
           (PKSTART_ROUTINE)StartRoutine,
           StartContext);
    if ( v8 < 0 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)StartContext);
    }
    else
    {
      if ( a3 )
        KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( ThreadHandle )
    ObCloseHandle(ThreadHandle, 0);
  return (unsigned int)v8;
}
