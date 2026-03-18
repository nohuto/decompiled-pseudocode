/*
 * XREFs of NtUserGetPointerProprietaryId @ 0x1C013A030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C0198E58 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerProprietaryId(CTouchProcessor *a1, struct _GUID *a2)
{
  __int64 v3; // rdx
  int v4; // ebx
  struct _GUID v6; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v4 = 0;
  if ( CTouchProcessor::GetPointerProprietaryId(a1, (unsigned int)a1, &v6) )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct _GUID *)MmUserProbeAddress;
    *a2 = v6;
    return 1;
  }
  else
  {
    UserSetLastError(232LL, v3);
  }
  return v4;
}
