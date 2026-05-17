/*
 * XREFs of _RtlPublishWnfStateData@24 @ 0x4B2F1FE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpWnfETWEventPublish@12 @ 0x4B33C482 (_RtlpWnfETWEventPublish@12.c)
 */

int __stdcall RtlPublishWnfStateData(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int updated; // esi
  int v7; // ecx
  int v9; // [esp+4h] [ebp-Ch] BYREF
  int v10; // [esp+8h] [ebp-8h]

  v9 = a1;
  v10 = a2;
  updated = NtUpdateWnfStateData(&v9, a4, a5, a3, a6, 0, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v7 = 2147353486;
  if ( *(_BYTE *)v7 && updated >= 0 )
    RtlpWnfETWEventPublish(v9, v10);
  return updated;
}
