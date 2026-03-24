/*
 * XREFs of ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x1C0247CDC
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C02775CC (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C00418FC (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
        struct VMBCHANNEL__ **this,
        const struct _DXGSHAREDALLOCOBJECT *a2,
        int a3,
        void *a4,
        unsigned int a5,
        struct DXGKVMB_GUEST_TRANSACTION *a6)
{
  __int64 v7; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  _QWORD **v11; // r14
  unsigned int v12; // eax
  _QWORD *i; // rcx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  char *v17; // rax
  char *v18; // rdi
  struct DXGKVMB_COMMAND_BASE *v20; // r15
  int v21; // r10d
  struct _MDL *v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  char *v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // eax
  _QWORD *j; // rsi
  char *v31; // rdi
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // [rsp+20h] [rbp-48h]
  ADAPTER_RENDER *v39; // [rsp+28h] [rbp-40h]
  __int64 v40; // [rsp+78h] [rbp+10h]

  v7 = *((_QWORD *)a2 + 2);
  v38 = *((_QWORD *)a2 + 3);
  v40 = *((_QWORD *)a2 + 4);
  v9 = *(_DWORD *)(v7 + 128) + 92;
  if ( *(_DWORD *)(v7 + 128) >= 0xFFFFFFA4 )
    return 2147483653LL;
  v10 = v9 + *(_DWORD *)(v7 + 112);
  if ( v10 < v9 )
    return 2147483653LL;
  v11 = (_QWORD **)(v7 + 136);
  v12 = 0;
  for ( i = *(_QWORD **)(v7 + 136); i != v11; i = (_QWORD *)*i )
  {
    v14 = v12 + 56;
    if ( v12 + 56 < v12 )
      return 2147483653LL;
    v12 = v14 + *((_DWORD *)i - 2);
    if ( v12 < v14 )
      return 2147483653LL;
  }
  v15 = v12 + v10;
  if ( v12 + v10 < v10 )
    return 2147483653LL;
  v16 = v15 + 8;
  if ( v15 + 8 < v15 )
    return 2147483653LL;
  v17 = (char *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
  v18 = v17;
  if ( !v17 )
    return 3221225495LL;
  memset(v17, 0, v16);
  v20 = (struct DXGKVMB_COMMAND_BASE *)v18;
  v21 = *(_DWORD *)(v7 + 132);
  v22 = (struct _MDL *)*(unsigned int *)(v7 + 112);
  v23 = *(unsigned int *)(v7 + 128);
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 80) + 16LL);
  v39 = *(ADAPTER_RENDER **)(v7 + 80);
  v25 = *((_QWORD *)a6 + 2);
  *(_QWORD *)v18 = 0LL;
  *((_DWORD *)v18 + 2) = 0;
  *((_DWORD *)v18 + 3) = 2;
  *((_DWORD *)v18 + 4) = 5;
  *((_QWORD *)v18 + 3) = *(_QWORD *)(v24 + 316);
  *((_QWORD *)v18 + 5) = a4;
  *((_DWORD *)v18 + 12) = a5;
  *((_QWORD *)v18 + 4) = v25;
  v26 = v18 + 80;
  *((_DWORD *)v18 + 14) = v40 != 0 ? a3 : 0;
  *((_DWORD *)v18 + 13) = a3;
  *((_DWORD *)v18 + 16) = v23;
  *((_DWORD *)v18 + 15) = v38 != 0 ? a3 : 0;
  *((_DWORD *)v18 + 17) = (_DWORD)v22;
  *((_DWORD *)v18 + 18) = v21;
  v27 = v18 + 92;
  *v26 = *(_DWORD *)(v7 + 12);
  v26[1] = *(_DWORD *)(v7 + 128);
  v26[2] = *(_DWORD *)(v7 + 112);
  v28 = *(_DWORD *)(v7 + 128);
  if ( v28 )
  {
    memmove(v27, *(const void **)(v7 + 120), v28);
    v27 += *(unsigned int *)(v7 + 128);
  }
  v29 = *(_DWORD *)(v7 + 112);
  if ( v29 )
  {
    memmove(v27, *(const void **)(v7 + 104), v29);
    v27 += *(unsigned int *)(v7 + 112);
  }
  for ( j = *v11; j != v11; v27 = &v31[v32] )
  {
    *(_DWORD *)v27 = *((_DWORD *)j - 11);
    *((_DWORD *)v27 + 1) = *((_DWORD *)j - 2);
    *((_QWORD *)v27 + 1) = *(j - 4);
    ADAPTER_RENDER::DdiDescribeAllocation(v39, (struct _DXGKARG_DESCRIBEALLOCATION *)(v27 + 8), v23);
    *((_QWORD *)v27 + 1) = 0LL;
    v31 = v27 + 56;
    memmove(v31, (const void *)*(j - 2), *((unsigned int *)j - 2));
    v32 = *((unsigned int *)j - 2);
    j = (_QWORD *)*j;
  }
  *(_QWORD *)v27 = 0LL;
  v33 = VmBusSendAsyncMessage(*this, v20, v16, v22);
  v36 = v33;
  if ( v33 < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v37 + 24) = v36;
    WdLogEvent5_WdError(v37);
  }
  operator delete[](v20);
  return (unsigned int)v36;
}
