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
        const void **a1,
        int *a2,
        char a3,
        _DWORD *a4,
        int *a5,
        int a6,
        unsigned __int16 *a7,
        bool *a8,
        int a9)
{
  int *v9; // esi
  int UnicodeString; // edi
  unsigned int v11; // edi
  int v12; // ebx
  char *v13; // eax
  unsigned __int16 v14; // cx
  char *v15; // esi
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  int v18; // edx
  _WORD *v19; // edi
  _WORD *v20; // edx
  __int16 *v21; // esi
  __int16 v22; // dx
  bool v23; // bl
  _WORD *v24; // ecx
  __int16 v25; // di
  int v26; // eax
  int v27; // eax
  int *v28; // ebx
  unsigned __int16 *v29; // edx
  _DWORD *v30; // ecx
  _WORD *v31; // eax
  __int16 v33; // ax
  _DWORD *v34; // eax
  _DWORD *v35; // ebx
  unsigned __int16 *v36; // edx
  unsigned __int16 v37; // cx
  unsigned int v38; // eax
  unsigned __int16 *v39; // ebx
  int Heap; // edi
  int v41; // eax
  int *v42; // eax
  _DWORD *v43; // [esp+10h] [ebp-74h]
  unsigned __int16 v44; // [esp+14h] [ebp-70h]
  int v45; // [esp+1Ch] [ebp-68h] BYREF
  _WORD *v46; // [esp+20h] [ebp-64h]
  int v47; // [esp+24h] [ebp-60h]
  _WORD *v48; // [esp+28h] [ebp-5Ch]
  int *v49; // [esp+2Ch] [ebp-58h]
  const void **v50; // [esp+30h] [ebp-54h]
  _DWORD *v51; // [esp+34h] [ebp-50h]
  unsigned __int16 *v52; // [esp+38h] [ebp-4Ch]
  int *v53; // [esp+3Ch] [ebp-48h]
  unsigned __int16 *v54; // [esp+40h] [ebp-44h]
  _WORD *v55; // [esp+44h] [ebp-40h]
  _DWORD v56[13]; // [esp+48h] [ebp-3Ch] BYREF

  v49 = a5;
  v54 = a7;
  v9 = a2;
  v53 = a2;
  v50 = a1;
  v51 = a4;
  v47 = a9;
  v52 = 0;
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
        v13 = (char *)v51[1];
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
      v13 = (char *)v12;
LABEL_10:
      v14 = *(_WORD *)v13;
      if ( *(_WORD *)v13 )
      {
        do
        {
          v15 = v13;
          if ( v14 )
          {
            v16 = v14;
            do
            {
              if ( v16 == 59 )
                break;
              v17 = *((_WORD *)v13 + 1);
              v13 += 2;
              v16 = v17;
            }
            while ( v17 );
          }
          if ( v13 - v15 > v11 )
            v11 = v13 - v15;
          v18 = *(unsigned __int16 *)v13;
          if ( v18 == 59 )
          {
            LOWORD(v18) = *((_WORD *)v13 + 1);
            v13 += 2;
          }
          v14 = v18;
        }
        while ( (_WORD)v18 );
        v9 = v53;
      }
    }
    while ( v12 == v9[2] && !a3 );
    UnicodeString = LdrpAllocateUnicodeString((int)&v45, v11 + *(unsigned __int16 *)v50 + 2);
    if ( UnicodeString < 0 )
      goto LABEL_53;
    v19 = v46;
    v48 = v46;
    if ( !v51 || (v20 = (_WORD *)*v51, (v55 = v20) == 0) )
    {
      v20 = (_WORD *)v9[2];
      v55 = v20;
      if ( !v20 )
      {
        v20 = (_WORD *)*v9;
        goto LABEL_27;
      }
      goto LABEL_28;
    }
    v21 = (__int16 *)v51[1];
    while ( 1 )
    {
      if ( !*v21 )
      {
LABEL_58:
        v28 = v53;
        if ( v20 == (_WORD *)v53[2] && !a3 )
        {
          v20 = (_WORD *)*v53;
LABEL_27:
          v55 = v20;
LABEL_28:
          v21 = v20;
          continue;
        }
        UnicodeString = -1073741515;
LABEL_44:
        v29 = v52;
        if ( !v52 )
        {
LABEL_45:
          LdrpFreeUnicodeString(&v45);
          if ( UnicodeString >= 0 )
          {
            v30 = v51;
            v31 = v55;
            if ( v51 )
            {
              *v51 = v55;
              v30[1] = v21;
            }
            if ( a8 )
              *a8 = v31 == (_WORD *)v28[2];
          }
          if ( v47 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
            LdrpSaveLocationsSearched(v47);
          break;
        }
        if ( UnicodeString < 0 )
        {
LABEL_86:
          v56[1] = 0;
          v56[3] = 0;
          v56[5] = 0;
          v56[0] = *(_DWORD *)(LdrpImageEntry + 40);
          v41 = *(unsigned __int16 *)(LdrpImageEntry + 36) + 2;
          v56[7] = 0;
          v56[2] = v41;
          v56[4] = *((_DWORD *)v29 + 1);
          v56[6] = *v29 + 2;
          if ( UnicodeString >= 0 )
          {
            v56[9] = 0;
            v56[11] = 0;
            v56[8] = *((_DWORD *)v54 + 1);
            v56[10] = *v54 + 2;
          }
          v42 = CurDirDllLoadFailureWarning;
          if ( UnicodeString < 0 )
            v42 = CurDirDllLoadFailureError;
          EtwEventWriteNoRegistration((int)UserLoaderGuid, v42, (UnicodeString >> 31) + 3, (int)v56);
        }
        else if ( RtlCompareUnicodeString(v54, v52, 1) )
        {
          v29 = v52;
          goto LABEL_86;
        }
        RtlFreeHeap(LdrpHeap, 0, (int)v52);
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
          v20 = v55;
          goto LABEL_58;
        }
      }
      v23 = v21 == (__int16 *)v53[1];
      v24 = v19;
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
      v19 = v48;
      v20 = v55;
      if ( v24 == v48 )
        continue;
      v26 = (unsigned __int16)*(v24 - 1);
      if ( v26 != 92 && v26 != 47 )
      {
        *v24 = 92;
        LOWORD(v24) = (_WORD)v24 + 2;
      }
      LOWORD(v45) = (_WORD)v24 - (_WORD)v19;
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v45, v50);
      v27 = LdrpResolveDllName(&v45, v49, a6, v54, 0);
      UnicodeString = v27;
      if ( v23 )
      {
        if ( v27 >= 0 )
        {
          v34 = (_DWORD *)RtlpLookupSafeCurDirList();
          v43 = v34;
          if ( v34 )
          {
            v35 = (_DWORD *)*v34;
            if ( (_DWORD *)*v34 != v34 )
            {
              v36 = v54;
              v37 = *v54 >> 1;
              v44 = v37;
              do
              {
                v38 = *((_WORD *)v35 + 4) >> 1;
                if ( v37 > (unsigned __int16)v38 )
                {
                  if ( !RtlCompareUnicodeStrings(*((unsigned __int16 **)v36 + 1), v38, v35[3], v38, 1) )
                    goto LABEL_42;
                  v37 = v44;
                  v36 = v54;
                }
                v35 = (_DWORD *)*v35;
              }
              while ( v35 != v43 );
            }
          }
          v39 = v54;
          Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, *v54 + 10);
          v52 = (unsigned __int16 *)Heap;
          if ( Heap )
          {
            *(_WORD *)Heap = 0;
            *(_WORD *)(Heap + 2) = *v39;
            *(_DWORD *)(Heap + 4) = Heap + 8;
            RtlCopyUnicodeString(Heap, v39);
            *(_WORD *)(*(_DWORD *)(Heap + 4) + 2 * (*v39 >> 1)) = 0;
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
        v28 = v53;
        goto LABEL_44;
      }
LABEL_57:
      v19 = v48;
      v20 = v55;
      *(_WORD *)v49 = 0;
    }
  }
LABEL_53:
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrfind.c", 1543, "LdrpSearchPath", 4, "Status: 0x%08lx\n", UnicodeString);
  return UnicodeString;
}
