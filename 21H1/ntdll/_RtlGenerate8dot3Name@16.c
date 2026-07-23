/*
 * XREFs of _RtlGenerate8dot3Name@16 @ 0x4B362910
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _GetNextWchar@16 @ 0x4B36280C (_GetNextWchar@16.c)
 *     _RtlComputeLfnChecksum@4 @ 0x4B3628B7 (_RtlComputeLfnChecksum@4.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  PUNICODE_STRING v4; // edx
  PGENERATE_NAME_CONTEXT v5; // esi
  unsigned int v6; // esi
  wchar_t *Buffer; // eax
  unsigned __int16 NextWchar; // ax
  bool v9; // zf
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned __int16 v17; // di
  WCHAR v18; // cx
  unsigned int v19; // eax
  unsigned int ExtensionLength; // edi
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  BOOL v26; // ecx
  int v27; // eax
  BOOL v28; // eax
  unsigned __int16 v29; // ax
  unsigned int v30; // ecx
  unsigned int v31; // edi
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // edi
  WCHAR *v35; // ecx
  unsigned __int16 v36; // bx
  UCHAR v37; // al
  char *v38; // ebx
  unsigned int v39; // edi
  unsigned int v40; // edx
  UCHAR NameLength; // al
  unsigned int v42; // ebx
  unsigned __int16 v43; // cx
  unsigned __int16 v44; // ax
  unsigned int v45; // ecx
  ULONG v46; // eax
  UCHAR v47; // cl
  unsigned int v48; // edi
  WCHAR *NameBuffer; // edx
  int v50; // eax
  int v51; // eax
  size_t v53; // [esp-4h] [ebp-50h]
  size_t v54; // [esp-4h] [ebp-50h]
  unsigned int v55; // [esp+Ch] [ebp-40h]
  unsigned __int16 Src; // [esp+1Ch] [ebp-30h]
  _WORD *Srca; // [esp+1Ch] [ebp-30h]
  unsigned int v58; // [esp+20h] [ebp-2Ch] BYREF
  int v59; // [esp+24h] [ebp-28h] BYREF
  _UNICODE_STRING *v60; // [esp+28h] [ebp-24h]
  char v61; // [esp+2Fh] [ebp-1Dh]
  unsigned int v62; // [esp+30h] [ebp-1Ch]
  UCHAR v63; // [esp+36h] [ebp-16h]
  char v64; // [esp+37h] [ebp-15h]
  char v65; // [esp+46h] [ebp-6h] BYREF
  int v66; // [esp+48h] [ebp-4h] BYREF

  v4 = Name;
  v5 = Context;
  v60 = Name;
  v61 = 1;
  v55 = 0;
  if ( !AllowExtendedCharacters || (v64 = 1, !NlsMbOemCodePageTag) )
    v64 = 0;
  if ( !Context->NameLength )
  {
    v6 = -1;
    Src = Name->Length;
    v59 = -1;
    v58 = 0;
    if ( !Src || (Buffer = Name->Buffer, LOBYTE(v62) = 1, *Buffer != 46) )
      LOBYTE(v62) = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(&Name->Length, &v58, v62, AllowExtendedCharacters);
      if ( !NextWchar )
        break;
      LOBYTE(v62) = 0;
      if ( NextWchar == 46 )
      {
        v6 = v58;
        v59 = v58;
      }
    }
    v9 = v6 == Src >> 1;
    v5 = Context;
    if ( v9 )
      v59 = -1;
    v58 = 0;
    v10 = 0;
    Context->NameLength = 0;
    v63 = 0;
    v11 = v59;
    while ( 1 )
    {
      v12 = GetNextWchar(&v60->Length, &v58, 1, AllowExtendedCharacters);
      v13 = v12;
      if ( !v12 || v58 >= v11 || v63 >= 6u )
        break;
      if ( v64 )
      {
        if ( v12 > 0x7Fu && (v5 = Context, *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v12 + 1)) )
          v14 = 2;
        else
          v14 = 1;
        v10 += v14;
        if ( v10 > 6 )
          break;
      }
      v5->NameBuffer[v63] = v13;
      v63 = ++v5->NameLength;
    }
    if ( !v64 )
      v10 = v63;
    if ( v10 <= 2 )
    {
      LOWORD(v16) = RtlComputeLfnChecksum(v60);
      v5->Checksum = v16;
      v15 = 0;
      v16 = (unsigned __int16)v16;
      v62 = v16;
      v17 = v16;
      while ( 1 )
      {
        v17 >>= 4;
        LOWORD(v62) = v17;
        v18 = (v16 & 0xF) + ((v16 & 0xF) > 9 ? 55 : 48);
        v19 = v15 + v5->NameLength;
        ++v15;
        v5->NameBuffer[v19] = v18;
        if ( v15 >= 4 )
          break;
        LOBYTE(v16) = v62;
      }
      v5->NameLength += 4;
      v5->CheckSumInserted = 1;
    }
    if ( v59 == -1 )
    {
      v5->ExtensionLength = 0;
    }
    else
    {
      v5->ExtensionBuffer[0] = 46;
      v62 = 1;
      ExtensionLength = 1;
      for ( v5->ExtensionLength = 1; ; ExtensionLength = v5->ExtensionLength )
      {
        v21 = GetNextWchar(&v60->Length, (unsigned int *)&v59, 1, AllowExtendedCharacters);
        v22 = v21;
        if ( !v21 )
          break;
        if ( ExtensionLength >= 4
          || v64
          && (v21 <= 0x7Fu || !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v21 + 1) ? (v23 = 1) : (v23 = 2),
              v62 += v23,
              v62 > 4) )
        {
          v5->NameBuffer[ExtensionLength + 9] = 126;
          break;
        }
        v5->ExtensionBuffer[ExtensionLength] = v22;
        ++v5->ExtensionLength;
      }
    }
    v4 = v60;
  }
  v24 = v5->LastIndexValue + 1;
  v5->LastIndexValue = v24;
  if ( v24 > 4 && !v5->CheckSumInserted )
  {
    if ( v64 )
    {
      v25 = (unsigned __int16)v5->NameBuffer[0];
      v26 = (unsigned __int16)v25 > 0x7Fu && *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v25 + 1);
      v27 = (unsigned __int16)v5->NameBuffer[1];
      v28 = 0;
      if ( (unsigned __int16)v27 > 0x7Fu )
      {
        v4 = v60;
        if ( *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v27 + 1) )
          v28 = 1;
      }
      v59 = v26 || v28;
    }
    else
    {
      v59 = 0;
    }
    v29 = RtlComputeLfnChecksum(v4);
    v30 = v59;
    v31 = 6 - v59;
    v32 = v29;
    v5->Checksum = v29;
    v33 = 2 - v30;
    v62 = v32;
    if ( 2 - v30 < v31 )
    {
      v34 = v31 - v33;
      v35 = &v5->NameBuffer[v33];
      v36 = v32;
      while ( 1 )
      {
        v36 >>= 4;
        LOWORD(v62) = v36;
        *v35++ = (v32 & 0xF) + ((v32 & 0xF) > 9 ? 55 : 48);
        if ( !--v34 )
          break;
        LOBYTE(v32) = v62;
      }
      v5 = Context;
      LOBYTE(v30) = v59;
    }
    v37 = 6 - v30;
    v24 = 1;
    v5->NameLength = v37;
    v5->LastIndexValue = 1;
    v5->CheckSumInserted = 1;
  }
  v38 = &v65;
  v39 = 1;
  do
  {
    if ( !v24 )
      break;
    v40 = v24 % 0xA + 48;
    v24 /= 0xAu;
    ++v39;
    *(_WORD *)v38 = v40;
    v38 -= 2;
    v61 = (_WORD)v40 != 57 ? 0 : v61;
  }
  while ( v39 <= 7 );
  v62 = v39;
  Srca = (_WORD *)&v66 - v39;
  *Srca = 126;
  NameLength = v5->NameLength;
  v42 = 0;
  if ( NameLength && NameLength <= 0xCu )
  {
    LODWORD(v53) = 2 * NameLength;
    memcpy(Name8dot3->Buffer, v5->NameBuffer, v53);
    v43 = 2 * v5->NameLength;
  }
  else
  {
    v43 = 0;
  }
  Name8dot3->Length = v43;
  LODWORD(v53) = 2 * v39;
  memcpy(&Name8dot3->Buffer[v43 >> 1], Srca, v53);
  v44 = Name8dot3->Length + 2 * v39;
  v45 = v44;
  Name8dot3->Length = v44;
  v46 = v5->ExtensionLength;
  if ( v46 )
  {
    LODWORD(v54) = 2 * v46;
    memcpy(&Name8dot3->Buffer[v45 >> 1], v5->ExtensionBuffer, v54);
    Name8dot3->Length += 2 * LOWORD(v5->ExtensionLength);
  }
  if ( !v61 )
    return 0;
  v47 = v5->NameLength;
  if ( v64 )
  {
    v48 = 0;
    if ( v47 )
    {
      NameBuffer = v5->NameBuffer;
      do
      {
        v50 = (unsigned __int16)*NameBuffer;
        if ( (unsigned __int16)v50 > 0x7Fu && (v42 = v55, *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v50 + 1)) )
          v51 = 2;
        else
          v51 = 1;
        v48 += v51;
        if ( v48 > 7 - v62 )
          break;
        ++v42;
        ++NameBuffer;
        v55 = v42;
      }
      while ( v42 < v47 );
      v5 = Context;
    }
  }
  else
  {
    LOBYTE(v42) = v47 - 1;
  }
  v5->NameLength = v42;
  if ( (_BYTE)v42 )
    return 0;
  else
    return -1073740761;
}
