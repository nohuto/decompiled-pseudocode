/*
 * XREFs of KiParseLoadOptions @ 0x1409A4170
 * Callers:
 *     KiInitializeXSave @ 0x14099E320 (KiInitializeXSave.c)
 * Callees:
 *     KiMatchLoadOption @ 0x1409A41F4 (KiMatchLoadOption.c)
 */

void __fastcall KiParseLoadOptions(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = 0LL;
    if ( (unsigned __int8)KiMatchLoadOption(a1, "XSAVEPOLICY", 11LL, &v2) )
      KeXSavePolicyId = v2;
    if ( (unsigned __int8)KiMatchLoadOption(a1, "XSAVEREMOVEFEATURE", 18LL, &v2) && v2 )
      KeTestRemovedFeatureMask = v2 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (unsigned __int8)KiMatchLoadOption(a1, "XSAVEDISABLE", 12LL, &v2) )
      KeTestDisableXSave = v2 != 0;
  }
}
