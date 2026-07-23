/*
 * XREFs of LdrpCompareServiceChecksum @ 0x18007DD5C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x18007DB10 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 */

bool __fastcall LdrpCompareServiceChecksum(void *a1, void *a2)
{
  __int64 v3; // rdx
  _DWORD *RcConfig; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rcx

  RcConfig = LdrpGetRcConfig(a1, (__int64)a2, 0, 1);
  if ( !RcConfig )
    return 0;
  v5 = LdrpGetRcConfig(a2, v3, 0, 0);
  if ( !v5 )
    return 0;
  if ( *RcConfig != -20054323 || *v5 != -20054323 )
    return 1;
  v6 = *(_QWORD *)(RcConfig + 7) - *(_QWORD *)(v5 + 7);
  if ( !v6 )
    v6 = *(_QWORD *)(RcConfig + 9) - *(_QWORD *)(v5 + 9);
  return !v6;
}
