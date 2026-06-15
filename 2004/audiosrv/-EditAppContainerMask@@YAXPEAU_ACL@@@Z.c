/*
 * XREFs of ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x180008270
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 */

void __fastcall EditAppContainerMask(PACL pAcl)
{
  DWORD v2; // ebx
  LPVOID pAce; // [rsp+20h] [rbp-20h] BYREF
  _DWORD pSid1[4]; // [rsp+28h] [rbp-18h] BYREF

  pSid1[0] = 513;
  pSid1[1] = 251658240;
  v2 = 0;
  pSid1[2] = 3;
  for ( pSid1[3] = 4096; v2 < pAcl->AceCount; ++v2 )
  {
    pAce = 0LL;
    if ( !GetAce(pAcl, v2, &pAce) )
      break;
    if ( EqualSid(pSid1, (char *)pAce + 8) && !*(_BYTE *)pAce )
    {
      *((_BYTE *)pAce + 1) = 2;
      *((_DWORD *)pAce + 1) = 131099;
      return;
    }
  }
}
