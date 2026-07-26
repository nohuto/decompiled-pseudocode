/*
 * XREFs of ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C009B068
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0070A68 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01389C8 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0015590 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002D040 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z @ 0x1C002FD6C (-ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009AAB4 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C009F2D8 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        unsigned __int8 a3)
{
  struct _NDIS_OID_REQUEST *v3; // rsi
  int v4; // r15d
  unsigned int v6; // r12d
  unsigned int v8; // ebx
  char v9; // r14
  bool v10; // al
  struct _NDIS_OID_REQUEST *v11; // rax
  int v12; // eax
  _LIST_ENTRY *NdisReserved; // rcx
  _LIST_ENTRY *Blink; // rax
  _NDIS_MEDIUM MediaType; // eax
  struct _NDIS_OID_REQUEST *v16; // rax
  struct _NDIS_OID_REQUEST *v17; // rbx
  int v18; // eax
  _LIST_ENTRY *v19; // rax
  _LIST_ENTRY *v20; // rbx
  _NDIS_MINIPORT_OFFLOAD *Offload; // r11
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_OFFLOAD *v23; // rcx
  unsigned int HeaderSize; // eax
  __int64 v25; // xmm1_8
  bool v26; // zf
  unsigned int v27; // eax
  unsigned int v28; // eax
  struct _NDIS_OID_REQUEST *v29; // rax
  struct _NDIS_OID_REQUEST *v30; // rbx
  int v31; // eax
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *v33; // rbx
  unsigned int v34; // r15d
  _SINGLE_LIST_ENTRY *i; // rbx
  unsigned int Next; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  struct _NDIS_OID_REQUEST *v40; // rax
  struct _NDIS_OID_REQUEST *v41; // r14
  _LIST_ENTRY *v42; // rax
  int v43; // ecx
  _LIST_ENTRY *v44; // rcx
  _SINGLE_LIST_ENTRY *j; // rbx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  struct _NDIS_OID_REQUEST *v48; // rax
  int v49; // ecx
  UCHAR *v50; // rax
  _LIST_ENTRY *v51; // rcx
  _NDIS_OPEN_BLOCK *k; // rax
  struct _NDIS_OID_REQUEST *v53; // rax
  struct _NDIS_OID_REQUEST *v54; // rbx
  int v55; // eax
  _LIST_ENTRY *v56; // rax
  _LIST_ENTRY *v57; // rbx
  unsigned __int8 v58; // r9
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v60; // rax
  char v62[8]; // [rsp+30h] [rbp-39h]
  __int64 v63; // [rsp+38h] [rbp-31h]
  unsigned __int8 v64; // [rsp+40h] [rbp-29h]
  struct _LIST_ENTRY v65; // [rsp+48h] [rbp-21h] BYREF
  int v66; // [rsp+58h] [rbp-11h] BYREF
  struct _NDIS_OFFLOAD_ENCAPSULATION v67; // [rsp+60h] [rbp-9h] BYREF

  v3 = 0LL;
  v64 = a3;
  v4 = 0;
  v6 = 0;
  v8 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v63) = a3;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Fu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      v63);
    a3 = v64;
  }
  v9 = 1;
  v10 = !a2 && !a3;
  v65.Blink = &v65;
  v65.Flink = &v65;
  if ( !v10 && !a3 )
    goto LABEL_49;
  if ( a1->MediaType == NdisMedium802_3 )
  {
    v66 = -1;
    v11 = ndisMAllocateRequest(a2, 0x1010Eu, NdisRequestSetInformation, &v66, 4u);
    v3 = v11;
    if ( !v11 )
      goto LABEL_89;
    v11->Header.Type = -106;
    v11->Header.Size = 248;
    v11->Header.Revision = 1;
    v12 = *(_DWORD *)&v11->NdisReserved[16] | 2;
    *(_QWORD *)&v3->NdisReserved[32] = a2;
    *(_DWORD *)&v3->NdisReserved[16] = v12;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *(_DWORD *)&v3->NdisReserved[16] |= 0x200u;
      v12 = *(_DWORD *)&v3->NdisReserved[16];
    }
    else
    {
      *(_QWORD *)&v3->NdisReserved[32] = &ndisIntReqRestore;
    }
    NdisReserved = (_LIST_ENTRY *)v3->NdisReserved;
    *(_DWORD *)&v3->NdisReserved[16] = v12 | 0x80000;
    Blink = v65.Blink;
    if ( v65.Blink->Flink != &v65 )
      goto LABEL_86;
    *(_QWORD *)&v3->NdisReserved[8] = v65.Blink;
    NdisReserved->Flink = &v65;
    v6 = 1;
    Blink->Flink = NdisReserved;
    MediaType = a1->MediaType;
    v65.Blink = (_LIST_ENTRY *)v3->NdisReserved;
    if ( MediaType == NdisMedium802_3 )
    {
      v16 = ndisMAllocateRequest(a2, 0x1010103u, NdisRequestSetInformation, 0LL, 0);
      v17 = v16;
      if ( !v16 )
        goto LABEL_78;
      v16->Header.Type = -106;
      v16->Header.Size = 248;
      v16->Header.Revision = 1;
      v18 = *(_DWORD *)&v16->NdisReserved[16] | 2;
      *(_QWORD *)&v17->NdisReserved[32] = a2;
      *(_DWORD *)&v17->NdisReserved[16] = v18;
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2, 6u);
        *(_DWORD *)&v17->NdisReserved[16] |= 0x200u;
        v18 = *(_DWORD *)&v17->NdisReserved[16];
      }
      else
      {
        *(_QWORD *)&v17->NdisReserved[32] = &ndisIntReqRestore;
      }
      *(_DWORD *)&v17->NdisReserved[16] = v18 | 0x80000;
      v3 = v17;
      v19 = v65.Blink;
      v20 = (_LIST_ENTRY *)v17->NdisReserved;
      if ( v65.Blink->Flink != &v65 )
        goto LABEL_86;
      v20->Blink = v65.Blink;
      v20->Flink = &v65;
      v6 = 2;
      v19->Flink = v20;
      v65.Blink = v20;
    }
  }
  Offload = a1->Offload;
  if ( !Offload || Offload->SupportsTopOffload != 1 )
    goto LABEL_49;
  OpenQueue = a1->OpenQueue;
  memset(&v67, 0, sizeof(v67));
  if ( !OpenQueue )
    goto LABEL_37;
  while ( 1 )
  {
    v23 = OpenQueue->Offload;
    if ( !v23 || !v23->AlreadySetEncapsulation )
      goto LABEL_33;
    if ( !v9 )
    {
      v4 = ndisMergeEncapsulations(&v23->SetEncapsulation, &v67);
      if ( v4 )
        goto LABEL_78;
      goto LABEL_33;
    }
    if ( v23->SetEncapsulation.Header.Type != 0xA8
      || !v23->SetEncapsulation.Header.Revision
      || v23->SetEncapsulation.Header.Size < 0x1Cu )
    {
      break;
    }
    v9 = 0;
    HeaderSize = v23->SetEncapsulation.IPv6.HeaderSize;
    v25 = *(_QWORD *)&v23->SetEncapsulation.IPv6.Enabled;
    *(_OWORD *)&v67.Header.Type = *(_OWORD *)&v23->SetEncapsulation.Header.Type;
    v67.IPv6.HeaderSize = HeaderSize;
    *(_QWORD *)&v67.IPv6.Enabled = v25;
LABEL_33:
    OpenQueue = OpenQueue->MiniportNextOpen;
    if ( !OpenQueue )
      goto LABEL_36;
  }
  v4 = -1073741637;
LABEL_36:
  if ( v4 )
    goto LABEL_78;
LABEL_37:
  if ( v67.Header.Type == 0xA8
    || (v26 = Offload->MiniportSetEncapsulation.Header.Type == 0xA8, v67.Header = (_NDIS_OBJECT_HEADER)1835432, !v26)
    || !Offload->MiniportSetEncapsulation.Header.Revision
    || Offload->MiniportSetEncapsulation.Header.Size < 0x1Cu
    || Offload->MiniportSetEncapsulation.IPv4.Enabled == 2 && Offload->MiniportSetEncapsulation.IPv6.Enabled == 2 )
  {
LABEL_49:
    v34 = a1->WakeUpEnable & 5;
    v66 = v34;
    if ( a2 )
    {
      for ( i = a2->PatternList.Next; i; i = i->Next )
      {
        if ( (struct _NDIS_OPEN_BLOCK *)i[3].Next == a2 )
        {
          Next = (unsigned int)i[7].Next;
          v37 = Next + 24;
          if ( Next + 24 < Next )
            goto LABEL_78;
          v38 = (unsigned int)i[8].Next;
          v39 = v38 + v37;
          if ( v39 < v38 )
            goto LABEL_78;
          v40 = ndisMAllocateRequest(a2, 0xFD010104, NdisRequestSetInformation, &i[6], v39);
          v41 = v40;
          if ( !v40 )
            goto LABEL_78;
          v40->Header.Type = -106;
          v40->Header.Revision = 1;
          v40->Header.Size = 248;
          *(_DWORD *)&v40->NdisReserved[16] |= 2u;
          *(_QWORD *)&v40->NdisReserved[32] = a2;
          ndisMReferenceOpen((__int64)a2, 6u);
          v42 = (_LIST_ENTRY *)v41->NdisReserved;
          v43 = *(_DWORD *)&v41->NdisReserved[16] | 0x200;
          *(_DWORD *)&v41->NdisReserved[16] = v43;
          *(_DWORD *)&v41->NdisReserved[16] = v43 & 0xFFFBFFFF;
          v44 = v65.Blink;
          if ( v65.Blink->Flink != &v65 )
            goto LABEL_86;
          *(_QWORD *)&v41->NdisReserved[8] = v65.Blink;
          v42->Flink = &v65;
          ++v6;
          v44->Flink = v42;
          v3 = v41;
          v65.Blink = (_LIST_ENTRY *)v41->NdisReserved;
        }
      }
    }
    else
    {
      for ( j = a1->PatternList.Next; j; j = j->Next )
      {
        if ( LODWORD(j[7].Next) >= 0xFFFFFFE8 )
          goto LABEL_78;
        v46 = (unsigned int)j[8].Next;
        v47 = v46 + LODWORD(j[7].Next) + 24;
        if ( v47 < v46 )
          goto LABEL_78;
        v48 = ndisMAllocateRequest(0LL, 0xFD010103, NdisRequestSetInformation, &j[6], v47);
        if ( !v48 )
          goto LABEL_78;
        v48->Header = (NDIS_OBJECT_HEADER)16253334;
        *(_DWORD *)&v48->NdisReserved[16] |= 2u;
        v3 = v48;
        v49 = *(_DWORD *)&v48->NdisReserved[16];
        *(_QWORD *)&v48->NdisReserved[32] = &ndisIntReqRestore;
        v50 = v48->NdisReserved;
        *((_DWORD *)v50 + 4) = v49 | 0xC0000;
        v51 = v65.Blink;
        if ( v65.Blink->Flink != &v65 )
          goto LABEL_86;
        *((_QWORD *)v50 + 1) = v65.Blink;
        *(_QWORD *)v50 = &v65;
        ++v6;
        v51->Flink = (_LIST_ENTRY *)v50;
        v65.Blink = (_LIST_ENTRY *)v50;
      }
    }
    for ( k = a1->OpenQueue; k; k = k->MiniportNextOpen )
    {
      if ( a2 != k )
      {
        v34 |= k->WakeUpEnable;
        v66 = v34;
      }
    }
    if ( v34 != a1->WakeUpEnable )
    {
      v53 = ndisMAllocateRequest(a2, 0xFD010106, NdisRequestSetInformation, &v66, 4u);
      v54 = v53;
      if ( v53 )
      {
        v53->Header.Type = -106;
        v53->Header.Size = 248;
        v53->Header.Revision = 1;
        v55 = *(_DWORD *)&v53->NdisReserved[16] | 2;
        *(_QWORD *)&v54->NdisReserved[32] = a2;
        *(_DWORD *)&v54->NdisReserved[16] = v55;
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          *(_DWORD *)&v54->NdisReserved[16] |= 0x200u;
          v55 = *(_DWORD *)&v54->NdisReserved[16];
        }
        else
        {
          *(_QWORD *)&v54->NdisReserved[32] = &ndisIntReqRestore;
        }
        *(_DWORD *)&v54->NdisReserved[16] = v55 | 0x80000;
        v3 = v54;
        v56 = v65.Blink;
        v57 = (_LIST_ENTRY *)v54->NdisReserved;
        if ( v65.Blink->Flink != &v65 )
          goto LABEL_86;
        v57->Blink = v65.Blink;
        v57->Flink = &v65;
        ++v6;
        v56->Flink = v57;
        v65.Blink = v57;
      }
    }
    goto LABEL_78;
  }
  v27 = Offload->MiniportSetEncapsulation.IPv4.HeaderSize;
  *(_QWORD *)&v67.IPv4.Enabled = *(_QWORD *)&Offload->MiniportSetEncapsulation.IPv4.Enabled;
  v67.IPv6.EncapsulationType = HIDWORD(*(_QWORD *)&Offload->MiniportSetEncapsulation.IPv6.Enabled);
  v67.IPv6.Enabled = 2;
  v67.IPv4.HeaderSize = v27;
  v28 = Offload->MiniportSetEncapsulation.IPv6.HeaderSize;
  v67.IPv4.Enabled = 2;
  v67.IPv6.HeaderSize = v28;
  v29 = ndisMAllocateRequest(a2, 0x101010Au, NdisRequestSetInformation, &v67, 0x1Cu);
  v30 = v29;
  if ( v29 )
  {
    v29->Header.Type = -106;
    v29->Header.Size = 248;
    v29->Header.Revision = 1;
    v31 = *(_DWORD *)&v29->NdisReserved[16] | 2;
    *(_QWORD *)&v30->NdisReserved[32] = a2;
    *(_DWORD *)&v30->NdisReserved[16] = v31;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *(_DWORD *)&v30->NdisReserved[16] |= 0x200u;
      v31 = *(_DWORD *)&v30->NdisReserved[16];
    }
    else
    {
      *(_QWORD *)&v30->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v30->NdisReserved[16] = v31 | 0x80000;
    v3 = v30;
    v32 = v65.Blink;
    v33 = (_LIST_ENTRY *)v30->NdisReserved;
    if ( v65.Blink->Flink == &v65 )
    {
      v33->Blink = v65.Blink;
      v33->Flink = &v65;
      ++v6;
      v32->Flink = v33;
      v65.Blink = v33;
      goto LABEL_49;
    }
LABEL_86:
    __fastfail(3u);
  }
LABEL_78:
  if ( v3 )
  {
    v58 = v64;
    if ( v64 )
    {
      *(_DWORD *)&v3->NdisReserved[16] |= 0x100u;
      a1->Flags |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v65, v6, v58) != 259 )
    {
      while ( 1 )
      {
        Flink = v65.Flink;
        if ( v65.Flink == &v65 )
          goto LABEL_88;
        if ( v65.Flink->Blink != &v65 )
          goto LABEL_86;
        v60 = v65.Flink->Flink;
        if ( v65.Flink->Flink->Blink != v65.Flink )
          goto LABEL_86;
        v65.Flink = v65.Flink->Flink;
        v60->Blink = &v65;
        ExFreePoolWithTag(&Flink[-5].Blink, 0);
      }
    }
    v8 = 0;
  }
  else
  {
LABEL_88:
    v8 = -1073741823;
  }
LABEL_89:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v62 = v8;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x40u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      *(_QWORD *)v62);
  }
  return v8;
}
