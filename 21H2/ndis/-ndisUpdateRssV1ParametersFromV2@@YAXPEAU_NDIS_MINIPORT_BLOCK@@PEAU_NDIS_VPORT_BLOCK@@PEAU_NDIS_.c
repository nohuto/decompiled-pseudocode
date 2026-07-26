/*
 * XREFs of ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C0089F5C
 * Callers:
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0088A18 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C0087B90 (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 */

void __fastcall ndisUpdateRssV1ParametersFromV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_VPORT_BLOCK *a2,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS_V2 *a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a5)
{
  int v8; // r8d
  unsigned __int16 v9; // dx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r14
  unsigned __int16 v14; // si
  __int64 v15; // rdx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v16; // rcx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v17; // rax
  __int128 v18; // xmm1
  unsigned int NumberOfProcessorMasks; // ecx
  UCHAR *v20; // rdx
  UCHAR *v21; // rdi
  unsigned int v22; // r9d
  char *v23; // r8
  signed int v24; // edx

  v8 = *((_DWORD *)a4 + 1);
  if ( (v8 & 1) != 0 )
  {
    v9 = ~(_BYTE)v8 & 2 | 8;
    if ( (v8 & 4) != 0 )
      v9 = ~(_BYTE)v8 & 2;
    if ( (v8 & 0x10) == 0 )
      v9 |= 4u;
  }
  else
  {
    v9 = 16;
  }
  a3->Flags = v9;
  v10 = *((_DWORD *)a4 + 1);
  if ( (v10 & 8) != 0 )
  {
    a2->VPortParams.NumQueuePairs = *((_DWORD *)a4 + 5);
    v10 = *((_DWORD *)a4 + 1);
  }
  if ( (v10 & 1) != 0 )
  {
    LOBYTE(v11) = v10;
    if ( (v10 & 2) != 0 )
    {
      a3->HashInformation = *((_DWORD *)a4 + 2);
      v11 = *((_DWORD *)a4 + 1);
    }
    LOBYTE(v10) = v11;
    if ( (v11 & 4) != 0 )
    {
      v12 = *((_DWORD *)a4 + 3);
      if ( v12 )
      {
        memmove(&a3->Header.Type + a3->HashSecretKeyOffset, (char *)a4 + *((unsigned int *)a4 + 4), v12);
        v10 = *((_DWORD *)a4 + 1);
      }
    }
  }
  if ( (v10 & 0x10) != 0 )
  {
    v13 = *((unsigned __int16 *)a4 + 12);
    v14 = a3->IndirectionTableSize >> 2;
    if ( (_WORD)v13 != v14 )
    {
      v15 = 7LL;
      v16 = a5;
      v17 = a3;
      do
      {
        *(_OWORD *)&v16->Header.Type = *(_OWORD *)&v17->Header.Type;
        *(_OWORD *)&v16->IndirectionTableOffset = *(_OWORD *)&v17->IndirectionTableOffset;
        *(_OWORD *)&v16->NumberOfProcessorMasks = *(_OWORD *)&v17->NumberOfProcessorMasks;
        *(_OWORD *)&v16[1].Flags = *(_OWORD *)&v17[1].Flags;
        *(_OWORD *)&v16[1].HashSecretKeySize = *(_OWORD *)&v17[1].HashSecretKeySize;
        *(_OWORD *)&v16[1].ProcessorMasksEntrySize = *(_OWORD *)&v17[1].ProcessorMasksEntrySize;
        *(_OWORD *)&v16[2].HashInformation = *(_OWORD *)&v17[2].HashInformation;
        v16 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v16 + 128);
        v18 = *(_OWORD *)&v17[2].HashSecretKeyOffset;
        v17 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v17 + 128);
        *(_OWORD *)&v16[-1].ProcessorMasksOffset = v18;
        --v15;
      }
      while ( v15 );
      *(_OWORD *)&v16->Header.Type = *(_OWORD *)&v17->Header.Type;
      v16->IndirectionTableOffset = v17->IndirectionTableOffset;
      ndisCreateRssV1Parameters(a3, *((_DWORD *)a4 + 6), a5->NumberOfProcessorMasks);
      a3->Flags = a5->Flags;
      a3->BaseCpuNumber = a5->BaseCpuNumber;
      a3->HashInformation = a5->HashInformation;
      a3->DefaultProcessorNumber = a5->DefaultProcessorNumber;
      if ( a5->HashSecretKeySize )
        memmove(
          &a3->Header.Type + a3->HashSecretKeyOffset,
          &a5->Header.Type + a5->HashSecretKeyOffset,
          a5->HashSecretKeySize);
      NumberOfProcessorMasks = a5->NumberOfProcessorMasks;
      if ( NumberOfProcessorMasks )
        memmove(
          &a3->Header.Type + a3->ProcessorMasksOffset,
          &a5->Header.Type + a5->ProcessorMasksOffset,
          NumberOfProcessorMasks * a5->ProcessorMasksEntrySize);
      if ( (_WORD)v13 )
      {
        v20 = &a5->Header.Type + a5->IndirectionTableOffset;
        v21 = &a3->Header.Type + a3->IndirectionTableOffset;
        if ( v21 <= v20 )
        {
          memmove(v21, v20, 4 * v13);
        }
        else
        {
          memmove(v21, v20, 4LL * v14);
          if ( v14 < (unsigned __int16)v13 )
          {
            v22 = v14;
            v23 = (char *)&v21[4 * v14];
            do
            {
              v24 = v14++ % v22;
              *(_DWORD *)v23 = *(_DWORD *)&v21[4 * v24];
              v23 += 4;
            }
            while ( v14 < (unsigned __int16)v13 );
          }
        }
      }
    }
  }
}
