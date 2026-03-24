/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C00CE1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0076188 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocationExternal(VIDMM_PROCESS_HEAP *this, PVOID *a2, void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  void *CurrentProcess; // rax
  __int64 v11; // rax

  v5 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2, a3) != v5 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v9[5] = 0LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 30LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    CurrentProcess = (void *)PsGetCurrentProcess(v7, v6, v8);
    VidMmUnmapViewAsync(CurrentProcess, a2[4], a3);
  }
  else
  {
    v11 = PsGetCurrentProcess(v7, v6, v8);
    MmUnmapViewOfSection(v11);
  }
}
