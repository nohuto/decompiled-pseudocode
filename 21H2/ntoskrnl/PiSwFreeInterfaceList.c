/*
 * XREFs of PiSwFreeInterfaceList @ 0x1407645E0
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140661C4C (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x1409536B0 (PiSwInterfaceFree.c)
 */

void __fastcall PiSwFreeInterfaceList(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    PiSwInterfaceFree(v2);
  }
}
