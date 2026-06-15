/*
 * XREFs of sub_1800208B0 @ 0x1800208B0
 * Callers:
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180023150 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800208B0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx

  v3 = qword_18004FE78;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x3Cu, &stru_1800445C8, a2);
  }
  v5 = *(_QWORD **)(v3 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_DWORD *)(v6 + 212) == a2 && *(_DWORD *)(v6 + 596) && *(_QWORD *)(v6 + 544) )
      sub_180020668(v3, *(const WCHAR **)(v6 + 24), *(_QWORD *)(v6 + 640), 1, a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
