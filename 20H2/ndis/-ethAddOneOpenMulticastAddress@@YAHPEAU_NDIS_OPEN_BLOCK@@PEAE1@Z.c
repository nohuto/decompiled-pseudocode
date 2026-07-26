/*
 * XREFs of ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C003C768
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003C3B0 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EB0 (WPP_RECORDER_SF_Dd.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  __int64 NumAddresses; // r9
  unsigned int v7; // edi
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  int v11; // ebp
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rdx
  _ETH_MULTICAST_WRAPPER *OldMCastAddressBuf; // r8
  unsigned int v15; // edx
  unsigned __int16 v16; // ax
  char v17[4]; // [rsp+30h] [rbp-38h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_3192e02e09ba389210441d118847de0a_Traceguids,
      a1);
  NumAddresses = a1->NumAddresses;
  v7 = 0;
  v8 = 0;
  *a3 = 1;
  if ( (_DWORD)NumAddresses )
  {
    MCastAddressBuf = a1->MCastAddressBuf;
    while ( *(_DWORD *)&MCastAddressBuf[v8].MCastAddress[2] != *(_DWORD *)(a2 + 2)
         || *(_WORD *)MCastAddressBuf[v8].MCastAddress != *(_WORD *)a2 )
    {
      if ( ++v8 >= (unsigned int)NumAddresses )
        goto LABEL_4;
    }
    ++MCastAddressBuf[v8].RefCount;
  }
  else
  {
LABEL_4:
    if ( (unsigned int)(NumAddresses + 1) > a1->MaxMulticastAddresses )
    {
      v7 = -1073676279;
    }
    else
    {
      memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * NumAddresses);
      v9 = a1->NumAddresses;
      v10 = 0;
      a1->OldNumAddresses = v9;
      v11 = 1;
      a1->NumAddresses = v9 + 1;
      if ( v9 )
      {
        OldMCastAddressBuf = a1->OldMCastAddressBuf;
        v15 = *(_DWORD *)(a2 + 2);
        while ( *(_DWORD *)&OldMCastAddressBuf[v10].MCastAddress[2] <= v15 )
        {
          if ( *(_DWORD *)&OldMCastAddressBuf[v10].MCastAddress[2] >= v15 )
          {
            v16 = *(_WORD *)OldMCastAddressBuf[v10].MCastAddress;
            if ( v16 > *(_WORD *)a2 )
              break;
            v11 = -(v16 < *(_WORD *)a2);
          }
          else
          {
            v11 = -1;
          }
          if ( ++v10 >= a1->OldNumAddresses )
            goto LABEL_6;
        }
        v11 = 1;
      }
LABEL_6:
      memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, 12LL * v10);
      memmove(a1->MCastAddressBuf[v10].MCastAddress, a2, 6uLL);
      a1->MCastAddressBuf[v10].RefCount = 1;
      if ( v11 > 0 )
        memmove(&a1->MCastAddressBuf[v10 + 1], &a1->OldMCastAddressBuf[v10], 12LL * (a1->OldNumAddresses - v10));
      *a3 = 0;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v17 = v7;
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_3192e02e09ba389210441d118847de0a_Traceguids,
      *a3,
      *(_DWORD *)v17);
  }
  return v7;
}
