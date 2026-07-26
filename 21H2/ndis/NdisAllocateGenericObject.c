/*
 * XREFs of NdisAllocateGenericObject @ 0x1C0037570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLLq @ 0x1C003768C (WPP_RECORDER_SF_qLLq_ea_1C003768C.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  __int64 v3; // rsi
  struct _NDIS_GENERIC_OBJECT *PoolWithTag; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct _NDIS_GENERIC_OBJECT *v10; // rbx
  int v12; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v3 = Size;
  if ( traceInited && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Tag,
      21,
      137,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)DriverObject,
      Tag,
      Size);
  if ( (unsigned __int16)v3 >= 0xFFE0u )
    return 0LL;
  PoolWithTag = (struct _NDIS_GENERIC_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(v3 + 32), Tag);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3 + 4);
    v10->CallersCaller = 0LL;
    v10->Caller = retaddr;
    *(_WORD *)&v10->Header.Type = 257;
    v10->Header.Size = v3 + 32;
    v10->DriverObject = DriverObject;
  }
  if ( traceInited )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, v8, v9, v12, (char)DriverObject, Tag, v3, (char)v10);
  }
  return v10;
}
