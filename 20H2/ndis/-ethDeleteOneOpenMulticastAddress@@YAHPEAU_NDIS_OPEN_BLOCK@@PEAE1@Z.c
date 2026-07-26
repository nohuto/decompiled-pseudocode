/*
 * XREFs of ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C0064BB8
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003C3B0 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EB0 (WPP_RECORDER_SF_Dd.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

__int64 __fastcall ethDeleteOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  __int64 NumAddresses; // r8
  __int64 v7; // rdi
  int v8; // eax
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rdx
  unsigned int v10; // eax
  unsigned int OldNumAddresses; // ecx
  unsigned int RefCount; // r9d
  int v14; // [rsp+30h] [rbp-28h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_3192e02e09ba389210441d118847de0a_Traceguids,
      a1);
  NumAddresses = a1->NumAddresses;
  v7 = 0LL;
  *a3 = 1;
  v8 = 1;
  if ( !(_DWORD)NumAddresses )
    goto LABEL_8;
  MCastAddressBuf = a1->MCastAddressBuf;
  while ( *(_DWORD *)&MCastAddressBuf[v7].MCastAddress[2] != *(_DWORD *)(a2 + 2)
       || *(_WORD *)MCastAddressBuf[v7].MCastAddress != *(_WORD *)a2 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 = 1;
    if ( (unsigned int)v7 >= (unsigned int)NumAddresses )
      goto LABEL_8;
  }
  RefCount = MCastAddressBuf[v7].RefCount;
  v8 = 0;
  if ( RefCount > 1 )
  {
    MCastAddressBuf[v7].RefCount = RefCount - 1;
  }
  else
  {
LABEL_8:
    if ( (_DWORD)v7 != (_DWORD)NumAddresses || !v8 )
    {
      memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * NumAddresses);
      v10 = a1->NumAddresses;
      a1->OldNumAddresses = v10--;
      a1->NumAddresses = v10;
      if ( v10 )
      {
        memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, 12 * v7);
        OldNumAddresses = a1->OldNumAddresses;
        if ( (unsigned int)v7 < OldNumAddresses - 1 )
          memmove(
            &a1->MCastAddressBuf[v7],
            &a1->OldMCastAddressBuf[(unsigned int)(v7 + 1)],
            12LL * (OldNumAddresses - (unsigned int)v7 - 1));
      }
      *a3 = 0;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v14 = 0;
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_3192e02e09ba389210441d118847de0a_Traceguids,
      *a3,
      v14);
  }
  return 0LL;
}
