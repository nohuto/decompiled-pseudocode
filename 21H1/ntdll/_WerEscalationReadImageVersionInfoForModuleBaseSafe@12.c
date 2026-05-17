/*
 * XREFs of _WerEscalationReadImageVersionInfoForModuleBaseSafe@12 @ 0x4B2DA76C
 * Callers:
 *     _LdrpRecordUnloadEvent@4 @ 0x4B2DA5AD (_LdrpRecordUnloadEvent@4.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     ModuleAccessFilter @ 0x4B33B678 (ModuleAccessFilter.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(unsigned int a1, int a2, int a3)
{
  int result; // eax
  int v5; // [esp+1Ch] [ebp-20h] BYREF
  int v6; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v6 = a2;
  ms_exc.registration.TryLevel = 0;
  if ( a2 )
    goto LABEL_2;
  result = RtlImageNtHeaderEx(3, a1, 0, 0, &v5);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(v5 + 80);
LABEL_2:
    WerEscalationReadImageVersionInfoForModuleBase(a1, a3);
    ms_exc.registration.TryLevel = -2;
    return 0;
  }
  ms_exc.registration.TryLevel = -2;
  return result;
}
