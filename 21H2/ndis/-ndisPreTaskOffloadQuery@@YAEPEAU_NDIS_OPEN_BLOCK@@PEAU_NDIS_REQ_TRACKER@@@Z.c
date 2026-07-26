/*
 * XREFs of ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E4E8
 * Callers:
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E000 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009A32C (-ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A7E0 (-ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreTaskOffloadQuery(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_REQ_TRACKER *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rsi
  char v4; // r12
  __int64 v5; // rax
  struct _NDIS_MINIPORT_BLOCK **v6; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  _DWORD *v8; // r14
  _DWORD *InformationBuffer; // rcx
  UINT TaskBytes; // r15d
  KIRQL v12; // dl
  __int64 v13; // [rsp+40h] [rbp-38h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h] BYREF

  v2 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a2 + 4);
  NewIrql = 0;
  v4 = (char)a1;
  v5 = *((_QWORD *)a2 + 2);
  v6 = (struct _NDIS_MINIPORT_BLOCK **)(v5 + 32);
  if ( !v5 )
    v6 = (struct _NDIS_MINIPORT_BLOCK **)a2;
  v7 = *v6;
  v8 = (_DWORD *)((char *)a2 + 40);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB2u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v7,
      (char)a1,
      1,
      *v8);
  if ( !v7->Offload )
  {
    *v8 = -1073741637;
    goto LABEL_17;
  }
  if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength < 0x1C )
  {
    *((_DWORD *)a2 + 10) = -1073676266;
    v2->DATA.QUERY_INFORMATION.BytesNeeded = ndisGetTaskBytes(v7);
    goto LABEL_17;
  }
  InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( *InformationBuffer != 1
    || InformationBuffer[1] != 28
    || InformationBuffer[4] != 2
    || (InformationBuffer[5] & 1) == 0
    || InformationBuffer[6] != 14 )
  {
    goto LABEL_16;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
  TaskBytes = ndisGetTaskBytes(v7);
  if ( TaskBytes == 28 )
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, NewIrql);
LABEL_16:
    *((_DWORD *)a2 + 10) = -1073741637;
    goto LABEL_17;
  }
  if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= TaskBytes )
  {
    ndisFillOffloadCapsInTasks(v7, v2);
    v12 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v12);
    *((_DWORD *)a2 + 10) = 0;
  }
  else
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, NewIrql);
    *((_DWORD *)a2 + 10) = -1073676266;
    v2->DATA.QUERY_INFORMATION.BytesNeeded = TaskBytes;
  }
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = *v8;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB3u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v7,
      v4,
      1,
      v13);
  }
  return 1;
}
