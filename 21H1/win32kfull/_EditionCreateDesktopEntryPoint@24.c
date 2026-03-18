/*
 * XREFs of _EditionCreateDesktopEntryPoint@24 @ 0xF2188
 * Callers:
 *     <none>
 * Callees:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _SetLastNtError@4 @ 0x1B6D51 (_SetLastNtError@4.c)
 */

int __stdcall EditionCreateDesktopEntryPoint(int a1, int a2, int a3, unsigned int a4, PVOID Object, int a6)
{
  int v6; // eax
  NTSTATUS Desktop; // eax
  struct _NT_TIB *v8; // ecx
  int v9; // esi
  int v11; // [esp-4h] [ebp-38h]
  int v12; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v12 = 0;
  EnterCrit(0, 1);
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x20000000) != 0 )
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 416) + 12) & 0x40;
  else
    v6 = 0;
  if ( v6 )
  {
    v11 = 5;
LABEL_14:
    v8 = (struct _NT_TIB *)v11;
    goto LABEL_15;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v11 = 87;
    goto LABEL_14;
  }
  ms_exc.registration.TryLevel = 0;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ms_exc.registration.TryLevel = -2;
  Desktop = xxxCreateDesktopEx(a1, a4, (int)Object, a6, (HANDLE *)&v12, 0);
  if ( Desktop < 0 )
  {
    v12 = 0;
    v8 = (struct _NT_TIB *)RtlNtStatusToDosError(Desktop);
LABEL_15:
    UserSetLastError(v8);
  }
  v9 = v12;
  UserSessionSwitchLeaveCrit();
  return v9;
}
