/*
 * XREFs of ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007F7D0
 * Callers:
 *     VidMmTerminateAllocation @ 0x1C0006010 (VidMmTerminateAllocation.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006030 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00060DC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C0006140 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023FCC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00803E0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchFlushDevice @ 0x1C0081F00 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v5; // bl
  __int64 v8; // rbp
  __int64 v9; // rdx
  VIDMM_DEVICE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r8
  _QWORD v23[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-A8h]
  _QWORD v25[19]; // [rsp+50h] [rbp-98h] BYREF

  v5 = (char)a4.0;
  v8 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 312));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 312), v9);
  v10 = (VIDMM_DEVICE *)a2[1];
  a2[26] = (__int64 *)a5;
  VIDMM_DEVICE::EnsureSchedulable(v10, 0);
  while ( *((_DWORD *)a2 + 44) )
    KeWaitForSingleObject(a2 + 23, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0p_EtwWriteTransfer(v11, &EventTerminateAllocation, v12, a2);
  v13 = **a2;
  v14 = *(_QWORD *)(v13 + 16);
  if ( (**(_DWORD **)(v13 + 512) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1938);
    *((_QWORD *)this + 970) += v14;
  }
  else
  {
    ++*((_DWORD *)this + 1942);
    *((_QWORD *)this + 972) += v14;
  }
  v23[0] = 1LL;
  v23[1] = a2;
  memset(v25, 0, 0x88uLL);
  v25[6] = v23;
  LODWORD(v25[0]) = (v5 & 1) == 0 || (**(_DWORD **)(v8 + 512) & 0x4000) != 0;
  v16 = a2[1][4];
  v17 = VidSchSubmitDeviceCommand(v16, (__int64)v25, v15);
  v20 = v17;
  if ( v17 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdWarning(v21);
    v24 = 0LL;
    LODWORD(v24) = 5;
    VidSchFlushDevice(v16);
    LODWORD(v25[0]) = 0;
    VidSchSubmitDeviceCommand(v16, (__int64)v25, v22);
  }
}
