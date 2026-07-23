/*
 * XREFs of IopQueryLegacyBusInformation @ 0x14073E6A8
 * Callers:
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryLegacyBusInformation(struct _DEVICE_OBJECT *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // ebp
  _DWORD *v9; // rcx
  _QWORD *DeviceNode; // rdx
  __int64 v11; // rdx
  _WORD v12[40]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  P = 0LL;
  memset(v12, 0, 0x48uLL);
  v12[0] = 6171;
  v7 = IopSynchronousCall(a1, (__int64)v12, -1073741637, 0LL, &P);
  if ( v7 >= 0 )
  {
    v9 = P;
    if ( P )
    {
      if ( a3 )
        *a3 = *((_DWORD *)P + 4);
      if ( a4 )
        *a4 = v9[5];
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      DeviceNode = a1->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v11 = DeviceNode[2];
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 64) )
          {
            DbgPrint("*** IopQueryLegacyBusInformation - Driver %wZ returned STATUS_SUCCESS\n", v11 + 56);
            DbgPrint("    for IRP_MN_QUERY_LEGACY_BUS_INFORMATION, and a NULL POINTER.\n");
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
