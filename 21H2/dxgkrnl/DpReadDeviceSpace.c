/*
 * XREFs of DpReadDeviceSpace @ 0x1C0021260
 * Callers:
 *     ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0235990 (-ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0238184 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpReadDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64, void *); // r11
  ULONG BusDataByOffset; // eax
  __int64 v11; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD, void *, _QWORD, _QWORD); // rax
  __int64 v16; // rax

  v6 = 0;
  if ( !a1 )
    goto LABEL_16;
  if ( !a3 )
    goto LABEL_16;
  if ( !a6 )
    goto LABEL_16;
  *a6 = 0;
  a1 = *(_QWORD *)(a1 + 64);
  if ( !a1 )
    goto LABEL_16;
  if ( *(_DWORD *)(a1 + 16) != 1953656900 )
    goto LABEL_16;
  v8 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)(v8 - 2) > 1 || (_DWORD)a2 && (_DWORD)a2 != 1382638416 && (unsigned int)a2 + 0x80000000 > 1 )
    goto LABEL_16;
  if ( (_DWORD)a2 == -2147483647 )
  {
    if ( (_DWORD)v8 != 2 )
    {
LABEL_16:
      v13 = -1073741811LL;
LABEL_17:
      v6 = v13;
      v14 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdError(v14);
      return v6;
    }
    if ( (*(_DWORD *)(a1 + 3980) & 4) == 0 )
    {
      v13 = -1071774661LL;
      goto LABEL_17;
    }
    v15 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(a1 + 2952);
    if ( v15 )
    {
      BusDataByOffset = v15(*(_QWORD *)(a1 + 2928), a3, Offset, Length);
      goto LABEL_12;
    }
LABEL_23:
    v6 = -1073741823;
    v16 = WdLogNewEntry5_WdWarning(a1, a2, v8);
    *(_QWORD *)(v16 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v16);
    return v6;
  }
  if ( (_DWORD)a2 == 0x80000000 )
  {
    BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
    goto LABEL_12;
  }
  v9 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(a1 + 616);
  if ( !v9 )
    goto LABEL_23;
  BusDataByOffset = v9(*(_QWORD *)(a1 + 568), a2, a3);
LABEL_12:
  *a6 = BusDataByOffset;
  v11 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v11 + 24) = *a6;
  WdLogEvent5_WdEvent(v11);
  return v6;
}
