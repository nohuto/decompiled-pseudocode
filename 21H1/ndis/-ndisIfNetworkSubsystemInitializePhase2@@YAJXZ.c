/*
 * XREFs of ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C003478C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0108770 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013C7C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002BB3C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1C0034A50 (ndisIfCreateNetworkBlock.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 ndisIfNetworkSubsystemInitializePhase2(void)
{
  void *v0; // rdi
  int NetworkBlock; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // r14d
  KIRQL v7; // r12
  __int64 v8; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v10; // r8
  char v11; // r13
  const struct _GUID *v12; // r15
  _QWORD v14[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v15[20]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v16; // [rsp+130h] [rbp+67h]
  __int64 v17; // [rsp+138h] [rbp+6Fh]
  char *PoolWithTag; // [rsp+140h] [rbp+77h]

  v0 = 0LL;
  memset(v14, 0, 0x48uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x18u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids);
  memset(v15, 0, 0x70uLL);
  LODWORD(v15[3]) = 6;
  v15[2] = &NPI_MS_NDIS_MODULEID;
  v15[4] = 0x100000000LL;
  v15[5] = 0LL;
  LODWORD(v15[6]) = 16;
  v15[7] = 0LL;
  LODWORD(v15[8]) = 528;
  LODWORD(v15[13]) = 0;
  NetworkBlock = NsiEnumerateObjectsAllParametersEx(v15);
  if ( NetworkBlock >= 0 )
  {
    v2 = v15[13];
    if ( LODWORD(v15[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v15[13];
          v0 = 0LL;
        }
        v3 = 16 * v2;
        if ( 16 * (unsigned __int64)v2 > 0xFFFFFFFF || 544 * v2 < 16 * v2 )
        {
          NetworkBlock = -1073741670;
          goto LABEL_23;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 528LL * v2, 0x6669444Eu);
        v0 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, 528LL * LODWORD(v15[13]));
        v15[5] = PoolWithTag;
        v15[7] = &PoolWithTag[v4];
        LODWORD(v15[6]) = 16;
        LODWORD(v15[8]) = 528;
        NetworkBlock = NsiEnumerateObjectsAllParametersEx(v15);
        if ( NetworkBlock != 261 )
          goto LABEL_11;
        v2 = v15[13];
      }
      NetworkBlock = -1073741670;
LABEL_11:
      if ( NetworkBlock >= 0 )
      {
        v5 = v15[5];
        v16 = v15[5];
        v17 = v15[7];
        v6 = 0;
        v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        if ( LODWORD(v15[13]) )
        {
          do
          {
            v8 = v17 + 528LL * v6;
            if ( *(_BYTE *)v8 == 0xAC && *(_BYTE *)(v8 + 1) && *(_WORD *)(v8 + 2) >= 0x210u )
            {
              CompartmentBlock = ndisIfFindCompartmentBlock(*(_DWORD *)(v8 + 4));
              v11 = (char)CompartmentBlock;
              v12 = (const struct _GUID *)(16 * v10 + v5);
              if ( CompartmentBlock )
              {
                if ( !ndisIfFindNetworkBlock(v12) )
                  NetworkBlock = ndisIfCreateNetworkBlock(v11, (char)v12);
              }
              else
              {
                KeReleaseSpinLock(&ndisIfListLock, v7);
                v14[3] = 6LL;
                v14[1] = 0LL;
                v14[2] = &NPI_MS_NDIS_MODULEID;
                v14[6] = 16LL;
                v14[8] = 528LL;
                v14[0] = 0LL;
                v14[4] = 0x300000000LL;
                v14[5] = v12;
                v14[7] = v17 + 528LL * v6;
                NsiSetAllParametersEx(v14);
                v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              }
              v5 = v16;
            }
            ++v6;
          }
          while ( v6 < LODWORD(v15[13]) );
          v0 = PoolWithTag;
        }
        KeReleaseSpinLock(&ndisIfListLock, v7);
      }
LABEL_23:
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      NetworkBlock);
  return (unsigned int)NetworkBlock;
}
