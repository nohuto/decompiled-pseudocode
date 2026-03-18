/*
 * XREFs of ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C020D504
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01248A0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02258E8 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0126C58 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetNodePerfData(DXGADAPTER *this, struct _D3DKMT_NODE_PERFDATA *a2, __int64 a3)
{
  __int64 PhysicalAdapterIndex; // r12
  __int64 NodeOrdinal; // r13
  unsigned __int16 *v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // r14
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _DXGKARG_QUERYADAPTERINFO v22; // [rsp+20h] [rbp-30h] BYREF
  int v23; // [rsp+98h] [rbp+48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+50h] BYREF

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 70))
    && (NodeOrdinal = a2->NodeOrdinal,
        v7 = (unsigned __int16 *)(*((_QWORD *)this + 323) + 360 * PhysicalAdapterIndex),
        (unsigned int)NodeOrdinal < *v7) )
  {
    v8 = *((_QWORD *)v7 + 15);
    if ( v8 && *((_QWORD *)v7 + 16) )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v9 = (_QWORD *)(v8 + 44 * NodeOrdinal);
      v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v12 = v10;
      if ( *((_DWORD *)this + 40) == 1
        || 1000 * (v10.QuadPart - *(_QWORD *)(*((_QWORD *)v7 + 16) + 8 * NodeOrdinal)) / PerformanceFrequency.QuadPart < 450 )
      {
        LODWORD(v17) = 0;
      }
      else
      {
        *(_QWORD *)&v22.Flags.0 = 0LL;
        HIDWORD(v22.hKmdProcessHandle) = 0;
        v23 = NodeOrdinal | ((_DWORD)PhysicalAdapterIndex << 16);
        v22.pInputData = &v23;
        *(_QWORD *)&v22.Type = 24LL;
        *(_QWORD *)&v22.InputDataSize = 4LL;
        v22.pOutputData = v9;
        v22.OutputDataSize = 44;
        v13 = DXGADAPTER::DdiQueryAdapterInfo(this, &v22, v11.QuadPart);
        v17 = v13;
        if ( v13 < 0 )
        {
          v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
          *(_QWORD *)(v18 + 24) = this;
          *(_QWORD *)(v18 + 32) = v17;
          WdLogEvent5_WdWarning(v18);
        }
        else
        {
          *(LARGE_INTEGER *)(*((_QWORD *)v7 + 16) + 8 * NodeOrdinal) = v12;
        }
      }
      if ( (int)v17 >= 0 )
      {
        a2->Frequency = *v9;
        a2->MaxFrequency = v9[1];
        a2->MaxFrequencyOC = v9[2];
        a2->Voltage = *((_DWORD *)v9 + 6);
        a2->VoltageMax = *((_DWORD *)v9 + 7);
        a2->VoltageMaxOC = *((_DWORD *)v9 + 8);
        a2->MaxTransitionLatency = *(_QWORD *)((char *)v9 + 36);
      }
      return (unsigned int)v17;
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(this, a2, a3);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdWarning(v20);
      return 3221225659LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
}
