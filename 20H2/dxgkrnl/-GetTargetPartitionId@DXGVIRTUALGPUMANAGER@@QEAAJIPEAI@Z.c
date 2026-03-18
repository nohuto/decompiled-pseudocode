/*
 * XREFs of ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C022EFB4
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0234440 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0235660 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER::GetTargetPartitionId(
        DXGVIRTUALGPUMANAGER *this,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 v3; // rbx
  DXGVIRTUALGPUMANAGER *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax

  v3 = a2;
  v4 = this;
  v5 = *((unsigned int *)this + 3);
  if ( (_DWORD)v3 == 0xFFFF )
  {
    v3 = 0LL;
    if ( (_DWORD)v5 )
    {
      this = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 3);
      do
      {
        if ( !*((_QWORD *)this + v3) )
          break;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < (unsigned int)v5 );
    }
    if ( (_DWORD)v3 == (_DWORD)v5 )
    {
      v8 = WdLogNewEntry5_WdEvent(this, v5);
      *(_QWORD *)(v8 + 24) = 1847LL;
      WdLogEvent5_WdEvent(v8);
      return 2147483674LL;
    }
  }
  else if ( (unsigned int)v3 >= (unsigned int)v5 )
  {
    v6 = WdLogNewEntry5_WdError(this, v5);
    *(_QWORD *)(v6 + 24) = v3;
    *(_QWORD *)(v6 + 32) = *((unsigned int *)v4 + 3);
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  *a3 = v3;
  return 0LL;
}
