/*
 * XREFs of VidSchiSignalSyncObject @ 0x1C003A630
 * Callers:
 *     VidSchSubmitSignalToHwQueue @ 0x1C0042100 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+48h] [rbp-20h] BYREF

  v6 = a1;
  v7 = *(_QWORD *)(a2 + 8LL * a1);
  if ( a5 )
  {
    v8 = *(_DWORD *)(v7 + 48);
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v20 = *(_DWORD *)(v7 + 64);
        if ( v20 >= *(_DWORD *)(v7 + 60) )
          WdLogSingleEntry1(3LL, *(_QWORD *)(v7 + 16));
        else
          *(_DWORD *)(v7 + 64) = v20 + 1;
      }
      else if ( v8 == 2 )
      {
        if ( *(_BYTE *)(v7 + 27) )
        {
          v15 = *(_QWORD *)(v7 + 208);
          v16 = *(_QWORD *)(a4 + 8LL * a1);
          memset(&v22, 0, sizeof(v22));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 8), &v22);
          v17 = *(_QWORD *)(v15 + 40);
          if ( v17 >= v16 )
            WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v17, v16);
          else
            *(_QWORD *)(v15 + 40) = v16;
          p_LockHandle = &v22;
          goto LABEL_12;
        }
        v18 = *(_QWORD *)(v7 + 64);
        v19 = *(_QWORD *)(a4 + 8LL * a1);
        if ( v18 >= v19 )
          WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v18, v19);
        else
          *(_QWORD *)(v7 + 64) = v19;
      }
      else if ( (unsigned int)(v8 - 4) <= 1 && !*(_BYTE *)(v7 + 28) )
      {
        if ( *(_BYTE *)(v7 + 27) )
        {
          v9 = *(_QWORD *)(v7 + 208);
          v10 = *(_QWORD *)(a4 + 8LL * a1);
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 8), &LockHandle);
          v11 = *(_QWORD *)(v9 + 40);
          if ( v11 >= v10 )
            WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v11, v10);
          else
            *(_QWORD *)(v9 + 40) = v10;
          p_LockHandle = &LockHandle;
LABEL_12:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
          goto LABEL_40;
        }
        if ( (a3 & 4) == 0 )
        {
          v13 = *(_QWORD *)(a4 + 8LL * a1);
          v14 = *(_QWORD *)(v7 + 88);
          if ( *(_BYTE *)(v7 + 29) )
          {
            if ( v13 < v14 )
            {
              WdLogSingleEntry2(3LL, *(_QWORD *)(a4 + 8 * v6), *(_QWORD *)(v7 + 88));
LABEL_21:
              WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 88), *(_QWORD *)(a4 + 8 * v6));
LABEL_25:
              WdLogSingleEntry4(
                4LL,
                v7,
                **(_QWORD **)(v7 + 64),
                *(_QWORD *)(a4 + 8 * v6),
                *(unsigned __int8 *)(v7 + 28));
              goto LABEL_40;
            }
            if ( v13 == v14 )
              WdLogSingleEntry1(3LL, *(_QWORD *)(a4 + 8 * v6));
          }
          else
          {
            if ( (int)v14 - (int)v13 > 0 )
            {
              WdLogSingleEntry2(3LL, (unsigned int)v13, (unsigned int)v14);
              goto LABEL_21;
            }
            if ( (_DWORD)v14 == (_DWORD)v13 )
              WdLogSingleEntry1(3LL, (unsigned int)v13);
          }
        }
        *(_QWORD *)(v7 + 88) = *(_QWORD *)(a4 + 8 * v6);
        goto LABEL_25;
      }
    }
    else
    {
      if ( !*(_QWORD *)(v7 + 64) )
        WdLogSingleEntry1(3LL, *(_QWORD *)(v7 + 16));
      *(_QWORD *)(v7 + 64) = 0LL;
    }
  }
LABEL_40:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
}
