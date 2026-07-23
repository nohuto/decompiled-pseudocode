/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800FC490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     GetNextWchar @ 0x1800FC324 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800FC41C (RtlComputeLfnChecksum.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  UCHAR v4; // si
  char v8; // r12
  unsigned int v9; // ebp
  char v10; // r8
  __int16 NextWchar; // ax
  unsigned int v12; // edi
  bool v13; // zf
  unsigned __int16 v14; // ax
  __int64 v15; // rcx
  int v16; // eax
  USHORT v17; // r11
  unsigned int i; // r8d
  __int16 v19; // dx
  __int64 v20; // rax
  WCHAR v21; // dx
  unsigned int v22; // esi
  ULONG j; // edi
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  int v26; // eax
  ULONG v27; // r9d
  USHORT v28; // ax
  int v29; // r11d
  USHORT v30; // r9
  __int64 v31; // r8
  WCHAR *v32; // r10
  __int16 v33; // ax
  unsigned __int16 v34; // cx
  unsigned int v35; // edi
  char v36; // r15
  __int64 v37; // rax
  char v38; // cl
  __int16 v39; // r8
  PUNICODE_STRING v40; // rbp
  _WORD *v41; // r14
  unsigned __int16 v42; // ax
  unsigned __int16 v43; // cx
  ULONG ExtensionLength; // eax
  unsigned int NameLength; // edx
  unsigned int v46; // ecx
  unsigned int v47; // r8d
  int v48; // eax
  unsigned int v50; // [rsp+24h] [rbp-64h] BYREF
  PUNICODE_STRING v51; // [rsp+28h] [rbp-60h]
  unsigned int v52[6]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v51 = Name8dot3;
  if ( !AllowExtendedCharacters || (v8 = 1, !NlsMbOemCodePageTag) )
    v8 = 0;
  if ( !Context->NameLength )
  {
    v9 = -1;
    v50 = 0;
    if ( !Name->Length || (v10 = 1, *Name->Buffer != 46) )
      v10 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(&Name->Length, &v50, v10, AllowExtendedCharacters);
      if ( !NextWchar )
        break;
      v10 = 0;
      if ( NextWchar == 46 )
        v9 = v50;
    }
    v12 = 0;
    v13 = v9 == Name->Length >> 1;
    v50 = 0;
    Context->NameLength = 0;
    if ( v13 )
      v9 = -1;
    v52[0] = v9;
    while ( 1 )
    {
      v14 = GetNextWchar(&Name->Length, &v50, 1, AllowExtendedCharacters);
      v15 = v14;
      if ( !v14 || v50 >= v9 || v4 >= 6u )
        break;
      if ( v8 )
      {
        if ( v14 <= 0x7Fu || (v16 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v15 + 1)) )
          v16 = 1;
        v12 += v16;
        if ( v12 > 6 )
          break;
      }
      Context->NameBuffer[v4] = v15;
      v4 = ++Context->NameLength;
    }
    if ( !v8 )
      v12 = v4;
    if ( v12 <= 2 )
    {
      v17 = RtlComputeLfnChecksum(&Name->Length);
      Context->Checksum = v17;
      for ( i = 0; i < 4; ++i )
      {
        v19 = 48;
        if ( (v17 & 0xFu) > 9 )
          v19 = 55;
        v20 = i + Context->NameLength;
        v21 = (v17 & 0xF) + v19;
        v17 >>= 4;
        Context->NameBuffer[v20] = v21;
      }
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v9 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      v22 = 1;
      Context->ExtensionLength = 1;
      for ( j = 1; ; j = Context->ExtensionLength )
      {
        v24 = GetNextWchar(&Name->Length, v52, 1, AllowExtendedCharacters);
        v25 = v24;
        if ( !v24 )
          break;
        if ( j >= 4 )
          goto LABEL_41;
        if ( v8 )
        {
          if ( v24 <= 0x7Fu || (v26 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v25 + 1)) )
            v26 = 1;
          v22 += v26;
          if ( v22 > 4 )
          {
LABEL_41:
            Context->NameBuffer[j + 9] = 126;
            break;
          }
        }
        Context->ExtensionBuffer[j] = v25;
        ++Context->ExtensionLength;
      }
    }
  }
  v27 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v27;
  if ( v27 > 4 && !Context->CheckSumInserted )
  {
    v28 = RtlComputeLfnChecksum(&Name->Length);
    Context->Checksum = v28;
    v30 = v28;
    if ( 2 - v29 < (unsigned int)(6 - v29) )
    {
      v31 = 4LL;
      v32 = &Context->NameBuffer[2 - v29];
      do
      {
        v33 = 48;
        v34 = v30 & 0xF;
        if ( v34 > 9u )
          v33 = 55;
        v30 >>= 4;
        *v32++ = v34 + v33;
        --v31;
      }
      while ( v31 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v29;
    v27 = 1;
    Context->CheckSumInserted = 1;
  }
  v35 = 1;
  v36 = 1;
  do
  {
    if ( !v27 )
      break;
    v37 = 8 - v35++;
    v38 = 0;
    v39 = v27 % 0xA + 48;
    v27 /= 0xAu;
    *((_WORD *)&v52[2] + v37) = v39;
    if ( v39 == 57 )
      v38 = v36;
    v36 = v38;
  }
  while ( v35 <= 7 );
  v40 = v51;
  v41 = (_WORD *)&v52[2] + 8 - v35;
  *v41 = 126;
  if ( (unsigned __int8)(Context->NameLength - 1) > 0xBu )
  {
    v42 = 0;
  }
  else
  {
    memmove(v40->Buffer, Context->NameBuffer, 2LL * Context->NameLength);
    v42 = 2 * Context->NameLength;
  }
  v40->Length = v42;
  memmove(&v40->Buffer[(unsigned __int64)v42 >> 1], v41, 2 * v35);
  v43 = v40->Length + 2 * v35;
  v40->Length = v43;
  ExtensionLength = Context->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v40->Buffer[(unsigned __int64)v43 >> 1], Context->ExtensionBuffer, 2 * ExtensionLength);
    v40->Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v36 )
    return 0;
  NameLength = Context->NameLength;
  if ( v8 )
  {
    v46 = 0;
    v47 = 0;
    if ( (_BYTE)NameLength )
    {
      do
      {
        if ( Context->NameBuffer[v46] <= 0x7Fu
          || (v48 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * Context->NameBuffer[v46] + 1)) )
        {
          v48 = 1;
        }
        v47 += v48;
        if ( v47 > 7 - v35 )
          break;
        ++v46;
      }
      while ( v46 < NameLength );
    }
  }
  else
  {
    LOBYTE(v46) = NameLength - 1;
  }
  Context->NameLength = v46;
  if ( (_BYTE)v46 )
    return 0;
  else
    return -1073740761;
}
