/*
 * XREFs of ParseRelease @ 0x1C0024F10
 * Callers:
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ReleaseASLMutex @ 0x1C0069B14 (ReleaseASLMutex.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     PerformMutexDriverCallbacks @ 0x1C002AEB8 (PerformMutexDriverCallbacks.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     ReleaseGL @ 0x1C0066FF0 (ReleaseGL.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
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
  _QWORD *v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *i; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  _QWORD *v31; // rax
  struct _SLIST_ENTRY **v32; // rdi
  struct _SLIST_ENTRY *v33; // rcx
  _QWORD *v35; // rcx
  __int64 v36; // r10
  __int64 v37; // rcx
  _QWORD *v38; // rax
  int v39; // ecx
  int v40; // edx
  int v41; // r8d
  int v42; // r8d
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
                byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
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
                    v36 = *((unsigned int *)v17 + 1);
                    if ( (_QWORD *)v23 == (_QWORD *)((char *)v17 + v36) )
                    {
                      *((_DWORD *)v17 + 1) = v36 + *(_DWORD *)(v23 + 4);
                      v37 = *v22;
                      if ( *(_QWORD **)(*v22 + 8LL) != v22 )
                        goto LABEL_42;
                      v38 = (_QWORD *)v22[1];
                      if ( (_QWORD *)*v38 != v22 )
                        goto LABEL_42;
                      *v38 = v37;
                      *(_QWORD *)(v37 + 8) = v38;
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
                        goto LABEL_42;
                      v28 = (_QWORD *)v14[1];
                      if ( (_QWORD *)*v28 != v14 )
                        goto LABEL_42;
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
                      goto LABEL_42;
                    v31 = (_QWORD *)v29[1];
                    if ( (_QWORD *)*v31 != v29 )
                      goto LABEL_42;
                    *v31 = v30;
                    *(_QWORD *)(v30 + 8) = v31;
                  }
                  KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
                  *((_QWORD *)v3 + 1) = 0LL;
                  v32 = (struct _SLIST_ENTRY **)(v3 + 4);
                  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                  v33 = *v32;
                  if ( *v32 == (struct _SLIST_ENTRY *)v32 )
                  {
LABEL_31:
                    KeReleaseSpinLock(&SpinLock, NewIrql);
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
                      InsertReadyQueue(v33 - 2, 1);
                      goto LABEL_31;
                    }
                  }
                }
              }
            }
LABEL_42:
            __fastfail(3u);
          }
          goto LABEL_10;
        }
        a3 = -1072431083;
        LogError(3222536213LL);
        AcpiDiagTraceAmlError(a1, 3222536213LL);
        v40 = *v3;
        v39 = 136;
        v41 = *(_DWORD *)(a1 + 112);
LABEL_52:
        PrintDebugMessage(v39, v40, v41, 0, 0LL);
        *(_DWORD *)(a2 + 16) += 2;
        goto LABEL_8;
      }
      a3 = -1072431081;
      LogError(3222536215LL);
      AcpiDiagTraceAmlError(a1, 3222536215LL);
      v39 = 138;
    }
    else
    {
      a3 = -1072431082;
      LogError(3222536214LL);
      AcpiDiagTraceAmlError(a1, 3222536214LL);
      v39 = 137;
    }
    v41 = 0;
    v40 = 0;
    goto LABEL_52;
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
  v42 = a1;
  if ( !v11 )
    v42 = 0;
  a3 = PerformMutexDriverCallbacks(3, (_DWORD)v3, v42, 0, 0);
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
