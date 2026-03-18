/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C000B138
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C000BB18 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C000B258 (RIMRegQueryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C024D03C & 1) == 0 )
  {
    dword_1C024CD58 = 1;
    dword_1C024D03C |= 1u;
    qword_1C024CD50 = (__int64)L"RejectionEnabled";
    qword_1C024CD60 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C024CD68 = 175;
    dword_1C024CD6C = 175;
    qword_1C024CD70 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C024CD78 = 250;
    dword_1C024CD7C = 250;
    qword_1C024CD80 = (__int64)L"DisableTimeThreshold";
    dword_1C024CD88 = 60000;
    dword_1C024CD8C = 60000;
    dword_1C024CD5C = 1;
  }
  v2 = (DelayZonePalmRejection **)&qword_1C024CD50;
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
  *((_DWORD *)this + 24) = dword_1C024CD5C;
  *((_DWORD *)this + 25) = dword_1C024CD6C;
  *((_DWORD *)this + 26) = dword_1C024CD7C;
  *((_DWORD *)this + 27) = dword_1C024CD8C;
}
