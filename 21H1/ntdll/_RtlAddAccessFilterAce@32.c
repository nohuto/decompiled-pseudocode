/*
 * XREFs of _RtlAddAccessFilterAce@32 @ 0x4B34AD40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlIsValidProcessTrustLabelSid@4 @ 0x4B3466F0 (_RtlIsValidProcessTrustLabelSid@4.c)
 */

int __stdcall RtlAddAccessFilterAce(
        PACL Acl,
        unsigned int a2,
        int a3,
        char *Sid,
        char a5,
        int a6,
        void *a7,
        unsigned __int16 a8)
{
  unsigned __int8 AclRevision; // cl
  __int16 v10; // dx
  _DWORD *v11; // ebx
  unsigned __int8 v12; // al
  size_t v13; // [esp-4h] [ebp-2Ch]
  PVOID FirstFree; // [esp+Ch] [ebp-1Ch] BYREF
  void *Src; // [esp+10h] [ebp-18h]
  unsigned int v16; // [esp+14h] [ebp-14h] BYREF
  unsigned __int8 v17; // [esp+1Bh] [ebp-Dh]
  int Buf2; // [esp+1Ch] [ebp-Ch] BYREF
  __int16 v19; // [esp+20h] [ebp-8h]

  Src = a7;
  Buf2 = 0;
  v19 = 256;
  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( !a7 || a8 == 0xFFFF || a8 < 6u || *(_DWORD *)Src != 2020897377 || a5 != 21 )
    return -1073741811;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid(Sid) )
      return -1073741811;
  }
  else
  {
    LODWORD(v13) = 6;
    if ( memcmp(Sid + 2, &Buf2, v13) || Sid[1] != 1 || *((_DWORD *)Sid + 2) )
      return -1073741811;
  }
  AclRevision = Acl->AclRevision;
  v17 = AclRevision;
  if ( AclRevision > 4u || a2 > 4 )
    return -1073741735;
  if ( AclRevision <= a2 )
    v17 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v16 = 4 * (unsigned __int8)Sid[1] + 16;
  Buf2 = a8;
  if ( (RtlULongPtrAdd((a8 + 3) & 0xFFFFFFFC, v16, (int *)&v16) & 0x80000000) != 0 )
    return -1073741675;
  v10 = v16;
  if ( v16 > 0xFFFF )
    return -1073741811;
  v11 = FirstFree;
  if ( !FirstFree || (char *)FirstFree + v16 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_BYTE *)FirstFree + 1) = a3;
  v11[1] = a6;
  *(_BYTE *)v11 = 21;
  *((_WORD *)v11 + 1) = v10;
  RtlCopySid(4 * (unsigned __int8)Sid[1] + 8, v11 + 2, Sid);
  LODWORD(v13) = Buf2;
  memcpy(&v11[(unsigned __int8)Sid[1] + 4], Src, v13);
  v12 = v17;
  ++Acl->AceCount;
  Acl->AclRevision = v12;
  return 0;
}
