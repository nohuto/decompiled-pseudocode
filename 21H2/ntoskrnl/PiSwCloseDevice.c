/*
 * XREFs of PiSwCloseDevice @ 0x14095341C
 * Callers:
 *     PiSwStopDestroy @ 0x140766F84 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140811C50 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x14056370C (McTemplateK0zz_EtwWriteTransfer.c)
 *     PiSwDeviceDereference @ 0x140661C18 (PiSwDeviceDereference.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x14095336C (PiSwBusRelationRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x140953AB8 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwCloseDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  _QWORD *Buffer; // [rsp+40h] [rbp+8h] BYREF

  Buffer = (_QWORD *)a1;
  if ( (byte_140C0DD4C & 2) != 0 )
  {
    McTemplateK0zz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CloseDevice,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    PiSwQueuedCreateInfoFree(*(PVOID *)(a1 + 88));
    Buffer[11] = 0LL;
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    v3 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v4 = v3;
    if ( v3 )
    {
      IoInvalidateDeviceRelations(v3, SingleBusRelations);
      ObfDereferenceObject(v4);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      PiSwBusRelationRemove((const wchar_t **)a1, a2, a3);
      a1 = (__int64)Buffer;
    }
    if ( (byte_140C0DD4C & 2) != 0 )
      McTemplateK0zz_EtwWriteTransfer(
        a1,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
        a3,
        *(const wchar_t **)(a1 + 8),
        *(const wchar_t **)(a1 + 16));
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    PiSwDeviceDereference(Buffer);
  }
}
