/*
 * XREFs of ParseRelease @ 0x1C00033A0
 * Callers:
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 *     ReleaseASLMutex @ 0x1C002F0CC (ReleaseASLMutex.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     InsertReadyQueue @ 0x1C00043E0 (InsertReadyQueue.c)
 *     PerformMutexDriverCallbacks @ 0x1C00100C8 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     ReleaseGL @ 0x1C0065AAC (ReleaseGL.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v3; // rdi
  int v5; // eax
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // si
  __int64 v10; // rax
  int v11; // eax
  KIRQL v12; // al
  KIRQL v13; // r13
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *i; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rdx
  _QWORD *v31; // rax
  struct _SLIST_ENTRY **v32; // rdi
  struct _SLIST_ENTRY *v33; // rcx
  _QWORD *v35; // rcx
  int v36; // ecx
  int v37; // edx
  int v38; // r8d
  int v39; // r8d
  __int64 v40; // r10
  __int64 v41; // rcx
  _QWORD *v42; // rax
  struct _SLIST_ENTRY *Next; // rax

  v3 = *(int **)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 16);
  if ( (v5 & 0xF) == 0 )
  {
    v8 = (KSPIN_LOCK *)(v3 + 46);
    *(_DWORD *)(a2 + 16) = v5 + 1;
    a3 = 0;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 23);
    if ( v3[1] )
    {
      v10 = *((_QWORD *)v3 + 1);
      if ( v10 && *(_QWORD *)(v10 + 8) == a1 )
      {
        if ( (unsigned int)*v3 <= *(_DWORD *)(a1 + 112) )
        {
          *(_DWORD *)(a1 + 112) = *v3;
          if ( v3[1] == 1 )
            *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_8:
          KeReleaseSpinLock((PKSPIN_LOCK)v3 + 23, v9);
          v5 = *(_DWORD *)(a2 + 16);
          if ( (*(_BYTE *)(a2 + 16) & 0xF) == 3 )
            goto LABEL_33;
          if ( (v5 & 0x80000) == 0 )
          {
            ++v5;
LABEL_13:
            *(_DWORD *)(a2 + 16) = v5 + 1;
            v12 = KeAcquireSpinLockRaiseToDpc(v8);
            --v3[1];
            v13 = v12;
            if ( (*(_DWORD *)(a2 + 16) & 0x80000) == 0 )
            {
LABEL_32:
              KeReleaseSpinLock(v8, v13);
              goto LABEL_33;
            }
            v14 = (_QWORD *)*((_QWORD *)v3 + 1);
            v15 = v14[3];
            if ( *(_QWORD **)(v15 + 8) == v14 + 3 )
            {
              v16 = (_QWORD *)v14[4];
              if ( (_QWORD *)*v16 == v14 + 3 )
              {
                *v16 = v15;
                v17 = v14 - 2;
                *(_QWORD *)(v15 + 8) = v16;
                *((_DWORD *)v14 - 4) = 0;
                NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
                v18 = *(v14 - 1);
                v19 = *(_QWORD **)(v18 + 40);
                for ( i = (_QWORD *)(v18 + 40); v19 != i; v19 = (_QWORD *)*v19 )
                {
                  if ( v14 < v19 )
                    break;
                }
                v21 = (_QWORD *)v19[1];
                if ( (_QWORD *)*v21 == v19 )
                {
                  v14[1] = v21;
                  *v14 = v19;
                  *v21 = v14;
                  v19[1] = v14;
                  v22 = (_QWORD *)*v14;
                  v23 = *v14 - 16LL;
                  if ( (_QWORD *)*v14 != i )
                  {
                    v40 = *((unsigned int *)v17 + 1);
                    if ( (_QWORD *)v23 == (_QWORD *)((char *)v17 + v40) )
                    {
                      *((_DWORD *)v17 + 1) = v40 + *(_DWORD *)(v23 + 4);
                      v41 = *v22;
                      if ( *(_QWORD **)(*v22 + 8LL) != v22 )
                        goto LABEL_60;
                      v42 = (_QWORD *)v22[1];
                      if ( (_QWORD *)*v42 != v22 )
                        goto LABEL_60;
                      *v42 = v41;
                      *(_QWORD *)(v41 + 8) = v42;
                    }
                  }
                  v24 = (_QWORD *)v17[3];
                  v25 = v24 - 2;
                  if ( v24 != i )
                  {
                    v26 = *((unsigned int *)v25 + 1);
                    if ( v17 == (_QWORD *)((char *)v25 + v26) )
                    {
                      *((_DWORD *)v25 + 1) = *((_DWORD *)v17 + 1) + v26;
                      v27 = *v14;
                      if ( *(_QWORD **)(*v14 + 8LL) != v14 )
                        goto LABEL_60;
                      v28 = (_QWORD *)v14[1];
                      if ( (_QWORD *)*v28 != v14 )
                        goto LABEL_60;
                      *v28 = v27;
                      v17 = v25;
                      *(_QWORD *)(v27 + 8) = v28;
                    }
                  }
                  if ( *(_QWORD *)(v18 + 32) <= (unsigned __int64)v17 + *((unsigned int *)v17 + 1) )
                  {
                    *(_QWORD *)(v18 + 32) = v17;
                    v29 = v17 + 2;
                    v30 = *v29;
                    if ( *(_QWORD **)(*v29 + 8LL) != v29 )
                      goto LABEL_60;
                    v31 = (_QWORD *)v29[1];
                    if ( (_QWORD *)*v31 != v29 )
                      goto LABEL_60;
                    *v31 = v30;
                    *(_QWORD *)(v30 + 8) = v31;
                  }
                  KeReleaseSpinLock(&gmutHeap, NewIrql);
                  *((_QWORD *)v3 + 1) = 0LL;
                  v32 = (struct _SLIST_ENTRY **)(v3 + 4);
                  byte_1C00827B0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                  v33 = *v32;
                  if ( *v32 == (struct _SLIST_ENTRY *)v32 )
                  {
LABEL_31:
                    KeReleaseSpinLock(&SpinLock, byte_1C00827B0);
                    goto LABEL_32;
                  }
                  if ( *((struct _SLIST_ENTRY ***)&v33->Next + 1) == v32 )
                  {
                    Next = v33->Next;
                    if ( *(&v33->Next->Next + 1) == v33 )
                    {
                      *v32 = Next;
                      *((_QWORD *)&Next->Next + 1) = v32;
                      *((_QWORD *)&v33->Next + 1) = v33;
                      v33->Next = v33;
                      InsertReadyQueue(v33 - 2);
                      goto LABEL_31;
                    }
                  }
                }
              }
            }
LABEL_60:
            __fastfail(3u);
          }
          goto LABEL_10;
        }
        a3 = -1072431083;
        LogError(3222536213LL);
        AcpiDiagTraceAmlError(a1, 3222536213LL);
        v37 = *v3;
        v36 = 136;
        v38 = *(_DWORD *)(a1 + 112);
LABEL_47:
        PrintDebugMessage(v36, v37, v38, 0, 0LL);
        *(_DWORD *)(a2 + 16) += 2;
        goto LABEL_8;
      }
      a3 = -1072431081;
      LogError(3222536215LL);
      AcpiDiagTraceAmlError(a1, 3222536215LL);
      v36 = 138;
    }
    else
    {
      a3 = -1072431082;
      LogError(3222536214LL);
      AcpiDiagTraceAmlError(a1, 3222536214LL);
      v36 = 137;
    }
    v38 = 0;
    v37 = 0;
    goto LABEL_47;
  }
  if ( (v5 & 0xF) != 1 )
  {
    if ( (v5 & 0xF) != 2 )
    {
      if ( (v5 & 0xF) != 3 )
      {
        if ( (v5 & 0xF) != 4 )
          return a3;
        goto LABEL_35;
      }
LABEL_33:
      if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
      {
        a3 = ReleaseGL(a1);
        if ( a3 )
        {
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(172, a3, 0, 0, 0LL);
          a3 = -1072431101;
        }
      }
      v5 = *(_DWORD *)(a2 + 16);
LABEL_35:
      if ( (v5 & 0x40000) == 0 )
      {
        v35 = *(_QWORD **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v35[1];
        HeapFree(v35);
      }
      return a3;
    }
    goto LABEL_12;
  }
LABEL_10:
  v11 = v5 & 0x20000;
  if ( v3[8] != 3 )
    goto LABEL_11;
  v39 = a1;
  if ( !v11 )
    v39 = 0;
  a3 = PerformMutexDriverCallbacks(3, (_DWORD)v3, v39, 0, 0);
  if ( a3 != 32772 )
  {
LABEL_11:
    v5 = *(_DWORD *)(a2 + 16) + 1;
LABEL_12:
    v8 = (KSPIN_LOCK *)(v3 + 46);
    goto LABEL_13;
  }
  return a3;
}
