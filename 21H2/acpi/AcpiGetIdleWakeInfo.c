/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C00952D0
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C001E928 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C001EF50 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     AcpiGetD3ColdCapability @ 0x1C0095480 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbp
  int v8; // ebx
  int v9; // ecx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  v6 = AMLIGetNamedChild(*(__int64 **)(a1 + 760), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v7 = (volatile signed __int32 *)v6;
  if ( v6 )
  {
    v8 = AMLIEvalNameSpaceObject(v6, (__int64)&v10, 0, 0LL);
    AMLIDereferenceHandleEx(v7);
    if ( v8 >= 0 )
    {
      if ( WORD1(v10) == 1 )
      {
        if ( (unsigned int)v11 >= 5 )
        {
          *a3 = 0;
        }
        else
        {
          v9 = v11 + 1;
          *a3 = v11 + 1;
          if ( v9 == 5 )
          {
            if ( (*(_DWORD *)(a1 + 1000) & 0x800LL) == 0 )
              v9 = 4;
            *a3 = v9;
          }
        }
      }
      else
      {
        v8 = -1073741436;
      }
      AMLIFreeDataBuffs((__int64)&v10);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( !_bittest64((const signed __int64 *)(a1 + 1000), 0x20u) )
      return 3221226021LL;
    *a3 = 4;
    return 0LL;
  }
}
