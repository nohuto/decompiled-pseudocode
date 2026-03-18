/*
 * XREFs of VidSchiSetInProcessPriorityContext @ 0x1C0015ECC
 * Callers:
 *     VidSchSetInProcessPriorityContext @ 0x1C00880A0 (VidSchSetInProcessPriorityContext.c)
 * Callees:
 *     McTemplateK0pdd_EtwWriteTransfer @ 0x1C002CF4C (McTemplateK0pdd_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiSetInProcessPriorityContext(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1712LL), &LockHandle);
  v6 = *(_DWORD *)(a1 + 408);
  if ( v6 != a2 )
  {
    if ( bTracingEnabled )
    {
      v7 = *(_QWORD *)(a1 + 56);
      if ( !v7 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        LODWORD(v7) = a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pdd_EtwWriteTransfer(v6, v4, v5, v7, v6, a2);
    }
    v8 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 408) = a2;
    if ( (v8 & 1) != 0 )
    {
      if ( a2 == 1 )
      {
        v10 = (_QWORD *)(a1 + 416);
        v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 216LL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
        {
          v12 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) == v11 )
          {
            *v10 = v12;
            *(_QWORD *)(a1 + 424) = v11;
            *(_QWORD *)(v12 + 8) = v10;
            *v11 = v10;
            goto LABEL_8;
          }
        }
        else
        {
          v13 = (_QWORD *)v11[1];
          if ( (_QWORD *)*v13 == v11 )
          {
            *v10 = v11;
            *(_QWORD *)(a1 + 424) = v13;
            *v13 = v10;
            v11[1] = v10;
            goto LABEL_8;
          }
        }
      }
      else
      {
        v14 = (_QWORD *)(a1 + 416);
        v15 = *(_QWORD *)(a1 + 416);
        if ( *(_QWORD *)(v15 + 8) == a1 + 416 )
        {
          v16 = *(_QWORD **)(a1 + 424);
          if ( (_QWORD *)*v16 == v14 )
          {
            *v16 = v15;
            *(_QWORD *)(v15 + 8) = v16;
            *(_QWORD *)(a1 + 424) = 0LL;
            *v14 = 0LL;
            goto LABEL_8;
          }
        }
      }
      __fastfail(3u);
    }
  }
LABEL_8:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
