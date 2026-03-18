/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x140969AD0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1405BEFB0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1405BF130 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x1409697E0 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathSystem @ 0x140969A10 (SdbpGetPathSystem.c)
 * Callees:
 *     AslImageFileToArchitecture @ 0x14074D5D8 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x14074D604 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetProcessHostGuestArchitectures(__int16 *a1, _WORD *a2, __int16 *a3)
{
  int ProcessWowInfo; // ebx
  __int16 v7; // cx
  __int16 v9[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v9[0] = -1;
  ProcessWowInfo = AslEnvGetProcessWowInfo(v9, &v10);
  if ( ProcessWowInfo >= 0 )
  {
    if ( !a3 || (v7 = AslImageFileToArchitecture(*a3), v7 == -1) )
      v7 = v10;
    ProcessWowInfo = 0;
    *a1 = v9[0];
    *a2 = v7;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessWowInfo;
}
