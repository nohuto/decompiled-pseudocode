/*
 * XREFs of SmQueryStoreInformation @ 0x1406DAC6C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SmProcessCompressionInfoRequest @ 0x1406DAD58 (SmProcessCompressionInfoRequest.c)
 *     SmcProcessListRequest @ 0x1407B2668 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1407B94E0 (SmProcessRegistrationRequest.c)
 *     SmProcessListRequest @ 0x1409252DC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140925790 (SmProcessStatsRequest.c)
 *     SmcProcessStatsRequest @ 0x1409262D0 (SmcProcessStatsRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  char PreviousMode; // bl
  int v7[4]; // [rsp+30h] [rbp-28h]
  int v8[2]; // [rsp+40h] [rbp-18h]

  PreviousMode = a4;
  if ( a3 != 24 )
    return 3221225476LL;
  *(_OWORD *)v7 = *(_OWORD *)a2;
  *(_QWORD *)v8 = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225485LL;
  if ( v7[1] != 2 && v7[1] != 5 )
  {
    if ( v7[1] > 0x16u || (a1 = 4202752, !_bittest(&a1, v7[1])) )
    {
      if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
        return 3221225506LL;
    }
  }
  switch ( v7[1] )
  {
    case 22:
      LOBYTE(a4) = PreviousMode;
      return SmProcessCompressionInfoRequest(*(_QWORD *)&v7[2], (unsigned int)v8[0], a5, a4);
    case 8:
      return SmcProcessListRequest((unsigned int)&unk_140D241C0, v7[2], v8[0], a5, PreviousMode);
    case 15:
      LOBYTE(a4) = PreviousMode;
      return SmProcessRegistrationRequest(*(_QWORD *)&v7[2], (unsigned int)v8[0], a5, a4);
    case 2:
      return SmProcessStatsRequest(a1, v7[2], v8[0], a5, PreviousMode);
    case 5:
      return SmProcessListRequest(&SmGlobals, *(_QWORD *)&v7[2], (unsigned int)v8[0], a5, PreviousMode);
    case 13:
      return SmcProcessStatsRequest((unsigned int)&unk_140D241C0, v7[2], v8[0], a5, PreviousMode);
    default:
      return 3221225475LL;
  }
}
