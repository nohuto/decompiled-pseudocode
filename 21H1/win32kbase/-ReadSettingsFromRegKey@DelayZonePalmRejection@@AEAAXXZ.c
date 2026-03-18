/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0021748
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C002133C (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C0021868 (RIMRegQueryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C025304C & 1) == 0 )
  {
    dword_1C0252D68 = 1;
    dword_1C025304C |= 1u;
    qword_1C0252D60 = (__int64)L"RejectionEnabled";
    qword_1C0252D70 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C0252D78 = 175;
    dword_1C0252D7C = 175;
    qword_1C0252D80 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C0252D88 = 250;
    dword_1C0252D8C = 250;
    qword_1C0252D90 = (__int64)L"DisableTimeThreshold";
    dword_1C0252D98 = 60000;
    dword_1C0252D9C = 60000;
    dword_1C0252D6C = 1;
  }
  v2 = (DelayZonePalmRejection **)&qword_1C0252D60;
  do
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\DelayZonePalmRejection");
    RIMRegQueryDWord(&DestinationString, *v2, *((unsigned int *)v2 + 2), (char *)v2 + 12);
    v2 += 2;
  }
  while ( v2 != &DelayZonePalmRejection::s_instance );
  *((_DWORD *)this + 24) = dword_1C0252D6C;
  *((_DWORD *)this + 25) = dword_1C0252D7C;
  *((_DWORD *)this + 26) = dword_1C0252D8C;
  *((_DWORD *)this + 27) = dword_1C0252D9C;
}
