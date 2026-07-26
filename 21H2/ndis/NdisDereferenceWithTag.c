/*
 * XREFs of NdisDereferenceWithTag @ 0x1C000F0A0
 * Callers:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00099E0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B3B0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C870 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000EAC0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00189B4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00198DC (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A650 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A7EC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BD2C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021664 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C003EA28 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE5F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE774 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  ULONG_PTR v2; // r9
  int v4; // ecx
  __int64 v5; // r11
  unsigned __int8 v6; // r10
  unsigned __int8 v7; // al
  _BYTE *v8; // rdx
  char v9; // cl
  ULONG_PTR v10; // rbx
  unsigned int v11; // edx
  int v12; // ecx

  v2 = a2;
  if ( BugCheckParameter3 - 2 > 1 )
  {
    if ( BugCheckParameter3 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)BugCheckParameter3 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, 0xFFuLL);
      *(_BYTE *)BugCheckParameter3 &= ~2u;
    }
    else
    {
      if ( a2 >= *(_BYTE *)(BugCheckParameter3 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, BugCheckParameter3, a2);
      v4 = *(unsigned __int8 *)(BugCheckParameter3 + 1);
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v10 = BugCheckParameter3 + ((unsigned __int64)a2 << 6);
          v11 = *(_DWORD *)(v10 + 64);
          v12 = (unsigned __int16)v11 >> 1;
          if ( v11 >> 17 < 0x3FFE && v12 == (v11 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 8));
            *(_DWORD *)(v10 + 64) &= 0x10001u;
          }
          else
          {
            if ( v12 == 0 && (v11 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, v2);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 8), 0);
          }
        }
      }
      else
      {
        v5 = *(_QWORD *)(BugCheckParameter3 + 8);
        if ( v5 && (v6 = *(_BYTE *)(BugCheckParameter3 + 3), v7 = 0, v6) )
        {
          while ( 1 )
          {
            v8 = (_BYTE *)(v5 + 2LL * v7);
            if ( *v8 == (_BYTE)v2 )
            {
              v9 = v8[1];
              if ( v9 )
                break;
            }
            if ( ++v7 >= v6 )
              goto LABEL_10;
          }
          v8[1] = v9 - 1;
        }
        else
        {
LABEL_10:
          if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), v2) )
            ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, v2);
        }
      }
    }
  }
}
