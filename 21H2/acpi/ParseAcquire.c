/*
 * XREFs of ParseAcquire @ 0x1C0017EA0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     IsCompatableDSDTRevision @ 0x1C0019BAC (IsCompatableDSDTRevision.c)
 *     QueueContext @ 0x1C002A818 (QueueContext.c)
 *     PerformMutexDriverCallbacks @ 0x1C002AEB8 (PerformMutexDriverCallbacks.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     AcquireGL @ 0x1C0066318 (AcquireGL.c)
 *     ReleaseGL @ 0x1C0066FF0 (ReleaseGL.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C0069B14 (ReleaseASLMutex.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int16 v10; // r12
  KSPIN_LOCK *v11; // rdi
  KIRQL v12; // r15
  int v13; // ecx
  _SLIST_ENTRY *v14; // rax
  _SLIST_ENTRY *v15; // rcx
  _SLIST_ENTRY *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  _QWORD *v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *i; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // r9
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // edi
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax

  v5 = *(unsigned int *)(a2 + 16);
  v6 = a3;
  v7 = a1;
  if ( (v5 & 0xF) == 3 )
  {
LABEL_19:
    if ( v6 == 32773
      || *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) != 3
      || (v6 = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), v7, *(_QWORD *)(v7 + 80), *(_WORD *)(a2 + 40)),
          v6 != 32772) )
    {
      LODWORD(v5) = ++*(_DWORD *)(a2 + 16);
LABEL_22:
      if ( v6 )
      {
        if ( (v5 & 0x80000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v5 & 0xFFF7FFFF;
          ReleaseASLMutex(v7, *(_QWORD *)(a2 + 32), 0LL);
          LODWORD(v5) = *(_DWORD *)(a2 + 16);
        }
        if ( (v5 & 0x20000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v5 & 0xFFFDFFFF;
          v37 = ReleaseGL(v7);
          if ( v37 )
          {
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(v7, 3222536195LL);
            PrintDebugMessage(172, v37, 0, 0, 0LL);
            v6 = -1072431101;
          }
        }
        a1 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 32LL);
        if ( (_DWORD)a1 == 3 )
        {
          if ( *(_WORD *)(a2 + 40) == 0xFFFF )
          {
            *(_DWORD *)(a2 + 16) = 1;
            return v6;
          }
          v6 = 32773;
        }
      }
      v5 = (unsigned int)++*(_DWORD *)(a2 + 16);
LABEL_24:
      if ( (v5 & 0x40000) != 0 )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
        if ( v6 )
        {
          v38 = IsCompatableDSDTRevision(a1, v5, a3, a4);
          v39 = 0xFFFFFFFFLL;
          if ( v38 )
            v39 = -1LL;
          v6 = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = v39;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
        }
      }
      ++*(_DWORD *)(a2 + 16);
LABEL_26:
      v20 = *(_QWORD **)(v7 + 416);
      v21 = v20 - 2;
      *(_QWORD *)(v7 + 416) = v20[1];
      *((_DWORD *)v20 - 4) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v22 = *(v20 - 1);
      v23 = *(_QWORD **)(v22 + 40);
      for ( i = (_QWORD *)(v22 + 40); v23 != i; v23 = (_QWORD *)*v23 )
      {
        if ( v20 < v23 )
          break;
      }
      v25 = (_QWORD *)v23[1];
      if ( (_QWORD *)*v25 == v23 )
      {
        v20[1] = v25;
        *v20 = v23;
        *v25 = v20;
        v23[1] = v20;
        v26 = (_QWORD *)*v20;
        v27 = *v20 - 16LL;
        if ( (_QWORD *)*v20 != i )
        {
          v40 = *((unsigned int *)v21 + 1);
          if ( (_QWORD *)v27 == (_QWORD *)((char *)v21 + v40) )
          {
            *((_DWORD *)v21 + 1) = v40 + *(_DWORD *)(v27 + 4);
            v41 = *v26;
            if ( *(_QWORD **)(*v26 + 8LL) != v26 )
              goto LABEL_43;
            v42 = (_QWORD *)v26[1];
            if ( (_QWORD *)*v42 != v26 )
              goto LABEL_43;
            *v42 = v41;
            *(_QWORD *)(v41 + 8) = v42;
          }
        }
        v28 = (_QWORD *)v21[3];
        v29 = v28 - 2;
        if ( v28 != i )
        {
          v34 = *((unsigned int *)v29 + 1);
          if ( v21 == (_QWORD *)((char *)v29 + v34) )
          {
            *((_DWORD *)v29 + 1) = *((_DWORD *)v21 + 1) + v34;
            v43 = *v20;
            if ( *(_QWORD **)(*v20 + 8LL) != v20 )
              goto LABEL_43;
            v44 = (_QWORD *)v20[1];
            if ( (_QWORD *)*v44 != v20 )
              goto LABEL_43;
            *v44 = v43;
            v21 = v29;
            *(_QWORD *)(v43 + 8) = v44;
          }
        }
        if ( *(_QWORD *)(v22 + 32) > (unsigned __int64)v21 + *((unsigned int *)v21 + 1) )
        {
LABEL_31:
          KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
          return v6;
        }
        *(_QWORD *)(v22 + 32) = v21;
        v31 = v21 + 2;
        v32 = *v31;
        if ( *(_QWORD **)(*v31 + 8LL) == v31 )
        {
          v33 = (_QWORD *)v31[1];
          if ( (_QWORD *)*v33 == v31 )
          {
            *v33 = v32;
            *(_QWORD *)(v32 + 8) = v33;
            goto LABEL_31;
          }
        }
      }
LABEL_43:
      __fastfail(3u);
    }
    return v6;
  }
  if ( (_DWORD)a3 )
    goto LABEL_24;
  if ( (v5 & 0xF) != 0 )
  {
    a3 = 0x1C0000000uLL;
    switch ( v5 & 0xF )
    {
      case 1LL:
        goto LABEL_6;
      case 2LL:
        goto LABEL_8;
      case 3LL:
        goto LABEL_19;
      case 4LL:
        goto LABEL_22;
      case 5LL:
        goto LABEL_24;
      case 6LL:
        goto LABEL_26;
      default:
        return v6;
    }
  }
  a4 = *(_QWORD *)(a2 + 56);
  v8 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 16) = v5 + 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 0, 0) == 2
    && (int)PerformMutexDriverCallbacks(4, v8, a1, a4, 0) >= 0 )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 3, 2);
  }
  LODWORD(v5) = *(_DWORD *)(a2 + 16);
LABEL_6:
  *(_DWORD *)(a2 + 16) = v5 + 1;
  if ( (((_DWORD)v5 + 1) & 0x10000) == 0 || (v6 = AcquireGL(v7)) == 0 )
  {
    LODWORD(v5) = *(_DWORD *)(a2 + 16);
LABEL_8:
    if ( (v5 & 0x10000) != 0 )
      *(_DWORD *)(a2 + 16) = v5 | 0x20000;
    v9 = *(_DWORD *)(v7 + 64);
    v6 = 0;
    v10 = *(_WORD *)(a2 + 40);
    v11 = *(KSPIN_LOCK **)(a2 + 32);
    if ( (v9 & 4) != 0 )
    {
      v6 = 32773;
      *(_DWORD *)(v7 + 64) = v9 & 0xFFFFFFFB;
    }
    else
    {
      v12 = KeAcquireSpinLockRaiseToDpc(v11 + 23);
      if ( *(_DWORD *)v11 < *(_DWORD *)(v7 + 112) )
      {
        v6 = -1072431083;
        LogError(3222536213LL);
        AcpiDiagTraceAmlError(v7, 3222536213LL);
        PrintDebugMessage(5, 0, 0, 0, 0LL);
        KeReleaseSpinLock(v11 + 23, v12);
      }
      else
      {
        v13 = *((_DWORD *)v11 + 1);
        if ( v13 )
        {
          if ( *(_QWORD *)(v11[1] + 8) != v7 )
          {
            QueueContext(v7, v10, v11 + 2);
            KeReleaseSpinLock(v11 + 23, v12);
            v35 = *(_DWORD *)(a2 + 16);
            v6 = 32772;
            if ( (v35 & 0x20000) != 0 )
            {
              *(_DWORD *)(a2 + 16) = v35 & 0xFFFDFFFF;
              v6 = ReleaseGL(v7);
              v36 = *(_DWORD *)(a2 + 16);
              if ( v6 )
              {
                *(_DWORD *)(a2 + 16) = v36 + 3;
                LogError(3222536195LL);
                AcpiDiagTraceAmlError(v7, 3222536195LL);
                PrintDebugMessage(119, v6, 0, 0, 0LL);
                return (unsigned int)-1072431101;
              }
              else
              {
                *(_DWORD *)(a2 + 16) = v36 - 1;
              }
            }
            return v6;
          }
          *((_DWORD *)v11 + 1) = v13 + 1;
          KeReleaseSpinLock(v11 + 23, v12);
          goto LABEL_17;
        }
        v14 = HeapAlloc(*(struct _SLIST_ENTRY **)(v7 + 320), 1380865871, 0x28u);
        if ( v14 )
        {
          v15 = (_SLIST_ENTRY *)(v7 + 48);
          *((_QWORD *)&v14->Next + 1) = v7;
          v14[1].Next = (_SLIST_ENTRY *)v11;
          v16 = (_SLIST_ENTRY *)((char *)v14 + 24);
          LODWORD(v14->Next) = 1;
          v17 = *(_QWORD *)(v7 + 48);
          if ( *(_QWORD *)(v17 + 8) != v7 + 48 )
            goto LABEL_43;
          v16->Next = (_SLIST_ENTRY *)v17;
          v14[2].Next = v15;
          *(_QWORD *)(v17 + 8) = v16;
          v15->Next = v16;
          v11[1] = (KSPIN_LOCK)v14;
          v18 = *(_DWORD *)v11;
          *((_DWORD *)v11 + 1) = 1;
          *(_DWORD *)(v7 + 112) = v18;
        }
        else
        {
          v6 = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(v7, 3221225626LL);
          PrintDebugMessage(4, 0, 0, 0, 0LL);
        }
        KeReleaseSpinLock(v11 + 23, v12);
        if ( !v6 )
        {
LABEL_17:
          v19 = *(_DWORD *)(a2 + 16) | 0x80000;
LABEL_18:
          *(_DWORD *)(a2 + 16) = v19 + 1;
          goto LABEL_19;
        }
      }
    }
    v19 = *(_DWORD *)(a2 + 16);
    goto LABEL_18;
  }
  return v6;
}
