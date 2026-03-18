/*
 * XREFs of PiSwCloseDescendants @ 0x14073464C
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14073456C (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x14073464C (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x140754680 (PiSwIrpCleanup.c)
 * Callees:
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     PiSwFindBusRelations @ 0x14072C714 (PiSwFindBusRelations.c)
 *     PiSwCloseDescendants @ 0x14073464C (PiSwCloseDescendants.c)
 */

void __fastcall PiSwCloseDescendants(__int64 a1)
{
  _QWORD *BusRelations; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rsi

  BusRelations = PiSwFindBusRelations(a1);
  if ( BusRelations )
  {
    v2 = BusRelations + 2;
    v3 = (_QWORD *)BusRelations[2];
    while ( v3 != v2 )
    {
      v4 = v3 - 12;
      v3 = (_QWORD *)*v3;
      if ( (v4[1] & 1) == 0 )
      {
        PiSwCloseDescendants(v4 + 18);
        PiSwCloseDevice(v4);
      }
    }
  }
}
