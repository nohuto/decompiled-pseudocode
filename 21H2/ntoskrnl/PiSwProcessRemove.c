/*
 * XREFs of PiSwProcessRemove @ 0x140732BD8
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x140738D80 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x14074F0C0 (PiSwPdoPnPDispatch.c)
 *     PiSwGetChildPdo @ 0x14077093C (PiSwGetChildPdo.c)
 * Callees:
 *     IofCompleteRequest @ 0x140243490 (IofCompleteRequest.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402648C0 (RtlDeleteElementGenericTableAvl.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IoInvalidateDeviceRelations @ 0x1403707A0 (IoInvalidateDeviceRelations.c)
 *     PnpFreeDevPropertyArray @ 0x140633680 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406386D0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x140732C94 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140732D2C (PiSwUnassociateDeviceObject.c)
 *     PiSwMakePdoInactive @ 0x140732E14 (PiSwMakePdoInactive.c)
 *     PiSwPnPInfoFree @ 0x140734050 (PiSwPnPInfoFree.c)
 *     PiSwDeviceDereference @ 0x14074CF94 (PiSwDeviceDereference.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14074D5BC (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwFreeInterfaceList @ 0x14074D944 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x14074DE4C (PiSwBusRelationAdd.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEC48 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  unsigned int **v2; // rbx
  __int64 result; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rdx
  void *v10; // rcx
  unsigned int *v11; // r9
  char *v12; // rdx
  int v13; // edx
  struct _DEVICE_OBJECT *v14; // rax
  struct _DMA_ADAPTER *v15; // rbx
  __int64 v16; // rcx
  unsigned int *Buffer; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(unsigned int ***)(a1 + 64);
  Buffer = *v2;
  result = *((unsigned int *)v2 + 2);
  if ( (result & 0x20) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      *((_DWORD *)v2 + 2) = result & 0xFFFFFFFE;
      result = PiSwDeviceInterfacesUpdateState(Buffer, 0LL);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( ((_DWORD)v2[1] & 8) == 0 )
        PiSwUnassociateDeviceObject(a1);
      result = Buffer[1];
      if ( (result & 2) != 0 )
      {
        PiSwBusRelationRemove(Buffer);
        result = (__int64)Buffer;
        if ( *((_QWORD *)Buffer + 11) )
        {
          Buffer[1] &= ~4u;
          PiSwPnPInfoFree(Buffer + 6);
          v6 = Buffer;
          v7 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(Buffer + 6) = *(_OWORD *)(v7 + 8);
          *(_OWORD *)(v6 + 10) = *(_OWORD *)(v7 + 24);
          *(_OWORD *)(v6 + 14) = *(_OWORD *)(v7 + 40);
          v8 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(v8 + 8) = 0LL;
          *(_OWORD *)(v8 + 24) = 0LL;
          *(_OWORD *)(v8 + 40) = 0LL;
          v9 = Buffer;
          v10 = (void *)*((_QWORD *)Buffer + 19);
          if ( v10 )
          {
            ExFreePoolWithTag(v10, 0x57706E50u);
            v9 = Buffer;
          }
          v9[40] = *(_DWORD *)(*((_QWORD *)v9 + 11) + 64LL);
          *((_QWORD *)Buffer + 19) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 64LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL) = 0LL;
          v11 = Buffer;
          v12 = (char *)*((_QWORD *)Buffer + 21);
          if ( v12 )
          {
            PnpFreeDevPropertyArray(Buffer[44], v12, 0x57706E50u);
            v11 = Buffer;
          }
          v11[44] = *(_DWORD *)(*((_QWORD *)v11 + 11) + 80LL);
          *((_QWORD *)Buffer + 21) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 80LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL) = 0LL;
          PiSwFreeInterfaceList(Buffer + 46);
          v13 = PiSwBusRelationAdd(**((_QWORD **)Buffer + 11));
          if ( v13 < 0 )
          {
            v16 = *((_QWORD *)Buffer + 18);
            if ( v16 && _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL) )
            {
              *(_QWORD *)(*((_QWORD *)Buffer + 18) + 56LL) = 0LL;
              *(_DWORD *)(*((_QWORD *)Buffer + 18) + 48LL) = v13;
              IofCompleteRequest(*((PIRP *)Buffer + 18), 0);
              *((_QWORD *)Buffer + 18) = 0LL;
            }
          }
          else
          {
            Buffer[1] &= ~2u;
            v14 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(
                                             *((_QWORD *)Buffer + 14),
                                             0x746C6644u);
            v15 = (struct _DMA_ADAPTER *)v14;
            if ( v14 )
            {
              IoInvalidateDeviceRelations(v14, SingleBusRelations);
              HalPutDmaAdapter(v15);
            }
          }
          PiSwQueuedCreateInfoFree(*((PVOID *)Buffer + 11));
          *((_QWORD *)Buffer + 11) = 0LL;
          result = (__int64)Buffer;
        }
        if ( !*(_QWORD *)(result + 112) )
        {
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          return PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
  return result;
}
