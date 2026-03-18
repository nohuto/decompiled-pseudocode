/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x140936434
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x140943E6C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140211210 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F4A40 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x14066A9D0 (EtwpIsGuidAllowed.c)
 *     EtwpBuildNotificationPacket @ 0x1407180C0 (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x14071A53C (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x14071AA18 (EtwpCalculateUpdateNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x14071AE6C (EtwpUnreferenceDataBlock.c)
 */

__int64 *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r15
  __int64 *result; // rax
  __int64 *v5; // rdi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v7; // rbp
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 *v11; // rcx
  __int64 *v12; // rbp
  unsigned __int8 v13; // r13
  __int64 *v14; // r14
  __int64 *v15; // rax
  __int64 v16; // r11
  __int64 v17; // rdx
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // dl
  volatile signed __int32 *v21; // r15
  char updated; // al
  struct _KTHREAD *v23; // rax
  __int64 v24; // [rsp+40h] [rbp-48h]
  char v26; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v27; // [rsp+A8h] [rbp+20h] BYREF

  v27 = 0LL;
  v2 = (_DWORD *)a2;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1080), a1, 0);
  v5 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(result + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 51), 0LL);
    v5[52] = (__int64)KeGetCurrentThread();
    v8 = EtwpBuildNotificationPacket((__int64)v5, 0LL, 0, &v27);
    v9 = (__int64)v27;
    if ( !v8 )
    {
      *v27 = 3;
      *(_OWORD *)(v9 + 40) = *(_OWORD *)a1;
      *(_DWORD *)(v9 + 36) = PsGetCurrentThreadProcessId();
      if ( !EtwpIsGuidAllowed((__int64)v2, a1) )
      {
        v10 = 0LL;
        if ( !v5[50] )
        {
          v11 = (__int64 *)v5[2];
          if ( v11 != v5 + 2 )
            v10 = (__int64)(v11 - 2);
        }
        v12 = v5;
        v13 = 0;
        while ( 1 )
        {
          v14 = (__int64 *)v12[7];
LABEL_27:
          while ( v14 != v12 + 7 )
          {
            v15 = v14;
            v24 = (__int64)v14;
            v16 = (__int64)v14;
            v14 = (__int64 *)*v14;
            v17 = v15[5];
            if ( v17 )
            {
              if ( v13 )
                v17 = *(_QWORD *)(v17 + 400);
              v18 = *((_BYTE *)v15 + 2 * v13 + 101);
              if ( v18 )
              {
                v19 = 0;
                while ( !*(_DWORD *)(32 * (v19 + 4LL) + v17) || *(unsigned __int16 *)(32LL * v19 + v17 + 134) != *v2 )
                {
                  if ( ++v19 >= 8u )
                    goto LABEL_27;
                }
                v20 = 1 << v19;
                if ( 1 << v19 && (v18 & v20) != 0 )
                {
                  v21 = (volatile signed __int32 *)v9;
                  *(_BYTE *)(v16 + 2LL * v13 + 101) = v18 & ~v20;
                  updated = EtwpCalculateUpdateNotification(v16, v20, v18, v18, 2, v13, 0, &v27);
                  v9 = (__int64)v27;
                  v26 = updated;
                  if ( v21 != v27 )
                  {
                    if ( v27 )
                    {
                      EtwpUnreferenceDataBlock(v21);
                      updated = v26;
                    }
                    else
                    {
                      v9 = (__int64)v21;
                      v27 = v21;
                    }
                  }
                  if ( updated )
                    EtwpSendDataBlock(v24, v9);
                  v2 = (_DWORD *)a2;
                }
              }
            }
          }
          if ( v12 != v5 )
          {
            v12[52] = 0LL;
            ExReleasePushLockEx((ULONG_PTR)(v12 + 51), 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v9 = (__int64)v27;
          }
          if ( !v10 )
            break;
          v23 = KeGetCurrentThread();
          v13 = 1;
          v12 = (__int64 *)v10;
          --v23->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v10 + 408, 0LL);
          *(_QWORD *)(v10 + 416) = KeGetCurrentThread();
          v10 = *(_QWORD *)(v10 + 16) - 16LL;
          if ( (__int64 *)v10 == v5 )
            v10 = 0LL;
          v9 = (__int64)v27;
        }
        v7 = (ULONG_PTR)(v5 + 51);
      }
    }
    if ( v9 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v9);
    v5[52] = 0LL;
    ExReleasePushLockEx(v7, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (__int64 *)EtwpUnreferenceGuidEntry(v5);
  }
  return result;
}
