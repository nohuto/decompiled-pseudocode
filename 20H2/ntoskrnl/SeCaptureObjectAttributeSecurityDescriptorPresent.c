/*
 * XREFs of SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x140205DFC
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     NtDuplicateToken @ 0x1405E7D20 (NtDuplicateToken.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectAttributeSecurityDescriptorPresent(__int64 a1, char a2, _BYTE *a3)
{
  *a3 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)(a1 + 32) )
        *a3 = 1;
    }
  }
  else if ( a1 && *(_QWORD *)(a1 + 32) )
  {
    *a3 = 1;
  }
  return 0LL;
}
