/*
 * XREFs of ?SstpHandlePoScenarioChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180085430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandlePoScenarioChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax

  v5 = a4[5];
  v6 = *a5 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a5 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v6 = a5[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v6 )
    v7 = v5 & 0xFFFFFFFB;
  else
    v7 = v5 | 4;
  a4[5] = v7;
  return 0LL;
}
