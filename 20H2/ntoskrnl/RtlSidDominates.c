/*
 * XREFs of RtlSidDominates @ 0x14020FB40
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402E37EC (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140606E90 (SeTokenCanImpersonate.c)
 *     SepValidLabelSubjectContext @ 0x1406305E4 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140630CB0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2070 (memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v4; // r9d
  int v7; // eax
  __int16 v8; // di
  __int16 v9; // bp
  bool v10; // al
  BOOLEAN v11; // al
  unsigned int v13; // edx

  *Dominates = 0;
  v4 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v4 )
    return -1073741811;
  v7 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v7 )
    return -1073741811;
  v8 = HIBYTE(*(_WORD *)Sid1);
  v9 = HIBYTE(*(_WORD *)Sid2);
  v10 = *(_WORD *)Sid1 == *(_WORD *)Sid2 && !memcmp(Sid1, Sid2, 4LL * (unsigned __int8)v8 + 8);
  v11 = 1;
  if ( !v10 )
  {
    v13 = (_BYTE)v8 ? *((_DWORD *)Sid1 + (unsigned int)(unsigned __int8)v8 + 1) : 0;
    if ( (_BYTE)v9 && v13 < *((_DWORD *)Sid2 + (unsigned int)(unsigned __int8)v9 + 1) )
      v11 = 0;
  }
  *Dominates = v11;
  return 0;
}
