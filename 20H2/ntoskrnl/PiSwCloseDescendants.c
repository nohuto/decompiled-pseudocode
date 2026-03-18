/*
 * XREFs of PiSwCloseDescendants @ 0x140741D68
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x140741B48 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x140741D68 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x14076F6FC (PiSwIrpCleanup.c)
 * Callees:
 *     PiSwIsPdoAssociationsEmpty @ 0x1405CCE10 (PiSwIsPdoAssociationsEmpty.c)
 *     PiSwCloseDevice @ 0x1407309C0 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x140741D68 (PiSwCloseDescendants.c)
 *     PiSwFindBusRelations @ 0x140741E90 (PiSwFindBusRelations.c)
 */

void __fastcall PiSwCloseDescendants(__int64 a1, char a2)
{
  __int64 BusRelations; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _DWORD *v7; // rsi

  BusRelations = PiSwFindBusRelations();
  if ( BusRelations )
  {
    v5 = (_QWORD *)(BusRelations + 16);
    v6 = *(_QWORD **)(BusRelations + 16);
    while ( v6 != v5 )
    {
      v7 = v6 - 12;
      v6 = (_QWORD *)*v6;
      if ( (v7[1] & 1) == 0 && (!a2 || PiSwIsPdoAssociationsEmpty((__int64)v7)) )
      {
        LOBYTE(v4) = a2;
        PiSwCloseDescendants(v7 + 18, v4);
        PiSwCloseDevice(v7);
      }
    }
  }
}
