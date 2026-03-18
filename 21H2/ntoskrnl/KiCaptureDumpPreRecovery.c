/*
 * XREFs of KiCaptureDumpPreRecovery @ 0x140579060
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405788B0 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoDemoteToTriageDump @ 0x140551F2C (IoDemoteToTriageDump.c)
 *     IoWritePristineTriageDump @ 0x140553968 (IoWritePristineTriageDump.c)
 */

__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  result = (unsigned int)KiBugcheckRecoveryDumpPolicy;
  *a2 = 0;
  if ( (_DWORD)result )
  {
    if ( !KiPristineTriageDump || (_DWORD)result == 1 )
    {
      if ( !IoDemoteToTriageDump() )
        return 3221225473LL;
      *a2 = 1;
    }
    return IoWritePristineTriageDump(
             KiBugCheckData,
             qword_140C2BD88,
             xmmword_140C2BD90,
             *((__int64 *)&xmmword_140C2BD90 + 1),
             qword_140C2BDA0,
             KiCrashDumpContext,
             qword_140C2BDC8,
             qword_140C2BDD0 == 0);
  }
  return result;
}
