/*
 * XREFs of ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C003BAE4
 * Callers:
 *     NdisMMapIoSpace @ 0x1C003B8A0 (NdisMMapIoSpace.c)
 *     NdisMRegisterIoPortRange @ 0x1C00610A0 (NdisMRegisterIoPortRange.c)
 *     ndisImmediateReadWritePort @ 0x1C00BD800 (ndisImmediateReadWritePort.c)
 *     ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1C00BD970 (-ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z.c)
 *     NdisMRegisterInterrupt @ 0x1C00C1E70 (NdisMRegisterInterrupt.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisTranslateResources(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        union _LARGE_INTEGER a3,
        union _LARGE_INTEGER *a4,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR **a5)
{
  unsigned int v9; // edi
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rcx
  unsigned int Count; // r12d
  _CM_PARTIAL_RESOURCE_LIST *p_PartialResourceList; // r11
  _CM_PARTIAL_RESOURCE_LIST *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed_type_u> *p_u; // r8
  signed __int64 v18; // r14
  LONGLONG v19; // rax
  __int64 v21; // [rsp+30h] [rbp-38h]

  v9 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      (char)a1,
      a2);
  AllocatedResources = a1->AllocatedResources;
  if ( !AllocatedResources )
    goto LABEL_18;
  AllocatedResourcesTranslated = a1->AllocatedResourcesTranslated;
  if ( !AllocatedResourcesTranslated )
    goto LABEL_18;
  Count = AllocatedResources->List[0].PartialResourceList.Count;
  p_PartialResourceList = &AllocatedResourcesTranslated->List[0].PartialResourceList;
  v14 = &AllocatedResources->List[0].PartialResourceList;
  v15 = 0LL;
  if ( !Count )
    goto LABEL_18;
  v16 = 0LL;
  p_u = &v14->PartialDescriptors[0].u;
  v18 = (char *)p_PartialResourceList - (char *)v14;
  while ( 1 )
  {
    if ( *((unsigned __int8 *)&p_u[-1].Memory48 + 12) != a2 )
      goto LABEL_21;
    if ( a2 == 1 )
      goto LABEL_11;
    if ( a2 != 2 )
      break;
    if ( a3.QuadPart == p_u->Interrupt.Level )
    {
      a4->QuadPart = *(unsigned __int16 *)((char *)&p_u->Interrupt.Level + v18);
      goto LABEL_14;
    }
LABEL_15:
    if ( !v9 )
      goto LABEL_16;
LABEL_21:
    v15 = (unsigned int)(v15 + 1);
    ++v16;
    p_u = (_CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed_type_u> *)((char *)p_u + 20);
    if ( (unsigned int)v15 >= Count )
      goto LABEL_18;
  }
  if ( a2 == 3 )
  {
LABEL_11:
    v19 = a3.QuadPart - p_u->Generic.Start.QuadPart;
    if ( v19 >= 0 && v19 < (unsigned __int64)p_u->Generic.Length )
    {
      a4->QuadPart = v19 + *(LONGLONG *)((char *)&p_u->Generic.Start.QuadPart + v18);
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  if ( a2 != 4 || a3.QuadPart != p_u->Generic.Start.LowPart )
    goto LABEL_15;
  v9 = 0;
  a4->QuadPart = p_PartialResourceList->PartialDescriptors[v16].u.Generic.Start.LowPart;
LABEL_16:
  if ( a5 )
    *a5 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)p_PartialResourceList->PartialDescriptors + 16 * v15 + 4 * v15);
LABEL_18:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      (char)a1,
      v21);
  }
  return v9;
}
