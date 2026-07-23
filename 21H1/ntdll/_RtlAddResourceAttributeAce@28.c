/*
 * XREFs of _RtlAddResourceAttributeAce@28 @ 0x4B34B260
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpConvertAbsoluteToRelativeSecurityAttribute@12 @ 0x4B34B9A0 (_RtlpConvertAbsoluteToRelativeSecurityAttribute@12.c)
 *     _RtlpValidAttributeInfo@4 @ 0x4B34CC0F (_RtlpValidAttributeInfo@4.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  _BYTE *Heap; // ebx
  NTSTATUS v8; // esi
  unsigned __int8 AclRevision; // al
  unsigned __int16 v10; // ax
  _DWORD *v11; // eax
  PACL v12; // ebx
  int v13; // esi
  int v14; // ecx
  unsigned __int8 *v15; // edx
  char *v16; // eax
  __int16 v17; // cx
  unsigned __int8 v18; // al
  size_t v20; // [esp-4h] [ebp-140h]
  size_t v21; // [esp-4h] [ebp-140h]
  SIZE_T v22; // [esp-4h] [ebp-140h]
  unsigned int v23; // [esp+Ch] [ebp-130h]
  NTSTATUS v24; // [esp+10h] [ebp-12Ch]
  PVOID FirstFree; // [esp+14h] [ebp-128h] BYREF
  PSID SourceSid; // [esp+18h] [ebp-124h]
  PULONG v27; // [esp+1Ch] [ebp-120h]
  unsigned int Size; // [esp+20h] [ebp-11Ch] BYREF
  int Size_4; // [esp+24h] [ebp-118h]
  PCLAIM_SECURITY_ATTRIBUTES_INFORMATION v30; // [esp+28h] [ebp-114h]
  unsigned __int8 v31; // [esp+2Fh] [ebp-10Dh]
  _BYTE *Buf2; // [esp+30h] [ebp-10Ch] BYREF
  __int16 v33; // [esp+34h] [ebp-108h]
  _BYTE Src[256]; // [esp+38h] [ebp-104h] BYREF

  v30 = AttributeInfo;
  v27 = ReturnLength;
  LODWORD(v20) = 256;
  FirstFree = 0;
  Heap = 0;
  Buf2 = 0;
  SourceSid = Sid;
  v33 = 256;
  memset(Src, 0, v20);
  Size = 256;
  if ( !ReturnLength )
    return -1073741811;
  *v27 = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  LODWORD(v21) = 6;
  if ( memcmp((char *)Sid + 2, &Buf2, v21) )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) != 1 || *((_DWORD *)Sid + 2) )
  {
    v8 = -1073741811;
    goto LABEL_40;
  }
  AclRevision = Acl->AclRevision;
  v31 = AclRevision;
  if ( AclRevision > 4u )
    return -1073741735;
  Size_4 = 4;
  if ( AceRevision > 4 )
    return -1073741735;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    v31 = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0
    || AccessMask
    || !(unsigned __int8)RtlpValidAttributeInfo(v30)
    || v30->AttributeCount != 1 )
  {
    return -1073741811;
  }
  Heap = Src;
  Buf2 = Src;
  v8 = RtlpConvertAbsoluteToRelativeSecurityAttribute((int)v30->Attribute.pAttributeV1, Src, (int)&Size);
  v24 = v8;
  if ( v8 == -1073741789 )
  {
    LODWORD(v22) = Size;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v22);
    Buf2 = Heap;
    if ( !Heap )
      return -1073741801;
    v8 = RtlpConvertAbsoluteToRelativeSecurityAttribute((int)v30->Attribute.pAttributeV1, Heap, (int)&Size);
    v24 = v8;
  }
  if ( v8 < 0 )
    goto LABEL_40;
  if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
  {
    if ( Size > 0xFFFF
      || (v10 = 4 * (Size_4 + *((unsigned __int8 *)SourceSid + 1)), (unsigned __int16)(v10 + Size) < v10) )
    {
      v8 = -1073741675;
      goto LABEL_40;
    }
    v23 = 0;
    v30 = (PCLAIM_SECURITY_ATTRIBUTES_INFORMATION)(unsigned __int16)(v10 + Size);
    v11 = v27;
    Size_4 = 8;
    *v27 = 8;
    if ( Acl->AceCount )
    {
      v12 = Acl + 1;
      do
      {
        v13 = *v11 + v12->AclSize;
        *v11 = v13;
        v12 = (PACL)((char *)v12 + v12->AclSize);
        Size_4 = v13;
        ++v23;
      }
      while ( v23 < Acl->AceCount );
      Heap = Buf2;
    }
    v14 = Size_4 + (unsigned __int16)v30;
    *v11 = v14;
    Size_4 = v14;
    if ( FirstFree )
    {
      v8 = v24;
      v15 = (unsigned __int8 *)SourceSid;
      if ( (char *)FirstFree + (unsigned __int16)v30 <= (char *)Acl + Acl->AclSize )
      {
        v16 = (char *)FirstFree;
        LODWORD(v22) = SourceSid;
        *((_DWORD *)FirstFree + 1) = 0;
        v16[1] = AceFlags;
        v17 = (__int16)v30;
        *v16 = 18;
        *((_WORD *)v16 + 1) = v17;
        RtlCopySid(4 * v15[1] + 8, v16 + 8, (PSID)v22);
        LODWORD(v22) = Size;
        memcpy((char *)FirstFree + 4 * *((unsigned __int8 *)SourceSid + 1) + 16, Heap, v22);
        v18 = v31;
        ++Acl->AceCount;
        Acl->AclRevision = v18;
        goto LABEL_40;
      }
      v14 = Size_4;
    }
    v8 = -1073741671;
    *v27 = (v14 + 3) & 0xFFFFFFFC;
    goto LABEL_40;
  }
  v8 = -1073741705;
LABEL_40:
  if ( Heap && Heap != Src )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}
