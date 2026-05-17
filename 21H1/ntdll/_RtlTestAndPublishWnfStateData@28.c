/*
 * XREFs of _RtlTestAndPublishWnfStateData@28 @ 0x4B33BFD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpWnfETWEventPublish@12 @ 0x4B33C482 (_RtlpWnfETWEventPublish@12.c)
 */

int __stdcall RtlTestAndPublishWnfStateData(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int updated; // esi
  int v8; // ecx
  int v10; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+8h] [ebp-8h]

  v10 = a1;
  v11 = a2;
  updated = NtUpdateWnfStateData((int)&v10, a4, a5, a3, a6, a7, 1);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v8 = 2147353486;
  if ( *(_BYTE *)v8 && updated >= 0 )
    RtlpWnfETWEventPublish(v10, v11);
  return updated;
}
