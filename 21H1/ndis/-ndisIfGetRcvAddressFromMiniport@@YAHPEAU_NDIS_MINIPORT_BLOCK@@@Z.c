/*
 * XREFs of ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0030054
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002F9FC (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002FE40 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003D1C0 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisIfGetRcvAddressFromMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rdi
  unsigned int v2; // ebx
  _X_FILTER *EthDB; // rsi
  unsigned int MaxMulticastAddresses; // eax
  unsigned int v5; // ecx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rax
  struct _NDIS_IF_RCV_ADDRESS *v7; // r8
  unsigned int MiniportNumAddresses; // ecx
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int8 *MiniportMCastAddressBuf; // rcx
  struct _NDIS_IF_RCV_ADDRESS *v14; // rdx
  __int64 v15; // rdx
  struct _NDIS_IF_RCV_ADDRESS *v16; // rcx
  unsigned int v18; // ebp
  struct _NDIS_IF_RCV_ADDRESS *PoolWithTag; // rax
  __int64 v20; // r11
  __int64 v21; // r10
  unsigned __int8 *v22; // rdx
  struct _NDIS_IF_RCV_ADDRESS *v23; // r8
  __int64 v24; // rax

  IfBlock = a1->IfBlock;
  v2 = 0;
  EthDB = a1->EthDB;
  if ( IfBlock )
  {
    if ( EthDB )
    {
      MaxMulticastAddresses = EthDB->MaxMulticastAddresses;
      v5 = MaxMulticastAddresses + 1;
      if ( MaxMulticastAddresses + 1 >= MaxMulticastAddresses )
      {
        ifRcvAddressTable = IfBlock->ifRcvAddressTable;
        if ( IfBlock->ifMaxRcvAddressCount < v5 )
        {
          if ( ifRcvAddressTable )
            ExFreePoolWithTag(IfBlock->ifRcvAddressTable, 0);
          IfBlock->ifRcvAddressTable = 0LL;
          ifRcvAddressTable = 0LL;
          *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
          v7 = 0LL;
        }
        else
        {
          v7 = IfBlock->ifRcvAddressTable;
        }
        if ( ifRcvAddressTable
          || (v18 = 48 * (EthDB->MaxMulticastAddresses + 1),
              PoolWithTag = (struct _NDIS_IF_RCV_ADDRESS *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6669444Eu),
              (IfBlock->ifRcvAddressTable = PoolWithTag) != 0LL)
          && (memset(PoolWithTag, 0, v18),
              IfBlock->ifMaxRcvAddressCount = EthDB->MaxMulticastAddresses + 1,
              (v7 = IfBlock->ifRcvAddressTable) != 0LL) )
        {
          MiniportNumAddresses = EthDB->MiniportNumAddresses;
          v9 = 0;
          IfBlock->ifRcvAddressCount = MiniportNumAddresses + 1;
          if ( MiniportNumAddresses )
          {
            do
            {
              v10 = v9++;
              v11 = 5 * v10;
              *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v11) = 2;
              v12 = 3 * v10;
              *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v11 + 2) = 6;
              MiniportMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
              v14 = IfBlock->ifRcvAddressTable;
              *((_DWORD *)v14 + 2 * v11 + 2) = *(_DWORD *)&MiniportMCastAddressBuf[2 * v12];
              *((_WORD *)v14 + 4 * v11 + 6) = *(_WORD *)&MiniportMCastAddressBuf[2 * v12 + 4];
            }
            while ( v9 < IfBlock->ifRcvAddressCount - 1 );
            v7 = IfBlock->ifRcvAddressTable;
          }
          v15 = 5LL * v9;
          *((_DWORD *)v7 + 2 * v15) = 2;
          *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v15 + 2) = 6;
          v16 = IfBlock->ifRcvAddressTable;
          *((_DWORD *)v16 + 2 * v15 + 2) = *(_DWORD *)EthDB->AdapterAddress;
          *((_WORD *)v16 + 4 * v15 + 6) = *(_WORD *)&EthDB->AdapterAddress[4];
          if ( v9 < IfBlock->ifRcvAddressCount - 1 )
          {
            do
            {
              v20 = v9 + 1;
              v21 = 5 * v20;
              *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v21) = 2;
              *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v21 + 2) = 6;
              v22 = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
              v23 = IfBlock->ifRcvAddressTable;
              v24 = v9++;
              *((_DWORD *)v23 + 2 * v21 + 2) = *(_DWORD *)&v22[6 * v24];
              *((_WORD *)v23 + 4 * v21 + 6) = *(_WORD *)&v22[6 * v24 + 4];
            }
            while ( (unsigned int)v20 < IfBlock->ifRcvAddressCount - 1 );
          }
        }
        else
        {
          *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return v2;
}
