/*
 * XREFs of _RtlTimeToElapsedTimeFields@8 @ 0x4B344E50
 * Callers:
 *     <none>
 * Callees:
 *     TimeToDaysAndFraction @ 0x4B344F4F (TimeToDaysAndFraction.c)
 */

void __cdecl RtlTimeToElapsedTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  unsigned int v2; // edi
  CSHORT v3; // [esp+Ch] [ebp-8h]
  unsigned int v4; // [esp+10h] [ebp-4h] BYREF

  TimeToDaysAndFraction(&v4);
  v2 = v4 / 0x3E8;
  TimeFields->Milliseconds = v4 % 0x3E8;
  *(_DWORD *)&TimeFields->Year = 0;
  TimeFields->Day = v3;
  TimeFields->Hour = v2 / 0x3C / 0x3C;
  TimeFields->Minute = v2 / 0x3C % 0x3C;
  TimeFields->Second = v2 % 0x3C;
}
