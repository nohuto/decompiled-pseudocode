/*
 * XREFs of ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095820
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00918B0 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B584 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisXlateRemoveWolPatternToPacketPatternOid(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  _SINGLE_LIST_ENTRY *OidSourceHandle; // r9
  _SINGLE_LIST_ENTRY *Next; // rax
  char v11; // dl
  _SINGLE_LIST_ENTRY *v12; // rcx
  _SINGLE_LIST_ENTRY *v13; // rax
  _SINGLE_LIST_ENTRY *v14; // rsi
  UINT v15; // r12d
  _DWORD *v16; // rax
  _DWORD *v17; // r14
  unsigned int v18; // ecx
  __int64 Next_high; // rdx
  _DWORD *v20; // rax
  unsigned int v21; // ecx

  v3 = 0;
  *a3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x72u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        a2);
    goto LABEL_4;
  }
  *(_OWORD *)PoolWithTag = 0LL;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *(_DWORD *)PoolWithTag = a2->DATA.QUERY_INFORMATION.Oid;
  PoolWithTag[1] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *((_DWORD *)PoolWithTag + 4) = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
  {
    Next = a1->WOLPatternList.Next;
    v11 = 1;
  }
  else
  {
    Next = a1->PatternList.Next;
    v11 = 0;
  }
  if ( !Next )
    goto LABEL_26;
  do
  {
    v12 = Next;
    if ( LODWORD(Next[5].Next) == *(_DWORD *)&a2->NdisReserved[80] )
      break;
    Next = Next->Next;
    v12 = 0LL;
  }
  while ( Next );
  if ( !v12 )
    goto LABEL_26;
  v13 = v12 + 1;
  if ( v12 == (_SINGLE_LIST_ENTRY *)-8LL )
    goto LABEL_26;
  do
  {
    v14 = v13 - 1;
    if ( v13[2].Next == OidSourceHandle )
      break;
    v13 = v13->Next;
    v14 = 0LL;
  }
  while ( v13 );
  if ( !v14 )
    goto LABEL_26;
  if ( !v11 )
  {
    v15 = LODWORD(v14[7].Next) + 24 + LODWORD(v14[8].Next);
    v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x7877444Eu);
    v17 = v20;
    if ( !v20 )
      goto LABEL_21;
    memset(v20, 0, v15);
    *v17 = v14[6].Next;
    v21 = (unsigned int)v14[7].Next;
    v17[2] = v21;
    v17[3] = v21 + 24;
    v17[4] = v14[8].Next;
    memmove(v17 + 6, &v14[9], v21);
    Next_high = HIDWORD(v14[7].Next);
    goto LABEL_25;
  }
  if ( HIDWORD(v14[7].Next) != 1 )
  {
LABEL_26:
    ExFreePoolWithTag(v8, 0);
    v3 = -1073676267;
    goto LABEL_27;
  }
  v15 = HIDWORD(v14[27].Next) + 24 + HIDWORD(v14[26].Next);
  v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x7877444Eu);
  v17 = v16;
  if ( !v16 )
  {
LABEL_21:
    ExFreePoolWithTag(v8, 0);
LABEL_4:
    v3 = -1073741670;
LABEL_27:
    *a3 = 1;
    return v3;
  }
  memset(v16, 0, v15);
  *v17 = v14[7].Next;
  v18 = HIDWORD(v14[26].Next);
  v17[2] = v18;
  v17[3] = v18 + 24;
  v17[4] = HIDWORD(v14[27].Next);
  memmove(v17 + 6, (char *)&v14[6] + LODWORD(v14[26].Next), v18);
  Next_high = LODWORD(v14[27].Next);
LABEL_25:
  memmove((char *)v17 + (unsigned int)v17[3], (char *)&v14[6] + Next_high, (unsigned int)v17[4]);
  v8[3] = v17;
  a2->DATA.QUERY_INFORMATION.Oid = -50265852;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = v17;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = v15;
  *(_QWORD *)&a2->NdisReserved[72] = v8;
  return v3;
}
