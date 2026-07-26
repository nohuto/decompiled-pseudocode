/*
 * XREFs of ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0038124
 * Callers:
 *     ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0037E00 (-ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00382D4 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0038304 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisPcwAddCyclesToCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K1@Z @ 0x1C008F248 (-ndisPcwAddCyclesToCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K1@Z.c)
 */

void __fastcall ndisPostSetMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  _NDIS_RECEIVE_SCALE_PARAMETERS *RssParametersBuffer; // r9
  _DWORD *InformationBuffer; // rbx
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // edx
  unsigned int Number; // ecx
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v17; // [rsp+50h] [rbp-28h]
  KIRQL NewIrql; // [rsp+90h] [rbp+18h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Du,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !a3 && ndisShouldCacheRSSParameters(a2) )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    RssParametersBuffer = (_NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
    a1->CombinedNdisRSSParameters = RssParametersBuffer;
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v8 = InformationBuffer[4] + *((unsigned __int16 *)InformationBuffer + 6);
    if ( *((_BYTE *)InformationBuffer + 1) < 2u )
      v9 = 0;
    else
      v9 = InformationBuffer[7] + InformationBuffer[8] * InformationBuffer[9];
    if ( v8 <= InformationBuffer[6] + (unsigned int)*((unsigned __int16 *)InformationBuffer + 10) )
      v8 = InformationBuffer[6] + *((unsigned __int16 *)InformationBuffer + 10);
    if ( v8 > v9 )
      v9 = v8;
    if ( v9 > 0x394 )
      v9 = 916;
    if ( v9 )
      memmove(RssParametersBuffer, a2->DATA.QUERY_INFORMATION.InformationBuffer, v9);
    v10 = *((_WORD *)InformationBuffer + 2);
    if ( (v10 & 0x10) != 0 || !*((_BYTE *)InformationBuffer + 8) )
    {
      a1->CombinedNdisRSSParameters = 0LL;
    }
    else if ( (v10 & 4) == 0 )
    {
      NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)&v14, a1);
      if ( (v15 & 0x800) != 0 )
      {
        Number = v17;
        if ( v17 == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v17 = Number;
        }
        v11 = ndisPcwOffsetToPerCpuData;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v14 + ndisPcwPerCpuDataStride * Number + 88);
      }
      if ( (v16 & 0x800) != 0 )
        ndisPcwAddCyclesToCycleCounter((struct NDIS_PCW_CONTEXT *)&v14, v11, 0x800uLL, *(_QWORD *)&a2->NdisReserved[72]);
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = a3;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Eu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      v13);
  }
}
