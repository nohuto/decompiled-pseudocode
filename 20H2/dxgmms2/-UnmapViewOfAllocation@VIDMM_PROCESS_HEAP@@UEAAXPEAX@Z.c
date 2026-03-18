/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX@Z @ 0x1C00CEEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006C868 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, PVOID *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  int v9; // eax
  PVOID v10; // rbx
  void *CurrentProcess; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3) != v4 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 30LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v9 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    v10 = a2[11];
    if ( (v9 & 1) != 0 )
    {
      CurrentProcess = (void *)PsGetCurrentProcess(v6, v5, v7);
      VidMmUnmapViewAsync(CurrentProcess, a2[4], v10);
    }
    else
    {
      v12 = PsGetCurrentProcess(v6, v5, v7);
      MmUnmapViewOfSection(v12, v10);
    }
    *(_DWORD *)a2 &= ~2u;
LABEL_13:
    a2[11] = 0LL;
    return;
  }
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, a2[4], a2[11]);
    else
      MmUnmapViewInSystemSpace(a2[11]);
    *(_DWORD *)a2 &= ~4u;
    goto LABEL_13;
  }
  v13 = WdLogNewEntry5_WdAssertion(v6, v5, v7);
  *(_QWORD *)(v13 + 24) = 2515LL;
  WdLogEvent5_WdAssertion(v13);
}
