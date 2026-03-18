/*
 * XREFs of ?HKFindChildHotkeyForQueue@@YG_NPAUtagQ@@PAUtagHOTKEY@@PAPAUtagCHILDHOTKEY@@@Z @ 0x155E07
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     <none>
 */

char __userpurge HKFindChildHotkeyForQueue@<al>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagQ *a3,
        struct tagHOTKEY *a4,
        struct tagCHILDHOTKEY **a5)
{
  _DWORD *v5; // esi
  _DWORD *v6; // edx

  v5 = (_DWORD *)(a1 + 28);
  v6 = *(_DWORD **)(a1 + 28);
  *(_DWORD *)a3 = 0;
  while ( 1 )
  {
    if ( v6 == v5 )
      return 0;
    if ( *(_DWORD *)(*(v6 - 4) + 236) == a2 )
      break;
    v6 = (_DWORD *)*v6;
  }
  *(_DWORD *)a3 = v6 - 4;
  return 1;
}
