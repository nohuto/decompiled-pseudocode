/*
 * XREFs of _AVrfpDetectVerifiedExports@8 @ 0x4B338B79
 * Callers:
 *     _AVrfpDllLoadNotificationInternal@4 @ 0x4B338C3D (_AVrfpDllLoadNotificationInternal@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _RtlInitAnsiString@8 @ 0x4B2F4FE0 (_RtlInitAnsiString@8.c)
 */

char __fastcall AVrfpDetectVerifiedExports(int a1, int a2)
{
  _DWORD *v2; // edi
  char v3; // bl
  _DWORD *v4; // esi
  int v7; // [esp+10h] [ebp-10h]
  PVOID ProcedureAddress; // [esp+14h] [ebp-Ch] BYREF
  _STRING DestinationString; // [esp+18h] [ebp-8h] BYREF
  PVOID *retaddr; // [esp+24h] [ebp+4h]

  v7 = 0;
  v2 = *(_DWORD **)(a1 + 12);
  v3 = 0;
  if ( *v2 )
  {
    v4 = *(_DWORD **)(a1 + 12);
    do
    {
      if ( !v4[1] )
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)*v4);
        if ( LdrGetProcedureAddressForCaller(*(PVOID *)(a2 + 24), &DestinationString, 0, &ProcedureAddress, 1u, retaddr) >= 0 )
        {
          v4[1] = ProcedureAddress;
          if ( (AVrfpDebug & 2) != 0 )
            DbgPrint("AVRF: (%ws) %s export found. \n", *(_DWORD *)(a2 + 48), *v4);
          v3 = 1;
        }
        else if ( (AVrfpDebug & 2) != 0 )
        {
          DbgPrint("AVRF: warning: did not find `%s' export in %ws . \n", *v4, *(_DWORD *)(a2 + 48));
        }
      }
      ++v7;
      v4 = &v2[3 * v7];
    }
    while ( *v4 );
  }
  return v3;
}
