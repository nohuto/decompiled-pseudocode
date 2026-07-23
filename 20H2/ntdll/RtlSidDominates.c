/*
 * XREFs of RtlSidDominates @ 0x18007BC40
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E8DB4 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     RtlEqualSid @ 0x180038310 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v6; // edx
  int v7; // ecx
  BOOLEAN v8; // al
  BOOLEAN v9; // cl
  int v11; // eax
  unsigned int v12; // edx
  int v13; // eax

  *Dominates = 0;
  v6 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v6 )
    v6 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v6 )
    return -1073741811;
  v7 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v7 )
    return -1073741811;
  v8 = RtlEqualSid(Sid1, Sid2);
  v9 = 1;
  if ( !v8 )
  {
    v11 = *((unsigned __int8 *)Sid1 + 1);
    if ( (_BYTE)v11 )
      v12 = *((_DWORD *)Sid1 + (unsigned int)(v11 - 1) + 2);
    else
      v12 = 0;
    v13 = *((unsigned __int8 *)Sid2 + 1);
    if ( (_BYTE)v13 )
    {
      if ( v12 < *((_DWORD *)Sid2 + (unsigned int)(v13 - 1) + 2) )
        v9 = 0;
    }
  }
  *Dominates = v9;
  return 0;
}
