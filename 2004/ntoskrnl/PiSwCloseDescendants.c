/*
 * XREFs of PiSwCloseDescendants @ 0x140732924
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14073279C (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x140732924 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x1407610EC (PiSwIrpCleanup.c)
 * Callees:
 *     PiSwCloseDevice @ 0x1407228B0 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x140732924 (PiSwCloseDescendants.c)
 *     PiSwFindBusRelations @ 0x140732A00 (PiSwFindBusRelations.c)
 */

void PiSwCloseDescendants()
{
  __int64 BusRelations; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  _DWORD *v3; // rsi

  BusRelations = PiSwFindBusRelations();
  if ( BusRelations )
  {
    v1 = (_QWORD *)(BusRelations + 16);
    v2 = *(_QWORD **)(BusRelations + 16);
    while ( v2 != v1 )
    {
      v3 = v2 - 12;
      v2 = (_QWORD *)*v2;
      if ( (v3[1] & 1) == 0 )
      {
        PiSwCloseDescendants(v3 + 18);
        PiSwCloseDevice(v3);
      }
    }
  }
}
