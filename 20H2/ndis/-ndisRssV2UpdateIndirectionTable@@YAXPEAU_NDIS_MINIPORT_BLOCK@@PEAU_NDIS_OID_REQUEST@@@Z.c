/*
 * XREFs of ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0088EA0
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B0198 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077D30 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_dddD @ 0x1C008A00C (WPP_RECORDER_SF_dddD_ea_1C008A00C.c)
 *     WPP_RECORDER_SF_dddDL @ 0x1C008A108 (WPP_RECORDER_SF_dddDL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C008A228 (WPP_RECORDER_SF_dddd_ea_1C008A228.c)
 */

void __fastcall ndisRssV2UpdateIndirectionTable(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  char *InformationBuffer; // rax
  int v3; // r8d
  _NDIS_RECEIVE_SCALE_PARAMETERS *Next; // rbx
  struct _NDIS_MINIPORT_BLOCK *v5; // r13
  char *v6; // rdi
  unsigned __int16 v7; // ax
  char v8; // si
  __int64 v9; // r14
  unsigned int v10; // r10d
  int v11; // r11d
  int v12; // r15d
  __int64 v13; // r12
  int v14; // r10d
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rax
  char v16; // r10
  char v17; // al
  unsigned int v18; // eax
  int v19; // [rsp+20h] [rbp-58h]
  char v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+50h] [rbp-28h]
  _BYTE v22[12]; // [rsp+54h] [rbp-24h]
  __int128 v23; // [rsp+60h] [rbp-18h]
  unsigned __int16 v25; // [rsp+C8h] [rbp+50h]
  _PROCESSOR_NUMBER v26; // [rsp+D0h] [rbp+58h]
  int v27; // [rsp+D8h] [rbp+60h]

  InformationBuffer = (char *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v3 = -1;
  *(_DWORD *)&v22[8] = 0;
  v21 = -1;
  Next = 0LL;
  v5 = 0LL;
  v6 = &InformationBuffer[*((unsigned int *)InformationBuffer + 3)];
  *(_QWORD *)v22 = *((unsigned int *)InformationBuffer + 4);
  v7 = 0;
  v25 = 0;
  if ( *(_DWORD *)v22 )
  {
    v8 = 0;
    do
    {
      v9 = 3LL * v7;
      v10 = *(_DWORD *)&v6[24 * v7 + 4];
      v11 = *(_DWORD *)&v6[24 * v7 + 20];
      v12 = *(_DWORD *)&v6[24 * v7 + 8];
      v13 = *(unsigned __int16 *)&v6[24 * v7 + 12];
      v26 = *(_PROCESSOR_NUMBER *)&v6[24 * v7 + 14];
      v26.Reserved = 0;
      v27 = v11;
      if ( v10 != v3 )
      {
        if ( v10 )
        {
          v21 = *(_DWORD *)&v6[24 * v7 + 4];
          VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, v10);
          *(_QWORD *)&v22[4] = VPortByVPortIdInternal;
          if ( VPortByVPortIdInternal )
          {
            Next = (_NDIS_RECEIVE_SCALE_PARAMETERS *)VPortByVPortIdInternal->SingleWorkItems[2].Next;
          }
          else
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_dddD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, v3, 15, v19, v16, v8, v13, v12);
              v11 = v27;
            }
            Next = 0LL;
          }
        }
        else
        {
          if ( !v5 )
          {
            v5 = ndisIovFindVPortByVPortIdInternal(a1, 0);
            if ( !v5 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_dddD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (_DWORD)a2,
                v3,
                v14 + 14,
                v19,
                (unsigned __int8)a2 & v20,
                v8,
                v13,
                v12);
              v11 = v27;
            }
          }
          Next = a1->CombinedNdisRSSParameters;
        }
      }
      if ( v11 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddDL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (_DWORD)a2,
            v3,
            18,
            v19,
            *(_DWORD *)&v6[8 * v9 + 4],
            v8,
            v13,
            v12,
            v11);
      }
      else
      {
        v17 = v12 & 1;
        if ( Next || v17 )
        {
          if ( (v12 & 2) != 0 )
          {
            Next->DefaultProcessorNumber = v26;
          }
          else if ( v17 )
          {
            *((_QWORD *)&v23 + 1) = v26.Group;
            *(_QWORD *)&v23 = 1LL << v26.Number;
            if ( *(_DWORD *)&v6[8 * v9 + 4] )
            {
              if ( *(_QWORD *)&v22[4] )
                *(_OWORD *)(*(_QWORD *)&v22[4] + 664LL) = v23;
            }
            else if ( v5 )
            {
              *(_OWORD *)&v5->EthRxCompleteHandler = v23;
            }
          }
          else
          {
            v18 = Next->IndirectionTableSize >> 2;
            if ( (unsigned int)v13 >= v18 )
            {
              a2 = (struct _NDIS_OID_REQUEST *)&WPP_RECORDER_INITIALIZED;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dddd(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (unsigned int)&WPP_RECORDER_INITIALIZED,
                  1,
                  0,
                  v19,
                  *(_DWORD *)&v6[8 * v9 + 4],
                  v8,
                  v13,
                  v18);
              *(_DWORD *)&v6[8 * v9 + 20] = -1073741811;
            }
            else
            {
              *(_PROCESSOR_NUMBER *)((char *)&Next->Header + 4 * v13 + Next->IndirectionTableOffset) = v26;
            }
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_dddDL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (_DWORD)a2,
            1,
            16,
            v19,
            *(_DWORD *)&v6[8 * v9 + 4],
            v8,
            v13,
            v12,
            0);
        }
      }
      v3 = v21;
      v7 = ++v25;
      v8 = v25;
    }
    while ( (unsigned int)v25 < *(_DWORD *)v22 );
  }
}
