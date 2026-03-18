/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0086DB4
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A500 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00059B0 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024310 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007EA50 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchFlushDevice @ 0x1C0080520 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v6; // bl
  __int64 v8; // r15
  __int64 v9; // rdx
  VIDMM_DEVICE *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  _QWORD v26[2]; // [rsp+38h] [rbp-71h] BYREF
  __int128 v27; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v28[18]; // [rsp+58h] [rbp-51h] BYREF

  v6 = (char)a4.0;
  v8 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 312));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 312), v9);
  v10 = (VIDMM_DEVICE *)a2[1];
  a2[24] = (__int64 *)a5;
  VIDMM_DEVICE::EnsureSchedulable(v10, 0LL, v11);
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0p_EtwWriteTransfer(v12, &EventTerminateAllocation, v13, a2);
  v14 = **a2;
  v15 = *(_QWORD *)(v14 + 16);
  if ( (**(_DWORD **)(v14 + 496) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1938);
    *((_QWORD *)this + 970) += v15;
  }
  else
  {
    ++*((_DWORD *)this + 1942);
    *((_QWORD *)this + 972) += v15;
  }
  v26[0] = 1LL;
  v26[1] = a2;
  memset(v28, 0, 0x88uLL);
  v28[6] = v26;
  LODWORD(v28[0]) = (v6 & 1) == 0 || (**(_DWORD **)(v8 + 496) & 0x4000) != 0;
  v17 = a2[1][4];
  v18 = VidSchSubmitDeviceCommand(v17, (__int64)v28, v16);
  v21 = v18;
  if ( v18 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19);
    *(_QWORD *)(v22 + 24) = v21;
    WdLogEvent5_WdWarning(v22);
    v27 = 0LL;
    LODWORD(v27) = 5;
    VidSchFlushDevice(v17, (int *)&v27, v23, v24);
    LODWORD(v28[0]) = 0;
    VidSchSubmitDeviceCommand(v17, (__int64)v28, v25);
  }
}
