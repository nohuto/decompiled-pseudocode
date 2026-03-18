/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C009C820
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C00169EC (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0017D60 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     AcpiGetD3ColdCapability @ 0x1C009BC10 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D6E0 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rbp
  int v8; // edi
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-28h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  result = (__int64)AMLIGetNamedChild(*(__int64 **)(a1 + 720), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = 0;
  v7 = result;
  if ( result )
  {
    v8 = AMLIEvalNameSpaceObject((unsigned __int64 *)result, (__int64)&v9, 0, 0LL);
    AMLIDereferenceHandleEx(v7);
    if ( v8 >= 0 )
    {
      if ( WORD1(v9) == 1 )
      {
        if ( (unsigned int)v10 < 5 )
          v6 = v10 + 1;
        *a3 = v6;
        if ( v6 == 5 )
        {
          if ( (*(_DWORD *)(a1 + 960) & 0x800LL) == 0 )
            v6 = 4;
          *a3 = v6;
        }
      }
      else
      {
        v8 = -1073741436;
      }
      AMLIFreeDataBuffs((__int64)&v9);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 960) & 0x100000000LL) == 0 )
      return 3221226021LL;
    *a3 = 4;
  }
  return result;
}
