/*
 * XREFs of IvtFindDevice @ 0x1404E7DC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIvtCheckIdPathMatch @ 0x1404E7510 (HalpIvtCheckIdPathMatch.c)
 *     IvtpGetNextInternalDeviceScope @ 0x1404E7E54 (IvtpGetNextInternalDeviceScope.c)
 */

char __fastcall IvtFindDevice(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v6; // rbx
  char *v7; // rdx
  char *NextInternalDeviceScope; // rax
  char *v9; // rsi

  v6 = a1;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 212) != *(unsigned __int16 *)(a2 + 8) )
    return 0;
  if ( !a3 || !*(_BYTE *)(a1 + 228) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextInternalDeviceScope = (char *)IvtpGetNextInternalDeviceScope(a1, v7);
      v9 = NextInternalDeviceScope;
      if ( !NextInternalDeviceScope )
        break;
      if ( HalpIvtCheckIdPathMatch(a2, NextInternalDeviceScope) )
      {
        if ( a4 )
          *a4 = *(unsigned __int16 *)(a2 + 12);
        return 1;
      }
      v7 = v9;
      a1 = v6;
    }
    return 0;
  }
  return 1;
}
