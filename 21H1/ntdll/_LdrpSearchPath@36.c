/*
 * XREFs of _LdrpSearchPath@36 @ 0x4B2D2450
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 *     _LdrpFindLoadedDllInternal@20 @ 0x4B2E9DE3 (_LdrpFindLoadedDllInternal@20.c)
 * Callees:
 *     _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30 (_EtwEventWriteNoRegistration@16.c)
 *     _LdrpComputeLazyDllPath@4 @ 0x4B2B2720 (_LdrpComputeLazyDllPath@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _LdrpAllocateUnicodeString@8 @ 0x4B2D1D30 (_LdrpAllocateUnicodeString@8.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _LdrpIsSecurityEtwLoggingEnabled@0 @ 0x4B2DE42E (_LdrpIsSecurityEtwLoggingEnabled@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpSaveLocationsSearched@12 @ 0x4B334A5C (_LdrpSaveLocationsSearched@12.c)
 *     _RtlpLookupSafeCurDirList@0 @ 0x4B33D088 (_RtlpLookupSafeCurDirList@0.c)
 */

int __fastcall LdrpSearchPath(
        const UNICODE_STRING *a1,
        PCWSTR *a2,
        char a3,
        PCWSTR *a4,
        int *a5,
        _UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        bool *a8,
        int a9)
{
  PCWSTR *v9; // esi
  int UnicodeString; // edi
  unsigned int v11; // edi
  PCWSTR v12; // ebx
  WCHAR *v13; // eax
  unsigned __int16 v14; // cx
  char *v15; // esi
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  int v18; // edx
  wchar_t *Buffer; // edi
  PCWSTR v20; // edx
  const WCHAR *v21; // esi
  wchar_t v22; // dx
  bool v23; // bl
  wchar_t *v24; // ecx
  WCHAR v25; // di
  int v26; // eax
  int v27; // eax
  PCWSTR *v28; // ebx
  PUNICODE_STRING v29; // edx
  PCWSTR *v30; // ecx
  PCWSTR v31; // eax
  wchar_t v33; // ax
  _DWORD *v34; // eax
  _DWORD *v35; // ebx
  PCUNICODE_STRING v36; // edx
  unsigned __int16 v37; // cx
  const WCHAR *v38; // eax
  PCUNICODE_STRING v39; // ebx
  _UNICODE_STRING *Heap; // edi
  unsigned int v41; // eax
  const EVENT_DESCRIPTOR *v42; // eax
  SIZE_T v43; // [esp-10h] [ebp-94h]
  SIZE_T v44; // [esp-4h] [ebp-88h]
  BOOLEAN v45; // [esp+4h] [ebp-80h]
  _DWORD *v46; // [esp+10h] [ebp-74h]
  unsigned __int16 v47; // [esp+14h] [ebp-70h]
  _UNICODE_STRING Destination; // [esp+1Ch] [ebp-68h] BYREF
  int v49; // [esp+24h] [ebp-60h]
  wchar_t *v50; // [esp+28h] [ebp-5Ch]
  int *v51; // [esp+2Ch] [ebp-58h]
  PCUNICODE_STRING Source; // [esp+30h] [ebp-54h]
  PCWSTR *v53; // [esp+34h] [ebp-50h]
  PUNICODE_STRING String2; // [esp+38h] [ebp-4Ch]
  PCWSTR *v55; // [esp+3Ch] [ebp-48h]
  PCUNICODE_STRING SourceString; // [esp+40h] [ebp-44h]
  const WCHAR *v57; // [esp+44h] [ebp-40h]
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+48h] [ebp-3Ch] BYREF
  wchar_t *v59; // [esp+58h] [ebp-2Ch]
  int v60; // [esp+5Ch] [ebp-28h]
  int v61; // [esp+60h] [ebp-24h]
  int v62; // [esp+64h] [ebp-20h]
  wchar_t *v63; // [esp+68h] [ebp-1Ch]
  int v64; // [esp+6Ch] [ebp-18h]
  int v65; // [esp+70h] [ebp-14h]
  int v66; // [esp+74h] [ebp-10h]

  v51 = a5;
  SourceString = a7;
  v9 = a2;
  v55 = a2;
  Source = a1;
  v53 = a4;
  v49 = a9;
  String2 = 0;
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrfind.c", 1225, "LdrpSearchPath", 3, "DLL name: %wZ\n", a1);
  if ( *v9 || (UnicodeString = LdrpComputeLazyDllPath(v9), UnicodeString >= 0) )
  {
    v11 = 0;
    if ( a4 )
    {
      v12 = *a4;
      if ( *a4 )
      {
        v13 = (WCHAR *)v53[1];
        goto LABEL_10;
      }
    }
    if ( v9[2] )
    {
      v12 = v9[2];
      goto LABEL_9;
    }
    do
    {
      v12 = *v9;
LABEL_9:
      v13 = (WCHAR *)v12;
LABEL_10:
      v14 = *v13;
      if ( *v13 )
      {
        do
        {
          v15 = (char *)v13;
          if ( v14 )
          {
            v16 = v14;
            do
            {
              if ( v16 == 59 )
                break;
              v17 = v13[1];
              ++v13;
              v16 = v17;
            }
            while ( v17 );
          }
          if ( (char *)v13 - v15 > v11 )
            v11 = (char *)v13 - v15;
          v18 = (unsigned __int16)*v13;
          if ( v18 == 59 )
          {
            LOWORD(v18) = v13[1];
            ++v13;
          }
          v14 = v18;
        }
        while ( (_WORD)v18 );
        v9 = v55;
      }
    }
    while ( v12 == v9[2] && !a3 );
    UnicodeString = LdrpAllocateUnicodeString((int)&Destination, v11 + Source->Length + 2);
    if ( UnicodeString < 0 )
      goto LABEL_53;
    Buffer = Destination.Buffer;
    v50 = Destination.Buffer;
    if ( !v53 || (v20 = *v53, (v57 = v20) == 0) )
    {
      v20 = v9[2];
      v57 = v20;
      if ( !v20 )
      {
        v20 = *v9;
        goto LABEL_27;
      }
      goto LABEL_28;
    }
    v21 = v53[1];
    while ( 1 )
    {
      if ( !*v21 )
      {
LABEL_58:
        v28 = v55;
        if ( v20 == v55[2] && !a3 )
        {
          v20 = *v55;
LABEL_27:
          v57 = v20;
LABEL_28:
          v21 = v20;
          continue;
        }
        UnicodeString = -1073741515;
LABEL_44:
        v29 = String2;
        if ( !String2 )
        {
LABEL_45:
          LdrpFreeUnicodeString(&Destination);
          if ( UnicodeString >= 0 )
          {
            v30 = v53;
            v31 = v57;
            if ( v53 )
            {
              *v53 = v57;
              v30[1] = v21;
            }
            if ( a8 )
              *a8 = v31 == v28[2];
          }
          if ( v49 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
            LdrpSaveLocationsSearched(v49);
          break;
        }
        if ( UnicodeString < 0 )
        {
LABEL_86:
          HIDWORD(UserData.Ptr) = 0;
          UserData.Reserved = 0;
          v60 = 0;
          LODWORD(UserData.Ptr) = *(_DWORD *)(LdrpImageEntry + 40);
          v41 = *(unsigned __int16 *)(LdrpImageEntry + 36) + 2;
          v62 = 0;
          UserData.Size = v41;
          v59 = v29->Buffer;
          v61 = v29->Length + 2;
          if ( UnicodeString >= 0 )
          {
            v64 = 0;
            v66 = 0;
            v63 = SourceString->Buffer;
            v65 = SourceString->Length + 2;
          }
          v42 = &CurDirDllLoadFailureWarning;
          if ( UnicodeString < 0 )
            v42 = (const EVENT_DESCRIPTOR *)CurDirDllLoadFailureError;
          EtwEventWriteNoRegistration(&UserLoaderGuid, v42, (UnicodeString >> 31) + 3, &UserData);
        }
        else if ( RtlCompareUnicodeString((PUNICODE_STRING)SourceString, String2, 1u) )
        {
          v29 = String2;
          goto LABEL_86;
        }
        RtlFreeHeap(LdrpHeap, 0, String2);
        goto LABEL_45;
      }
      v22 = *v21;
      while ( v22 == 59 )
      {
        v33 = v21[1];
        ++v21;
        v22 = v33;
        if ( !v33 )
        {
          v20 = v57;
          goto LABEL_58;
        }
      }
      v23 = v21 == v55[1];
      v24 = Buffer;
      v25 = v22;
      if ( v22 )
      {
        while ( v22 != 59 )
        {
          ++v21;
          *v24++ = v22;
          v22 = *v21;
          v25 = *v21;
          if ( !*v21 )
            goto LABEL_35;
        }
      }
      else
      {
LABEL_35:
        if ( v25 != 59 )
          goto LABEL_37;
      }
      ++v21;
LABEL_37:
      Buffer = v50;
      v20 = v57;
      if ( v24 == v50 )
        continue;
      v26 = *(v24 - 1);
      if ( v26 != 92 && v26 != 47 )
      {
        *v24 = 92;
        LOWORD(v24) = (_WORD)v24 + 2;
      }
      Destination.Length = (_WORD)v24 - (_WORD)Buffer;
      RtlAppendUnicodeStringToString(&Destination, Source);
      v27 = LdrpResolveDllName((int *)&Destination, v51, a6, SourceString, 0);
      UnicodeString = v27;
      if ( v23 )
      {
        if ( v27 >= 0 )
        {
          v34 = (_DWORD *)RtlpLookupSafeCurDirList();
          v46 = v34;
          if ( v34 )
          {
            v35 = (_DWORD *)*v34;
            if ( (_DWORD *)*v34 != v34 )
            {
              v36 = SourceString;
              v37 = SourceString->Length >> 1;
              v47 = v37;
              do
              {
                v38 = (const WCHAR *)(*((_WORD *)v35 + 4) >> 1);
                if ( v37 > (unsigned __int16)v38 )
                {
                  LODWORD(v44) = 1;
                  HIDWORD(v43) = v35[3];
                  LODWORD(v43) = *((_WORD *)v35 + 4) >> 1;
                  if ( !RtlCompareUnicodeStrings((PCWCH)v36->Buffer, v43, v38, v44, v45) )
                    goto LABEL_42;
                  v37 = v47;
                  v36 = SourceString;
                }
                v35 = (_DWORD *)*v35;
              }
              while ( v35 != v46 );
            }
          }
          v39 = SourceString;
          LODWORD(v44) = SourceString->Length + 10;
          Heap = (_UNICODE_STRING *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v44);
          String2 = Heap;
          if ( Heap )
          {
            Heap->Length = 0;
            Heap->MaximumLength = v39->Length;
            Heap->Buffer = &Heap[1].Length;
            RtlCopyUnicodeString(Heap, v39);
            Heap->Buffer[v39->Length >> 1] = 0;
          }
          goto LABEL_57;
        }
      }
      else
      {
LABEL_42:
        if ( UnicodeString >= 0 )
          goto LABEL_43;
      }
      if ( UnicodeString != -1073741515
        && UnicodeString != -1073741790
        && UnicodeString != -1073741757
        && UnicodeString != -1073741715 )
      {
LABEL_43:
        v28 = v55;
        goto LABEL_44;
      }
LABEL_57:
      Buffer = v50;
      v20 = v57;
      *(_WORD *)v51 = 0;
    }
  }
LABEL_53:
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrfind.c", 1543, "LdrpSearchPath", 4, "Status: 0x%08lx\n", UnicodeString);
  return UnicodeString;
}
