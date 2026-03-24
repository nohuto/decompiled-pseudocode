/*
 * XREFs of ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C022FB28
 * Callers:
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C02310E4 (DxgkDdiGetGpuPartitionInfo.c)
 * Callees:
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C0230A00 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 *     ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C0232644 (-DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetGpuPartitionInfo(
        ADAPTER_RENDER *a1,
        int a2,
        struct _DXGKARG_GETGPUPARTITIONINFO *a3,
        __int64 a4)
{
  __int64 v6; // rbx
  USHORT *pGpuPartitionOptions; // rdx
  __int64 v9; // r9
  int CurrentGpuPartitionCount; // ecx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  if ( a2 == 1 )
  {
    if ( !a3->NumGpuPartitionOptions )
      return 3221225507LL;
    if ( *((_QWORD *)a1 + 205)
      || (LOBYTE(a4) = 1,
          v16 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4360LL),
          LODWORD(v6) = ADAPTER_RENDER::SetGpuPartitionCount(a1, 1LL, &v16, a4),
          (int)v6 >= 0) )
    {
      a3->CurrentGpuPartitionCount = *(_WORD *)(*((_QWORD *)a1 + 205) + 12LL);
      pGpuPartitionOptions = a3->pGpuPartitionOptions;
      a3->NumGpuPartitionOptions = 1;
      *pGpuPartitionOptions = *(_WORD *)(*((_QWORD *)a1 + 2) + 4360LL);
    }
  }
  else
  {
    LODWORD(v6) = ADAPTER_RENDER::DdiGetGpuPartitionInfo(a1, a3);
    if ( (int)v6 >= 0 )
    {
      CurrentGpuPartitionCount = a3->CurrentGpuPartitionCount;
      if ( (_WORD)CurrentGpuPartitionCount )
      {
        v11 = *((_QWORD *)a1 + 204);
        if ( !v11 || *(_DWORD *)(v11 + 12) != CurrentGpuPartitionCount )
        {
          v16 = a3->CurrentGpuPartitionCount;
          LOBYTE(v9) = 1;
          v12 = ADAPTER_RENDER::SetGpuPartitionCount(a1, 0LL, &v16, v9);
          v6 = v12;
          if ( v12 < 0 )
          {
            v15 = WdLogNewEntry5_WdError(v14, v13);
            *(_QWORD *)(v15 + 24) = v6;
            WdLogEvent5_WdError(v15);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
