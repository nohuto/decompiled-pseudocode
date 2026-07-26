/*
 * XREFs of ?ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00FF630
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0023210 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000896C (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisMSetNDKAttributes(struct _NDIS_MINIPORT_BLOCK *a1, union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  unsigned int v2; // ebx
  _OWORD *MiniportAddDeviceContext; // rdi
  _OWORD *PoolWithTag; // rax
  _OWORD *v7; // rbp
  __int64 v8; // rax

  v2 = 0;
  if ( a2->Header.Revision == 1
    && a2->Header.Size == 16
    && (MiniportAddDeviceContext = a2->AddDeviceRegistrationAttributes.MiniportAddDeviceContext) != 0LL
    && *(_BYTE *)MiniportAddDeviceContext == 0x80
    && *((_BYTE *)MiniportAddDeviceContext + 1) == 1
    && *((_WORD *)MiniportAddDeviceContext + 1) >= 0x38u
    && *((_QWORD *)MiniportAddDeviceContext + 6) )
  {
    if ( ndisGetNDKBlock(a1) )
    {
      return (unsigned int)-1073741808;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x726B444Eu);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xC0uLL);
        v7[2] = *MiniportAddDeviceContext;
        v7[3] = MiniportAddDeviceContext[1];
        v7[4] = MiniportAddDeviceContext[2];
        *((_QWORD *)v7 + 10) = *((_QWORD *)MiniportAddDeviceContext + 6);
        v8 = *((_QWORD *)MiniportAddDeviceContext + 6);
        *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)v8;
        *(_OWORD *)((char *)v7 + 104) = *(_OWORD *)(v8 + 16);
        *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)(v8 + 32);
        *(_OWORD *)((char *)v7 + 136) = *(_OWORD *)(v8 + 48);
        *(_OWORD *)((char *)v7 + 152) = *(_OWORD *)(v8 + 64);
        *(_OWORD *)((char *)v7 + 168) = *(_OWORD *)(v8 + 80);
        *((_QWORD *)v7 + 23) = *(_QWORD *)(v8 + 96);
        *((_QWORD *)v7 + 10) = (char *)v7 + 88;
        *((_BYTE *)v7 + 24) = a2->NDKAttributes.Enabled;
        *((_QWORD *)v7 + 1) = 0LL;
        *((_DWORD *)v7 + 4) = 0;
        a1->NDKBlock = v7;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xAu,
            (struct _GUID *)&WPP_62180bbb655c3d4e7eec745561e288ca_Traceguids,
            a1);
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
