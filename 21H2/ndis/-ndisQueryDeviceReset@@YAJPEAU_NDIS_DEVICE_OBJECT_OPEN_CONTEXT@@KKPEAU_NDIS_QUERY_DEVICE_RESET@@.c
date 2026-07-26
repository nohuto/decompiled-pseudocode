/*
 * XREFs of ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C0062ED8
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00098F0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F140 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C002F204 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisQueryDeviceReset(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        union _NET_LUID_LH *a4)
{
  unsigned int v5; // ebx
  KIRQL v6; // bl
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v8; // rsi
  struct _NDIS_MINIPORT_BLOCK *v9; // rax
  struct _NDIS_MINIPORT_BLOCK *v10; // rdi
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx

  if ( *(_BYTE *)a1 )
  {
    if ( a2 < 0x14 || a3 < 0x14 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a4[1]);
      v8 = (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid;
      if ( InterfaceByNetLuid
        && (v9 = ndisIfReferenceMiniport((struct _NDIS_IF_BLOCK *)InterfaceByNetLuid, 0x19u), (v10 = v9) != 0LL) )
      {
        if ( ndisReferenceMiniport(v9, 0x6Cu) )
        {
          ndisIfDereferenceMiniport(v8, v11, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          if ( (v10->Flags & 0x80u) == 0 )
            v5 = -1073741637;
          else
            v5 = v10->DriverHandle->CxBlock->Chars.EvtCxMiniportQueryDeviceResetSupport(
                   v10->MiniportAdapterContext,
                   (unsigned int *)&a4[2]);
          ndisDereferenceMiniport(v10, 0x6Cu);
        }
        else
        {
          ndisIfDereferenceMiniport(v8, v11, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          return (unsigned int)-1073676282;
        }
      }
      else
      {
        KeReleaseSpinLock(&ndisIfListLock, v6);
        return (unsigned int)-1071448058;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
