/*
 * XREFs of _RtlQuerySecurityObject@20 @ 0x4B336460
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateSecurityDescriptorRelative@8 @ 0x4B2D92C5 (_RtlCreateSecurityDescriptorRelative@8.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlpFilterSacl@16 @ 0x4B348981 (_RtlpFilterSacl@16.c)
 */

NTSTATUS __cdecl RtlQuerySecurityObject(
        PSECURITY_DESCRIPTOR ObjectDescriptor,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ResultantDescriptor,
        ULONG DescriptorLength,
        PULONG ReturnLength)
{
  unsigned int v5; // ecx
  char v6; // si
  unsigned int v7; // edi
  char *v8; // edx
  __int16 v9; // ax
  char *v10; // edx
  __int16 v11; // ax
  char *v12; // esi
  char *v13; // esi
  ULONG v14; // ecx
  int v15; // edx
  char *v16; // edi
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // eax
  __int16 v23; // cx
  __int16 v24; // cx
  int v25; // eax
  __int16 v26; // ax
  size_t v28; // [esp-4h] [ebp-3Ch]
  SECURITY_INFORMATION v29; // [esp+Ch] [ebp-2Ch]
  SECURITY_INFORMATION v30; // [esp+10h] [ebp-28h]
  char *Src; // [esp+18h] [ebp-20h]
  size_t v32; // [esp+1Ch] [ebp-1Ch]
  char *v33; // [esp+24h] [ebp-14h]
  size_t Size; // [esp+28h] [ebp-10h]
  int v35; // [esp+34h] [ebp-4h] BYREF
  SECURITY_INFORMATION SecurityInformationa; // [esp+44h] [ebp+Ch]

  v5 = 0;
  v6 = SecurityInformation;
  v7 = 0;
  v32 = 0LL;
  Size = 0LL;
  v35 = 0;
  Src = 0;
  v33 = 0;
  v29 = SecurityInformation & 2;
  if ( (SecurityInformation & 2) != 0 )
  {
    v8 = (char *)*((_DWORD *)ObjectDescriptor + 2);
    if ( *((__int16 *)ObjectDescriptor + 1) < 0 )
      v8 = v8 != 0 ? (char *)ObjectDescriptor + (_DWORD)v8 : 0;
    Src = v8;
    if ( v8 )
      LODWORD(v32) = (4 * (unsigned __int8)v8[1] + 11) & 0xFFFFFFFC;
  }
  v30 = SecurityInformation & 4;
  if ( (SecurityInformation & 4) != 0 )
  {
    v9 = *((_WORD *)ObjectDescriptor + 1);
    if ( (v9 & 4) != 0 )
    {
      v10 = (char *)*((_DWORD *)ObjectDescriptor + 4);
      if ( v9 < 0 )
        v10 = v10 != 0 ? (char *)ObjectDescriptor + (_DWORD)v10 : 0;
      HIDWORD(Size) = v10;
      if ( v10 )
      {
        v7 = (*((unsigned __int16 *)v10 + 1) + 3) & 0xFFFFFFFC;
        LODWORD(Size) = v7;
      }
    }
    else
    {
      HIDWORD(Size) = 0;
    }
  }
  if ( (SecurityInformation & 0x1F8) != 0 )
  {
    v11 = *((_WORD *)ObjectDescriptor + 1);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = (char *)*((_DWORD *)ObjectDescriptor + 3);
      if ( v11 < 0 )
        v12 = v12 != 0 ? (char *)ObjectDescriptor + (_DWORD)v12 : 0;
      if ( v12 )
      {
        RtlpFilterSacl(&v35, SecurityInformation & 0x1F8);
        v5 = 0;
      }
    }
    v6 = SecurityInformation;
  }
  SecurityInformationa = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    v13 = (char *)*((_DWORD *)ObjectDescriptor + 1);
    if ( *((__int16 *)ObjectDescriptor + 1) < 0 )
      v13 = v13 != 0 ? (char *)ObjectDescriptor + (_DWORD)v13 : 0;
    v33 = v13;
    if ( v13 )
    {
      v5 = (4 * (unsigned __int8)v13[1] + 11) & 0xFFFFFFFC;
      HIDWORD(v32) = v5;
    }
  }
  v14 = v7 + v5 + v35 + v32 + 20;
  *ReturnLength = v14;
  if ( v14 > DescriptorLength || !ResultantDescriptor )
    return -1073741789;
  RtlCreateSecurityDescriptorRelative(ResultantDescriptor);
  v16 = (char *)ResultantDescriptor + 20;
  v17 = *((_WORD *)ResultantDescriptor + 1) | 0x8000;
  *((_WORD *)ResultantDescriptor + 1) = v17;
  v18 = v17;
  if ( v15 )
  {
    v19 = v17;
    if ( v35 )
    {
      RtlpFilterSacl(&v35, v15);
      v16 += v35;
      v19 = *((_WORD *)ResultantDescriptor + 1);
      *((_DWORD *)ResultantDescriptor + 3) = 20;
    }
    v20 = v19 | *((_WORD *)ObjectDescriptor + 1) & 0x2830;
    *((_WORD *)ResultantDescriptor + 1) = v20;
    v18 = v20;
  }
  v21 = v18;
  if ( v30 )
  {
    if ( (_DWORD)Size )
    {
      LODWORD(v28) = Size;
      memmove(v16, (const void *)HIDWORD(Size), v28);
      v18 = *((_WORD *)ResultantDescriptor + 1);
      v22 = v16 - (_BYTE *)ResultantDescriptor;
      v16 += Size;
      *((_DWORD *)ResultantDescriptor + 4) = v22;
    }
    v21 = v18 | *((_WORD *)ObjectDescriptor + 1) & 0x140C;
    *((_WORD *)ResultantDescriptor + 1) = v21;
  }
  v23 = v21;
  if ( SecurityInformationa )
  {
    v24 = v21;
    if ( HIDWORD(v32) )
    {
      LODWORD(v28) = HIDWORD(v32);
      memmove(v16, v33, v28);
      v24 = *((_WORD *)ResultantDescriptor + 1);
      v25 = v16 - (_BYTE *)ResultantDescriptor;
      v16 += HIDWORD(v32);
      *((_DWORD *)ResultantDescriptor + 1) = v25;
    }
    v26 = v24 | *((_WORD *)ObjectDescriptor + 1) & 1;
    *((_WORD *)ResultantDescriptor + 1) = v26;
    v23 = v26;
  }
  if ( v29 )
  {
    if ( (_DWORD)v32 )
    {
      LODWORD(v28) = v32;
      memmove(v16, Src, v28);
      v23 = *((_WORD *)ResultantDescriptor + 1);
      *((_DWORD *)ResultantDescriptor + 2) = v16 - (_BYTE *)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) = v23 | *((_WORD *)ObjectDescriptor + 1) & 2;
  }
  return 0;
}
