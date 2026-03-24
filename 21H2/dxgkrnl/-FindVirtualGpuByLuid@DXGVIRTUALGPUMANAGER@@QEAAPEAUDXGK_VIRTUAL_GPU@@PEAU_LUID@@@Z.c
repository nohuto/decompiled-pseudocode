/*
 * XREFs of ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C022F8D4
 * Callers:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C022F898 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(
        struct _KTHREAD **this,
        struct _LUID *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rdx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  char *v6; // rbx
  __int64 v7; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 5, 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v4 = (DXGVIRTUALGPUMANAGER *)(this + 9);
  v11 = 1;
  v5 = this[9];
  if ( v5 == (DXGVIRTUALGPUMANAGER *)(this + 9) )
  {
LABEL_5:
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = a2->HighPart;
    *(_QWORD *)(v7 + 32) = a2->LowPart;
    WdLogEvent5_WdError(v7);
    v6 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v6 = (char *)v5 - 120;
      if ( a2->LowPart == *((_DWORD *)v5 - 23) && a2->HighPart == *((_DWORD *)v6 + 8) )
        break;
      v5 = *(DXGVIRTUALGPUMANAGER **)v5;
      if ( v5 == v4 )
        goto LABEL_5;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return (struct DXGK_VIRTUAL_GPU *)v6;
}
