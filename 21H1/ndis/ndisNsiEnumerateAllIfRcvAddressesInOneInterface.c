/*
 * XREFs of ndisNsiEnumerateAllIfRcvAddressesInOneInterface @ 0x1C00B3AFC
 * Callers:
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B39B0 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0009800 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F050 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfRcvAddressesInOneInterface(struct _NDIS_IF_BLOCK *a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  bool v5; // zf
  unsigned int v6; // esi
  unsigned int ifRcvAddressCount; // r9d
  __int64 v8; // r11
  __int64 v9; // r8
  unsigned int v10; // ecx
  _QWORD *v11; // r14
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // r10
  unsigned int v13; // ebx

  if ( a1->ifRcvAddressCount && ndisIfReferenceMiniport(a1, 9u) )
  {
    v5 = *(_DWORD *)(a2 + 48) == 0;
    v6 = *(_DWORD *)(a2 + 88);
    ifRcvAddressCount = a1->ifRcvAddressCount;
    v8 = *(unsigned int *)(a2 + 64);
    *(_DWORD *)(a2 + 88) = ifRcvAddressCount;
    if ( !v5 || *(_DWORD *)(a2 + 80) || (unsigned int)v8 < 6 )
    {
      v13 = -1073741306;
    }
    else
    {
      v9 = *(_QWORD *)(a2 + 16);
      v10 = 0;
      v11 = *(_QWORD **)(a2 + 56);
      if ( v6 )
      {
        v4 = 0LL;
        do
        {
          if ( v10 >= a1->ifRcvAddressCount )
            break;
          ifRcvAddressTable = a1->ifRcvAddressTable;
          if ( *(_QWORD *)(a2 + 16) )
          {
            *(_QWORD *)v9 = a1->NetLuid.Value;
            *(_OWORD *)(v9 + 8) = *(_OWORD *)((char *)ifRcvAddressTable + (_QWORD)v4 + 8);
            *(_OWORD *)(v9 + 24) = *(_OWORD *)((char *)ifRcvAddressTable + (_QWORD)v4 + 24);
            v9 += 40LL;
          }
          if ( *(_QWORD *)(a2 + 56) )
          {
            *v11 = *(_QWORD *)((char *)ifRcvAddressTable + (_QWORD)v4);
            v11 = (_QWORD *)((char *)v11 + v8);
          }
          ++v10;
          v4 = (struct _NDIS_MINIPORT_BLOCK *)((char *)v4 + 40);
        }
        while ( v10 < v6 );
      }
      *(_DWORD *)(a2 + 88) = v10;
      v13 = v10 < ifRcvAddressCount ? 0x105 : 0;
    }
    ndisIfDereferenceMiniport(a1, v4, 9u);
    return v13;
  }
  else
  {
    *(_DWORD *)(a2 + 88) = 0;
    return 0LL;
  }
}
