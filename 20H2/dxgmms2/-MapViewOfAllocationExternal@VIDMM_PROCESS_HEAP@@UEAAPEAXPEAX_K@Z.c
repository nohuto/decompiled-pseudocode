/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K@Z @ 0x1C00CE380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocationExternal(VIDMM_PROCESS_HEAP *this, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rax
  __int64 CurrentProcess; // rax
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v22 = a3;
  v3 = (__int64 *)*((_QWORD *)this + 1);
  v20 = 0LL;
  v5 = *v3;
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
    v10 = 0LL;
    v11 = a2[4];
    v12 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v13 = a2[1];
    v10 = a2[2];
    v12 = 4;
    v11 = *(_QWORD *)(v13 + 88);
    if ( ((*(_DWORD *)(v13 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v12 = 1028;
  }
  v21 = v10;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C0051754);
    v14 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v14 + 24) = 2584LL;
    WdLogEvent5_WdLowResource(v14);
    v16 = -1073741823;
LABEL_9:
    _InterlockedIncrement(&dword_1C0051754);
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = v16;
    WdLogEvent5_WdLowResource(v17);
    return v20;
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v16 = MmMapViewOfSection(v11, CurrentProcess, &v20, 0LL, v22, &v21, &v22, 2, 0, v12);
  if ( v16 < 0 )
    goto LABEL_9;
  return v10 - v21 + v20;
}
