/*
 * XREFs of _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860
 * Callers:
 *     _RtlDosPathNameToRelativeNtPathName_U_WithStatus@16 @ 0x4B2C1E00 (_RtlDosPathNameToRelativeNtPathName_U_WithStatus@16.c)
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _RtlDosPathNameToNtPathName_U@16 @ 0x4B2D1B70 (_RtlDosPathNameToNtPathName_U@16.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 *     _LdrpGetNtPathFromDosPath@8 @ 0x4B2D204F (_LdrpGetNtPathFromDosPath@8.c)
 *     _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E (_RtlDoesFileExists_UstrEx@8.c)
 *     _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B (_RtlpCreateNewDirectoryReference@12.c)
 *     _LdrpCheckAppDirType@4 @ 0x4B33145D (_LdrpCheckAppDirType@4.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 * Callees:
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlPrefixUnicodeString@12 @ 0x4B2E40C0 (_RtlPrefixUnicodeString@12.c)
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 *     _RtlpWin32NtNameToNtPathName@24 @ 0x4B2E7E41 (_RtlpWin32NtNameToNtPathName@24.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        _UNICODE_STRING *a2,
        unsigned __int16 *a3,
        PUNICODE_STRING Destination,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  bool v7; // cc
  unsigned __int16 *v8; // esi
  _DWORD *v9; // ecx
  wchar_t *Buffer; // ecx
  wchar_t *Heap; // edi
  unsigned int FullPathName_Ustr; // ecx
  unsigned __int16 v13; // ax
  unsigned __int16 Length; // dx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  PVOID v21; // eax
  unsigned __int16 *v22; // ecx
  unsigned int v23; // eax
  void *v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ebx
  unsigned __int16 v27; // ax
  unsigned int v28; // ebx
  unsigned int v29; // edx
  unsigned int v30; // ebx
  _DWORD *v31; // ebx
  bool v32; // zf
  int v33; // ebx
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  HANDLE *v39; // eax
  _WORD *v40; // edx
  __int16 v41; // ax
  _WORD *v42; // esi
  __int16 v43; // ax
  __int16 v44; // cx
  HANDLE *v45; // esi
  wchar_t *v46; // [esp-8h] [ebp-260h]
  SIZE_T v47; // [esp-4h] [ebp-25Ch]
  unsigned int StackCookie; // [esp+Ch] [ebp-24Ch]
  char StackCookie_7; // [esp+13h] [ebp-245h] BYREF
  const _UNICODE_STRING *v50; // [esp+14h] [ebp-244h]
  _DWORD *p_Length; // [esp+18h] [ebp-240h]
  int v52; // [esp+1Ch] [ebp-23Ch]
  unsigned int v53; // [esp+20h] [ebp-238h]
  unsigned int v54; // [esp+24h] [ebp-234h]
  _UNICODE_STRING String2; // [esp+28h] [ebp-230h] BYREF
  int v56; // [esp+30h] [ebp-228h]
  void *Src; // [esp+34h] [ebp-224h]
  _DWORD *v58; // [esp+38h] [ebp-220h]
  int v59; // [esp+3Ch] [ebp-21Ch]
  int v60[2]; // [esp+40h] [ebp-218h] BYREF
  _BYTE BaseAddress[524]; // [esp+48h] [ebp-210h] BYREF

  v56 = a1;
  v7 = a2->Length <= 8u;
  v8 = a3;
  v59 = a5;
  v9 = a6;
  p_Length = &Destination->Length;
  v52 = (int)a6;
  v58 = a7;
  if ( !v7 )
  {
    Buffer = a2->Buffer;
    if ( *Buffer == 92 )
    {
      v35 = Buffer[1];
      if ( (v35 == 92 || v35 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return RtlpWin32NtNameToNtPathName(Destination, v59, v52, (int)a7);
    }
    v9 = (_DWORD *)v52;
  }
  if ( v9 )
    *v9 = 0;
  Heap = (wchar_t *)BaseAddress;
  v54 = 520;
  if ( (v56 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(BaseAddress, (int)v9, (int)&StackCookie_7, (int)v60);
    StackCookie = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      while ( !StackCookie_7 )
      {
        v13 = v54;
        if ( FullPathName_Ustr <= v54 )
        {
          Length = FullPathName_Ustr;
          v54 = (unsigned __int16)FullPathName_Ustr;
          String2.Length = FullPathName_Ustr;
          String2.MaximumLength = v13;
          String2.Buffer = Heap;
          if ( (unsigned __int16)FullPathName_Ustr >= 2u && ((v15 = *Heap, v15 == 92) || v15 == 47) )
          {
            if ( (unsigned __int16)FullPathName_Ustr >= 4u && ((v36 = Heap[1], v36 == 92) || v36 == 47) )
            {
              if ( (unsigned __int16)FullPathName_Ustr >= 6u && ((v37 = Heap[2], v37 == 46) || v37 == 63) )
              {
                if ( (unsigned __int16)FullPathName_Ustr >= 8u && ((v38 = Heap[3], v38 == 92) || v38 == 47) )
                  v17 = 6;
                else
                  v17 = (unsigned __int16)FullPathName_Ustr != 6 ? 1 : 7;
              }
              else
              {
                v17 = 1;
              }
            }
            else
            {
              v17 = 4;
            }
          }
          else if ( (unsigned __int16)FullPathName_Ustr >= 4u && *Heap && Heap[1] == 58 )
          {
            if ( (unsigned __int16)FullPathName_Ustr >= 6u && ((v16 = Heap[2], v16 == 92) || v16 == 47) )
              v17 = 2;
            else
              v17 = 3;
          }
          else
          {
            v17 = 5;
          }
          goto LABEL_19;
        }
        if ( (v56 & 4) == 0 && ((v56 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_90;
        LODWORD(v47) = FullPathName_Ustr;
        Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v47);
        if ( !Heap )
          return -1073741801;
        v54 = StackCookie;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(Heap, v52, (int)&StackCookie_7, (int)v60);
        StackCookie = FullPathName_Ustr;
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v33 = -1073741773;
    goto LABEL_42;
  }
  String2 = *a2;
  v17 = RtlDetermineDosPathNameType_Ustr(&String2);
  Length = String2.Length;
  v60[0] = v17;
  v54 = String2.Length;
LABEL_19:
  if ( v17 == 2 )
  {
LABEL_20:
    v53 = 0;
    v18 = 0;
LABEL_21:
    v50 = &RtlpDosDevicesPrefix;
  }
  else
  {
    switch ( v17 )
    {
      case 1:
        v50 = &RtlpDosDevicesUncPrefix;
        v18 = 4;
        v53 = 4;
        break;
      case 6:
        v53 = 8;
        v18 = 8;
        goto LABEL_21;
      default:
        goto LABEL_20;
    }
  }
  LOWORD(StackCookie) = v18;
  v19 = v50->Length - v18;
  v20 = v19 + Length + 2;
  if ( v20 > 0xFFFE )
  {
LABEL_90:
    v33 = -1073741562;
    goto LABEL_42;
  }
  if ( a3 )
  {
    if ( v20 <= a3[1] )
    {
      v24 = (void *)v50->Length;
      goto LABEL_27;
    }
    if ( !p_Length )
    {
      v33 = -1073741562;
      goto LABEL_42;
    }
  }
  else if ( !p_Length )
  {
    v33 = -1073741811;
    goto LABEL_42;
  }
  LODWORD(v47) = v19 + Length + 2;
  v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v47);
  v22 = (unsigned __int16 *)p_Length;
  p_Length[1] = v21;
  if ( !v21 )
  {
    v33 = -1073741801;
    goto LABEL_42;
  }
  v22[1] = v20;
  *v22 = 0;
  v8 = v22;
  HIWORD(v23) = HIWORD(v50);
  v24 = (void *)v50->Length;
  LOWORD(v23) = String2.Length;
  v54 = v23;
LABEL_27:
  p_Length = v24;
  if ( (_WORD)v24 )
  {
    v25 = *v8;
    v26 = (unsigned __int16)v24;
    if ( v25 + (unsigned __int16)v24 <= v8[1] )
    {
      LODWORD(v47) = (unsigned __int16)v24;
      v46 = v50->Buffer;
      Src = (void *)(*((_DWORD *)v8 + 1) + 2 * (v25 >> 1));
      memmove(Src, v46, v47);
      *v8 += (unsigned __int16)p_Length;
      if ( (unsigned int)*v8 + 1 < v8[1] )
        *((_WORD *)Src + (v26 >> 1)) = 0;
    }
  }
  v27 = String2.Length - StackCookie;
  v28 = v53;
  v29 = *v8;
  LOWORD(StackCookie) = v27;
  Src = &String2.Buffer[v53 / 2];
  if ( v27 )
  {
    v30 = v27;
    if ( v27 + v29 <= v8[1] )
    {
      LODWORD(v47) = v27;
      p_Length = (_DWORD *)(*((_DWORD *)v8 + 1) + 2 * (v29 >> 1));
      memmove(p_Length, Src, v47);
      *v8 += StackCookie;
      if ( (unsigned int)*v8 + 1 < v8[1] )
        *((_WORD *)p_Length + (v30 >> 1)) = 0;
    }
    v28 = v53;
  }
  if ( v59 )
    *(_DWORD *)v59 = v8;
  *(_WORD *)(*((_DWORD *)v8 + 1) + 2 * (*v8 >> 1)) = 0;
  if ( v52 && *(_DWORD *)v52 )
    *(_DWORD *)v52 += *((_DWORD *)v8 + 1) + v50->Length - v28 - (_DWORD)Heap;
  v31 = v58;
  if ( !v58 )
    goto LABEL_41;
  v32 = v60[0] == 5;
  *v58 = 0;
  v31[1] = 0;
  v31[2] = 0;
  v31[3] = 0;
  if ( !v32 )
    goto LABEL_41;
  v39 = RtlpReferenceCurrentDirectory(1);
  StackCookie = (unsigned int)v39;
  if ( !v39 )
  {
    RtlLeaveCriticalSection(&FastPebLock);
    goto LABEL_41;
  }
  v58 = v39 + 3;
  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v39 + 3), &String2, 1u) )
  {
    v45 = (HANDLE *)StackCookie;
LABEL_94:
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v45, 0xFFFFFFFF) )
    {
      NtClose(v45[1]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
    }
    goto LABEL_41;
  }
  v40 = v58;
  v41 = v54;
  v42 = (_WORD *)(*(unsigned __int16 *)v58 + v50->Length - v53 + *((_DWORD *)v8 + 1));
  v31[1] = v42;
  v43 = v41 - *v40;
  *(_WORD *)v31 = v43;
  v44 = v43;
  if ( *v42 == 92 )
  {
    v31[1] = v42 + 1;
    v43 -= 2;
    *(_WORD *)v31 = v44 - 2;
  }
  v32 = (v56 & 2) == 0;
  v45 = (HANDLE *)StackCookie;
  *((_WORD *)v31 + 1) = v43;
  if ( v32 )
    goto LABEL_94;
  v31[3] = StackCookie;
  v31[2] = *(_DWORD *)(StackCookie + 4);
LABEL_41:
  v33 = 0;
LABEL_42:
  if ( Heap != (wchar_t *)BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v33;
}
