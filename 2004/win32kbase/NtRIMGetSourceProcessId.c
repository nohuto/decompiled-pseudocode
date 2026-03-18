/*
 * XREFs of NtRIMGetSourceProcessId @ 0x1C0156AD0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00506D8 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetSourceProcessId @ 0x1C0159D20 (RIMGetSourceProcessId.c)
 */

__int64 __fastcall NtRIMGetSourceProcessId(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetSourceProcessId(a1, a2, a3);
  else
    return 3221225506LL;
}
