/*
 * XREFs of ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002F06C
 * Callers:
 *     ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002C0E0 (-ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E578 (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisAllocateOpenOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C002F230 (-ndisAllocateOpenOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z @ 0x1C002FA0C (-ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z.c)
 */

char __fastcall ndisOidPreOpenSetEncapsulation(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // r15
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  char v8; // bl
  _QWORD *InformationBuffer; // r14
  int v10; // r12d
  _NDIS_MINIPORT_OFFLOAD *v11; // rcx
  struct _NDIS_OFFLOAD_ENCAPSULATION *p_TopMergedEncapsulation; // r14
  struct _NDIS_OPEN_BLOCK *i; // r11
  KIRQL v14; // dl
  struct _NDIS_OFFLOAD_ENCAPSULATION *p_SetEncapsulation; // rcx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  MiniportHandle = a1->MiniportHandle;
  NewIrql = 0;
  Offload = MiniportHandle->Offload;
  if ( Offload && Offload->SupportsTopOffload )
  {
    v8 = 1;
    if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength < 0x1C )
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
      *a3 = -1073676268;
    }
    else
    {
      InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      v10 = 0;
      if ( *(_BYTE *)InformationBuffer == 0xA8
        && *((_BYTE *)InformationBuffer + 1)
        && *((_WORD *)InformationBuffer + 1) >= 0x1Cu )
      {
        if ( a1->Offload || (*a3 = ndisAllocateOpenOffload(a1), a1->Offload) )
        {
          v11 = MiniportHandle->Offload;
          if ( *((_DWORD *)InformationBuffer + 1) == v11->TopSetEncapsulation.IPv4.Enabled
            && *((_DWORD *)InformationBuffer + 4) == v11->TopSetEncapsulation.IPv6.Enabled )
          {
            *a3 = 0;
            a2->DATA.QUERY_INFORMATION.BytesWritten = 28;
          }
          else
          {
            *(_OWORD *)&v11->TopMergedEncapsulation.Header.Type = *(_OWORD *)InformationBuffer;
            *(_QWORD *)&v11->TopMergedEncapsulation.IPv6.Enabled = InformationBuffer[2];
            v11->TopMergedEncapsulation.IPv6.HeaderSize = *((_DWORD *)InformationBuffer + 6);
            p_TopMergedEncapsulation = &MiniportHandle->Offload->TopMergedEncapsulation;
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
            for ( i = MiniportHandle->OpenQueue; i; i = i->MiniportNextOpen )
            {
              if ( i != a1 )
              {
                p_SetEncapsulation = &i->Offload->SetEncapsulation;
                if ( p_SetEncapsulation )
                {
                  if ( p_SetEncapsulation[1].Header.Type )
                  {
                    v10 = ndisMergeEncapsulations(p_SetEncapsulation, p_TopMergedEncapsulation);
                    if ( v10 )
                      break;
                  }
                }
              }
            }
            v14 = NewIrql;
            MiniportHandle->MiniportThread = 0LL;
            KeReleaseSpinLock(&MiniportHandle->Lock, v14);
            if ( v10 )
            {
              *a3 = v10;
            }
            else
            {
              v8 = 0;
              a1->Offload->Encapsulation.Oid = a2->DATA.QUERY_INFORMATION.Oid;
              a1->Offload->Encapsulation.Buffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
              a1->Offload->Encapsulation.BufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
              a2->DATA.QUERY_INFORMATION.InformationBuffer = p_TopMergedEncapsulation;
              a2->DATA.QUERY_INFORMATION.InformationBufferLength = 28;
              a2->DATA.QUERY_INFORMATION.Oid = 16843018;
            }
          }
        }
      }
      else
      {
        *a3 = -1073676267;
      }
    }
  }
  else
  {
    v8 = 1;
    *a3 = -1073741637;
  }
  return v8;
}
