/*
 * XREFs of SbGetContextDetailsById @ 0x18003E098
 * Callers:
 *     SbpDetermineDllContext @ 0x18003DA54 (SbpDetermineDllContext.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DE44 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetContextDetailsById(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 4 )
  {
    *a2 = (char *)&SbSupportedOsList + 32 * (int)a1;
    return 1LL;
  }
  return result;
}
