/*
 * XREFs of PiSwFreeInterfaceList @ 0x140746A18
 * Callers:
 *     PiSwProcessRemove @ 0x14072E868 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x14072FF5C (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x140730A54 (PiSwInterfaceFree.c)
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
