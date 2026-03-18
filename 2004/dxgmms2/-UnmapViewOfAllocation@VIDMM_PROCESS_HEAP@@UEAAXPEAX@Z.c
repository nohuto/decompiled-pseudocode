/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C00CF4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0060E30 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, int *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  int v8; // eax
  void *v9; // rbx
  void *CurrentProcess; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v3 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 30LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v8 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    v9 = (void *)*((_QWORD *)a2 + 11);
    if ( (v8 & 1) != 0 )
    {
      CurrentProcess = (void *)PsGetCurrentProcess(v5);
      VidMmUnmapViewAsync(CurrentProcess, *((PVOID *)a2 + 4), v9);
    }
    else
    {
      v11 = PsGetCurrentProcess(v5);
      MmUnmapViewOfSection(v11, v9);
    }
    *a2 &= ~2u;
LABEL_13:
    *((_QWORD *)a2 + 11) = 0LL;
    return;
  }
  if ( (v8 & 4) != 0 )
  {
    if ( (v8 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, *((PVOID *)a2 + 4), *((PVOID *)a2 + 11));
    else
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 11));
    *a2 &= ~4u;
    goto LABEL_13;
  }
  v12 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
  *(_QWORD *)(v12 + 24) = 2515LL;
  WdLogEvent5_WdAssertion(v12);
}
