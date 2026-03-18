/*
 * XREFs of strchr @ 0x1403CF2B0
 * Callers:
 *     MiSnapThunk @ 0x14074604C (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x14092D82C (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x140A47DA8 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140A48B9C (EmpParseTargetRuleStringIndexList.c)
 *     PipSmBiosGetString @ 0x140A55950 (PipSmBiosGetString.c)
 *     CmpGetToken @ 0x140A5A974 (CmpGetToken.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char v2; // al
  char *v3; // r8
  char v4; // r9

  v2 = *Str;
  v3 = 0LL;
  if ( *Str )
  {
    v4 = *Str;
    do
    {
      v2 = v4;
      if ( v4 == (_BYTE)Val )
        break;
      v2 = *++Str;
      v4 = *Str;
    }
    while ( *Str );
  }
  if ( v2 == (_BYTE)Val )
    return (char *)Str;
  return v3;
}
