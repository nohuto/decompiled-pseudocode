/*
 * XREFs of _RtlpAddKnownObjectAce@32 @ 0x4B34B856
 * Callers:
 *     _RtlAddAccessAllowedObjectAce@28 @ 0x4B34AC40 (_RtlAddAccessAllowedObjectAce@28.c)
 *     _RtlAddAccessDeniedObjectAce@28 @ 0x4B34ACF0 (_RtlAddAccessDeniedObjectAce@28.c)
 *     _RtlAddAuditAccessObjectAce@36 @ 0x4B34AFA0 (_RtlAddAuditAccessObjectAce@36.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

int __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  int result; // eax
  unsigned int v11; // eax
  unsigned __int16 v12; // si
  _DWORD *v13; // edx
  int v14; // eax
  _DWORD *v15; // edx
  _DWORD *v16; // edi
  _DWORD *v17; // edi
  int DestinationSidLength; // [esp+Ch] [ebp-Ch]
  PVOID FirstFree; // [esp+10h] [ebp-8h] BYREF
  int v20; // [esp+14h] [ebp-4h]

  if ( !RtlValidSid(Sid) )
    return -1073741704;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return -1073741735;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v11 = a3 & 0xFFFFFF20;
    if ( v11 )
      return -1073741811;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  DestinationSidLength = 4 * Sid[1] + 8;
  v12 = 4 * Sid[1] + 20;
  if ( a5 )
    v12 = 4 * Sid[1] + 36;
  v20 = a5 != 0;
  if ( a6 )
  {
    v12 += 16;
    v20 = (a5 != 0) | 2;
  }
  v13 = FirstFree;
  if ( !FirstFree || (char *)FirstFree + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_BYTE *)FirstFree + 1) = a3;
  *(_BYTE *)v13 = a8;
  v13[1] = a4;
  v14 = v20;
  *((_WORD *)v13 + 1) = v12;
  v13[2] = v14;
  v15 = v13 + 3;
  if ( a5 )
  {
    v16 = v15;
    v15 += 4;
    *v16++ = *a5;
    *v16++ = a5[1];
    *v16 = a5[2];
    v16[1] = a5[3];
  }
  if ( a6 )
  {
    v17 = v15;
    v15 += 4;
    *v17++ = *a6;
    *v17++ = a6[1];
    *v17 = a6[2];
    v17[1] = a6[3];
  }
  RtlCopySid(DestinationSidLength, v15, Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = 4;
  return result;
}
