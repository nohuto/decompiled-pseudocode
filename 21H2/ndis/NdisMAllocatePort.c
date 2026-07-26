/*
 * XREFs of NdisMAllocatePort @ 0x1C0082950
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EBC8 (WPP_RECORDER_SF_qdD_ea_1C005EBC8.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  unsigned int v2; // r12d
  int v5; // edx
  NDIS_STATUS v6; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rsi
  _BYTE *v9; // rbp
  unsigned int v10; // edi
  size_t v11; // r13
  __int64 v12; // rax
  _BYTE *v13; // rcx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  unsigned int v18; // edi
  _BYTE *v19; // rax
  _BYTE *v20; // r14
  char v21; // bp
  _DWORD *v22; // rax
  unsigned int v23; // r8d
  __int64 *v24; // rdx
  __int64 v25; // rax
  KIRQL v26; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0xAu,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      NdisMiniportHandle);
  if ( !ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x64u) )
  {
    v6 = -1073676286;
    goto LABEL_45;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6F70444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v8 + 4) = 1;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, &NewIrql);
  if ( (unsigned int)(*((_DWORD *)NdisMiniportHandle + 687) + 1) > 0x2AAAAAA )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
LABEL_9:
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, NewIrql);
LABEL_6:
    v6 = -1073741670;
LABEL_42:
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x64u);
LABEL_43:
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    goto LABEL_45;
  }
  v9 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 342);
  v10 = *((_DWORD *)NdisMiniportHandle + 686);
  v11 = v10;
  if ( v9 && (v12 = 0LL, v10) )
  {
    v13 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 342);
    while ( *v13 == 0xFF )
    {
      v2 += 8;
      v12 = (unsigned int)(v12 + 1);
      ++v13;
      if ( (unsigned int)v12 >= v10 )
        goto LABEL_15;
    }
    v14 = (unsigned int)v12;
    v15 = 1;
    v16 = (unsigned __int8)v9[v12];
    v17 = 0;
    while ( (v16 & v15) != 0 )
    {
      v15 *= 2;
      if ( (unsigned int)++v17 >= 8 )
        goto LABEL_15;
    }
    v9[v14] = v15 | v16;
    v2 += v17;
  }
  else
  {
LABEL_15:
    if ( 8 * v10 + 1 >= 0x1000000 )
      goto LABEL_16;
    v18 = v10 + 1;
    if ( 8 * v18 + 1 < (unsigned int)v11 )
    {
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, NewIrql);
      v6 = -1073676267;
      goto LABEL_42;
    }
    v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6F70444Eu);
    v20 = v19;
    if ( !v19 )
    {
LABEL_16:
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      goto LABEL_9;
    }
    if ( v9 )
    {
      memmove(v19, v9, v11);
      v20[v18 - 1] = 1;
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      *v19 = 3;
      v2 = 1;
    }
    *((_QWORD *)NdisMiniportHandle + 342) = v20;
    *((_DWORD *)NdisMiniportHandle + 686) = v18;
  }
  PortCharacteristics->PortNumber = v2;
  v21 = 0;
  *(_OWORD *)(v8 + 3) = *(_OWORD *)&PortCharacteristics->Header.Type;
  *(_OWORD *)(v8 + 5) = *(_OWORD *)&PortCharacteristics->MediaConnectState;
  *(_OWORD *)(v8 + 7) = *(_OWORD *)&PortCharacteristics->RcvLinkSpeed;
  *(_OWORD *)(v8 + 9) = *(_OWORD *)&PortCharacteristics->RcvControlState;
  if ( (PortCharacteristics->Flags & 1) != 0 )
  {
    *((_DWORD *)v8 + 17) = *((_DWORD *)NdisMiniportHandle + 826);
    *((_DWORD *)v8 + 18) = *((_DWORD *)NdisMiniportHandle + 827);
    *((_DWORD *)v8 + 19) = *((_DWORD *)NdisMiniportHandle + 828);
    *((_DWORD *)v8 + 20) = *((_DWORD *)NdisMiniportHandle + 829);
  }
  v22 = (_DWORD *)*((_QWORD *)NdisMiniportHandle + 340);
  if ( v22 == (_DWORD *)((char *)NdisMiniportHandle + 2720) )
  {
LABEL_36:
    v24 = (__int64 *)*((_QWORD *)v22 + 1);
    v25 = *v24;
    if ( *(__int64 **)(*v24 + 8) != v24 )
      __fastfail(3u);
    *v8 = v25;
    v8[1] = v24;
    *(_QWORD *)(v25 + 8) = v8;
    *v24 = (__int64)v8;
    ++*((_DWORD *)NdisMiniportHandle + 687);
    v6 = 0;
    *((_DWORD *)v8 + 4) = 2;
  }
  else
  {
    v23 = *((_DWORD *)v8 + 7);
    while ( v22[7] != v23 )
    {
      if ( v22[7] <= v23 )
      {
        v22 = *(_DWORD **)v22;
        if ( v22 != (_DWORD *)((char *)NdisMiniportHandle + 2720) )
          continue;
      }
      goto LABEL_36;
    }
    v6 = -1073741270;
    v21 = 1;
  }
  v26 = NewIrql;
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v26);
  if ( v6 )
  {
    if ( !v21 )
      goto LABEL_43;
    goto LABEL_42;
  }
LABEL_45:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x17u,
      0xBu,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      (char)NdisMiniportHandle,
      v6,
      v2);
  return v6;
}
