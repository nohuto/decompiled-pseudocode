/*
 * XREFs of _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30
 * Callers:
 *     _RtlAbsoluteToSelfRelativeSD@12 @ 0x4B2E6A00 (_RtlAbsoluteToSelfRelativeSD@12.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E (_RtlpQuerySecurityDescriptor@36.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  unsigned int v3; // ebx
  int v4; // edi
  int v5; // eax
  ULONG v6; // eax
  int v7; // ebx
  char *v8; // esi
  int v9; // eax
  int v10; // ebx
  int v12; // eax
  size_t v13; // [esp-Ch] [ebp-34h]
  size_t v14; // [esp-Ch] [ebp-34h]
  size_t v15; // [esp-8h] [ebp-30h]
  void *v16[2]; // [esp+4h] [ebp-24h] BYREF
  int v17; // [esp+Ch] [ebp-1Ch]
  const void *v18; // [esp+10h] [ebp-18h] BYREF
  void *Src; // [esp+14h] [ebp-14h] BYREF
  int v20; // [esp+18h] [ebp-10h] BYREF
  int Size; // [esp+1Ch] [ebp-Ch] BYREF
  int Size_4; // [esp+20h] [ebp-8h] BYREF
  int v23; // [esp+24h] [ebp-4h] BYREF

  RtlpQuerySecurityDescriptor(&Size_4, v16, &Size, &v18, &v20, &Src, &v23);
  v17 = Size_4;
  v5 = v20 + Size + Size_4;
  Size_4 = v20;
  v6 = v23 + 20 + v5;
  if ( v6 > *BufferLength )
  {
    *BufferLength = v6;
    return -1073741789;
  }
  else
  {
    HIDWORD(v15) = v4;
    if ( SelfRelativeSecurityDescriptor )
    {
      v13 = __PAIR64__(v3, v6);
      v7 = 0;
      memset(SelfRelativeSecurityDescriptor, 0, v13);
      *(_DWORD *)SelfRelativeSecurityDescriptor = *(_DWORD *)AbsoluteSecurityDescriptor;
      v8 = (char *)SelfRelativeSecurityDescriptor + 20;
      if ( v23 )
      {
        LODWORD(v14) = v23;
        memcpy((char *)SelfRelativeSecurityDescriptor + 20, Src, v14);
        v8 += v23;
        v9 = 20;
      }
      else
      {
        v9 = 0;
      }
      *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = v9;
      if ( Size_4 )
      {
        LODWORD(v14) = Size_4;
        memcpy(v8, v18, v14);
        v7 = v8 - (_BYTE *)SelfRelativeSecurityDescriptor;
        v8 += Size_4;
      }
      *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = v7;
      v10 = v17;
      if ( v17 )
      {
        LODWORD(v14) = v17;
        memcpy(v8, v16[1], v14);
        v12 = v8 - (_BYTE *)SelfRelativeSecurityDescriptor;
        v8 += v10;
        *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = v12;
      }
      if ( Size )
      {
        LODWORD(v15) = Size;
        memcpy(v8, v16[0], v15);
        *((_DWORD *)SelfRelativeSecurityDescriptor + 2) = v8 - (_BYTE *)SelfRelativeSecurityDescriptor;
      }
      *((_WORD *)SelfRelativeSecurityDescriptor + 1) |= 0x8000u;
      return 0;
    }
    else
    {
      return -1073741811;
    }
  }
}
