/*
 * XREFs of NdisInitializeWrapper @ 0x1C00C1510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

void __stdcall NdisInitializeWrapper(
        PNDIS_HANDLE NdisWrapperHandle,
        PVOID SystemSpecific1,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 v7; // rbp
  PVOID *PoolWithTag; // rax
  PVOID *v9; // rbx
  unsigned int v10; // r9d

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_0fef68400514361fc2e9d0d9865d24cd_Traceguids);
  *NdisWrapperHandle = 0LL;
  v7 = *(unsigned __int16 *)SystemSpecific2;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v7 + 26, 0x6877444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *NdisWrapperHandle = PoolWithTag;
    memset(PoolWithTag, 0, v7 + 26);
    *v9 = SystemSpecific1;
    v9[2] = v9 + 3;
    v10 = *(unsigned __int16 *)SystemSpecific2;
    *((_WORD *)v9 + 4) = v10;
    *((_WORD *)v9 + 5) = v10 + 2;
    memmove(v9 + 3, *((const void **)SystemSpecific2 + 1), v10);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_0fef68400514361fc2e9d0d9865d24cd_Traceguids);
}
