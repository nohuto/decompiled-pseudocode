/*
 * XREFs of IvtFlushTbInternal @ 0x1404DFCE4
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1404DF808 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushDomainTb @ 0x1404DFC90 (IvtFlushDomainTb.c)
 *     IvtInitializeIommu @ 0x1409AA880 (IvtInitializeIommu.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     HalpIommuGetNextFlushDevice @ 0x1404CC1BC (HalpIommuGetNextFlushDevice.c)
 *     IvtIommuSendCommand @ 0x1404E0A70 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404E0C70 (IvtIommuWaitCommand.c)
 */

char __fastcall IvtFlushTbInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        int a6,
        _QWORD *a7,
        int a8,
        __int64 a9)
{
  char v9; // r15
  int v10; // esi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  __int16 v18; // bx
  unsigned __int16 v19; // bx
  __int64 v20; // rsi
  int v21; // r8d
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  unsigned int v25; // esi
  int v26; // r14d
  unsigned __int64 v27; // rbx
  unsigned int v28; // ecx
  __int16 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  _QWORD *v32; // r15
  _BYTE *v33; // rax
  char result; // al
  struct _EX_RUNDOWN_REF *v35; // rcx
  _BYTE *v36; // [rsp+30h] [rbp-59h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+38h] [rbp-51h] BYREF
  __int128 v38; // [rsp+40h] [rbp-49h] BYREF
  __int64 v39; // [rsp+50h] [rbp-39h] BYREF
  _QWORD *v40; // [rsp+58h] [rbp-31h] BYREF
  __int128 v41; // [rsp+60h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  __int64 v43; // [rsp+88h] [rbp-1h]
  unsigned int v44; // [rsp+D0h] [rbp+47h]
  int v45; // [rsp+D8h] [rbp+4Fh] BYREF

  v9 = a5;
  v10 = a8;
  RunRef = 0LL;
  v36 = 0LL;
  v45 = 0;
  v41 = 0LL;
  v39 = 0LL;
  v12 = (-(__int64)(a5 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v38 = 0LL;
  if ( !a8 )
  {
    if ( a4 )
    {
      if ( a5 )
        v13 = v12 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
      else
        v13 = v12 & 0xFFFFFFFFFFFFFFCFuLL;
    }
    else
    {
      if ( a5 )
      {
        *(_QWORD *)&v38 = v12 & 0xFFFFFFFF0000FFEFuLL | ((unsigned __int64)(unsigned __int16)a3 << 16) | 0x20;
        goto LABEL_10;
      }
      v13 = v12 & 0xFFF00000FFFFFFCFuLL | 0x20;
    }
    *(_QWORD *)&v38 = v13;
LABEL_10:
    IvtIommuSendCommand(a1, &v38, 0LL);
    if ( v9 )
      goto LABEL_48;
    v40 = 0LL;
    *((_QWORD *)&v41 + 1) = 0x8000000000000800uLL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 168);
    v15 = 8LL;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 168));
    v16 = a7;
    while ( HalpIommuGetNextFlushDevice(v16, &v40, &v39, &v45, &RunRef, &v36) )
    {
      if ( ExAcquireRundownProtection(RunRef) )
      {
        v17 = (unsigned __int64)(unsigned __int16)v39 << 12;
        *v36 = 1;
        *(_QWORD *)&v41 = v15 & 0xFFFFFFFF0000FE0FuLL | (16 * (v45 & 0x1F | v17));
        IvtIommuSendCommand(a1, &v41, 1LL);
        v15 = v41;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_49;
  }
  v18 = WORD4(v38);
  if ( a5 )
  {
    *(_QWORD *)&v38 = v12 ^ (v12 ^ (a3 << 16)) & 0xFFFF0000 | 0xF0;
  }
  else
  {
    *(_QWORD *)&v38 = v12 & 0xFFF00000FFFFFFCFuLL | 0x30;
    v18 = WORD4(v38) | 0x80;
  }
  LockHandle.LockQueue.Next = 0LL;
  v19 = v18 & 0xFFBF;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 168);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 168));
  while ( 2 )
  {
    v20 = (unsigned int)(v10 - 1);
    v21 = 0;
    a6 = 0;
    a8 = v20;
    v22 = *(_QWORD *)(a9 + 8 * v20);
    v23 = (v22 >> 10) & 3;
    if ( ((v22 >> 10) & 3) != 0 )
    {
      v21 = 9 * v23;
      a6 = 9 * v23;
    }
    v24 = v22 & 0xFFFFFFFFFFFFF000uLL;
    v25 = (*(_DWORD *)(a9 + 8 * v20) & 0x3FF) + 1;
    v44 = v25;
    while ( 1 )
    {
      v26 = 0;
      v27 = v24 ^ ((unsigned __int16)v24 ^ v19) & 0xFFF;
      if ( v25 > 1 )
      {
        do
        {
          if ( (((1 << (v21 + 13 + v26)) - 1) & (unsigned int)v24) != 0 )
            break;
          ++v26;
        }
        while ( 1 << v26 < v25 );
      }
      v28 = v25 < 1 << v26 ? (1 << v26) - v25 : 0;
      if ( v28 >= 0x1F || v21 == 9 && v28 )
        --v26;
      v43 = (unsigned int)(v26 + v21);
      *((_QWORD *)&v38 + 1) = ((unsigned __int8)v27 ^ (unsigned __int8)(v26 + v21)) & 0x3F ^ v27;
      IvtIommuSendCommand(a1, &v38, 1LL);
      if ( (_QWORD *)*a7 != a7 && !v9 )
      {
        v29 = 0;
        v30 = v24;
        v31 = 8LL;
        if ( v26 || a6 )
        {
          v29 = 2048;
          v30 = (unsigned int)~(1 << (v43 + 11)) & (v24 | (unsigned int)((1 << (v43 + 11)) - 1));
        }
        v32 = a7;
        v40 = 0LL;
        *((_QWORD *)&v41 + 1) = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)v29) & 0xFFF;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !HalpIommuGetNextFlushDevice(v32, &v40, &v39, &v45, &RunRef, &v36) )
            {
              v25 = v44;
              v9 = a5;
              goto LABEL_42;
            }
            v31 = v31 & 0xFFFFFFFF0000FE0FuLL | (16 * (v45 & 0x1F | ((unsigned __int64)(unsigned __int16)v39 << 12)));
            v33 = v36;
            *(_QWORD *)&v41 = v31;
            if ( !*v36 )
              break;
LABEL_40:
            *v33 = 1;
            IvtIommuSendCommand(a1, &v41, 1LL);
            v31 = v41;
          }
          if ( ExAcquireRundownProtection(RunRef) )
          {
            v33 = v36;
            goto LABEL_40;
          }
        }
      }
LABEL_42:
      if ( v25 <= 1 << v26 )
        break;
      v25 -= 1 << v26;
      v44 = v25;
      v24 += 1LL << ((unsigned __int8)v43 + 12);
      if ( !v25 )
        break;
      v19 = WORD4(v38);
      v21 = a6;
    }
    v10 = a8;
    if ( a8 )
    {
      v19 = WORD4(v38);
      continue;
    }
    break;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_48:
  v16 = a7;
LABEL_49:
  result = IvtIommuWaitCommand(a1, v14, 0LL);
  v40 = 0LL;
  if ( !v9 )
  {
    while ( 1 )
    {
      result = HalpIommuGetNextFlushDevice(v16, &v40, &v39, &v45, &RunRef, &v36);
      if ( !result )
        break;
      if ( *v36 )
      {
        v35 = RunRef;
        *v36 = 0;
        ExReleaseRundownProtection(v35);
      }
    }
  }
  return result;
}
