/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x140372788
 * Callers:
 *     NtSetDefaultLocale @ 0x1407F42D0 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x1407F44F0 (ExpSetPendingUILanguage.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x140642A44 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140642CDC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlOpenCurrentUser @ 0x1407F4A70 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 *     RtlIsMultiUsersInSessionSku @ 0x1409B9200 (RtlIsMultiUsersInSessionSku.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(int a1, __int64 a2, HANDLE *a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    return 3221225485LL;
  v4 = dword_140C4EF70;
  if ( !dword_140C4EF70 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      v4 = 1;
    else
      v4 = ((unsigned __int8)RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140C4EF70 = v4;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return RtlOpenCurrentUser(8u, a3);
  v7 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v7 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v7, a3);
  if ( (_DWORD)v7 != 1 )
    return 3221225701LL;
  v8 = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v7, a2, a3, &v8);
}
