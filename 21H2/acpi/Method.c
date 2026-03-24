/*
 * XREFs of Method @ 0x1C0028A20
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0006720 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall Method(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  unsigned int NameSpaceObject; // ebx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  KIRQL v11; // dl

  v2 = (__int64 *)(a2 + 64);
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (_QWORD *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 8;
    *(_DWORD *)(*v2 + 88) = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120) + 194;
    v6 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1413827912, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( !v6 )
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(104, 0, 0, 0, 0LL);
      return NameSpaceObject;
    }
    v7 = *v2;
    v8 = *(_QWORD *)(*v2 + 96);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x536C6D41u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = v8 + 194;
      PoolWithTag[3] = v7;
      v11 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      if ( P )
      {
        v10[1] = P;
        *(_QWORD *)P = v10;
      }
      P = v10;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v11);
    }
    memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
    *(_BYTE *)(v8 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    memmove((void *)(v8 + 194), *(const void **)(a1 + 120), *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 184));
    *(_QWORD *)(v8 + 24) = v8 + 16;
    *(_QWORD *)(v8 + 16) = v8 + 16;
  }
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
  {
    NameSpaceObject = 0;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
  }
  return NameSpaceObject;
}
