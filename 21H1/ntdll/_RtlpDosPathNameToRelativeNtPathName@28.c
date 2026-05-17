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
        int *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7)
{
  bool v7; // cc
  unsigned __int16 *v8; // esi
  _DWORD *v9; // ecx
  _WORD *v10; // ecx
  unsigned __int16 *Heap; // edi
  unsigned int FullPathName_Ustr; // ecx
  __int16 v13; // ax
  unsigned __int16 v14; // dx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // eax
  unsigned __int16 *v22; // ecx
  unsigned int v23; // eax
  unsigned __int16 *v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ebx
  unsigned __int16 v27; // ax
  int v28; // ebx
  unsigned int v29; // edx
  unsigned int v30; // ebx
  _DWORD *v31; // ebx
  bool v32; // zf
  int v33; // ebx
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // eax
  _WORD *v40; // edx
  __int16 v41; // ax
  _WORD *v42; // esi
  __int16 v43; // ax
  __int16 v44; // cx
  int v45; // esi
  const void *v46; // [esp-8h] [ebp-260h]
  unsigned int v47; // [esp+Ch] [ebp-24Ch]
  __int16 v48; // [esp+Ch] [ebp-24Ch]
  unsigned __int16 v49; // [esp+Ch] [ebp-24Ch]
  _DWORD *v50; // [esp+Ch] [ebp-24Ch]
  _BYTE v51[5]; // [esp+13h] [ebp-245h] BYREF
  unsigned __int16 *v52; // [esp+18h] [ebp-240h]
  int v53; // [esp+1Ch] [ebp-23Ch]
  int v54; // [esp+20h] [ebp-238h]
  unsigned int v55; // [esp+24h] [ebp-234h]
  int v56; // [esp+28h] [ebp-230h] BYREF
  unsigned __int16 *v57; // [esp+2Ch] [ebp-22Ch]
  int v58; // [esp+30h] [ebp-228h]
  void *Src; // [esp+34h] [ebp-224h]
  _DWORD *v60; // [esp+38h] [ebp-220h]
  _DWORD *v61; // [esp+3Ch] [ebp-21Ch]
  int v62[2]; // [esp+40h] [ebp-218h] BYREF
  _BYTE v63[524]; // [esp+48h] [ebp-210h] BYREF

  v58 = a1;
  v7 = *(_WORD *)a2 <= 8u;
  v8 = a3;
  v61 = a5;
  v9 = (_DWORD *)a6;
  v52 = a4;
  v53 = a6;
  v60 = a7;
  if ( !v7 )
  {
    v10 = (_WORD *)a2[1];
    if ( *v10 == 92 )
    {
      v35 = (unsigned __int16)v10[1];
      if ( (v35 == 92 || v35 == 63) && v10[2] == 63 && v10[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a4, v61, v53, a7);
    }
    v9 = (_DWORD *)v53;
  }
  if ( v9 )
    *v9 = 0;
  Heap = (unsigned __int16 *)v63;
  v55 = 520;
  if ( (v58 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(v63, (int)v9, (int)v51, (int)v62);
    v47 = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      while ( !v51[0] )
      {
        v13 = v55;
        if ( FullPathName_Ustr <= v55 )
        {
          v14 = FullPathName_Ustr;
          v55 = (unsigned __int16)FullPathName_Ustr;
          LOWORD(v56) = FullPathName_Ustr;
          HIWORD(v56) = v13;
          v57 = Heap;
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
        if ( (v58 & 4) == 0 && ((v58 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_90;
        Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, FullPathName_Ustr);
        if ( !Heap )
          return -1073741801;
        v55 = v47;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(Heap, v53, (int)v51, (int)v62);
        v47 = FullPathName_Ustr;
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v33 = -1073741773;
    goto LABEL_42;
  }
  v56 = *a2;
  v57 = (unsigned __int16 *)a2[1];
  v17 = RtlDetermineDosPathNameType_Ustr(&v56);
  v14 = v56;
  v62[0] = v17;
  v55 = (unsigned __int16)v56;
LABEL_19:
  if ( v17 == 2 )
  {
LABEL_20:
    v54 = 0;
    v18 = 0;
LABEL_21:
    *(_DWORD *)&v51[1] = &RtlpDosDevicesPrefix;
  }
  else
  {
    switch ( v17 )
    {
      case 1:
        *(_DWORD *)&v51[1] = &RtlpDosDevicesUncPrefix;
        v18 = 4;
        v54 = 4;
        break;
      case 6:
        v54 = 8;
        v18 = 8;
        goto LABEL_21;
      default:
        goto LABEL_20;
    }
  }
  v48 = v18;
  v19 = (unsigned __int16)**(_WORD **)&v51[1] - v18;
  v20 = v19 + v14 + 2;
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
      v24 = (unsigned __int16 *)(unsigned __int16)**(_WORD **)&v51[1];
      goto LABEL_27;
    }
    if ( !v52 )
    {
      v33 = -1073741562;
      goto LABEL_42;
    }
  }
  else if ( !v52 )
  {
    v33 = -1073741811;
    goto LABEL_42;
  }
  v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19 + v14 + 2);
  v22 = v52;
  *((_DWORD *)v52 + 1) = v21;
  if ( !v21 )
  {
    v33 = -1073741801;
    goto LABEL_42;
  }
  v22[1] = v20;
  *v22 = 0;
  v8 = v22;
  HIWORD(v23) = *(_WORD *)&v51[3];
  v24 = (unsigned __int16 *)(unsigned __int16)**(_WORD **)&v51[1];
  LOWORD(v23) = v56;
  v55 = v23;
LABEL_27:
  v52 = v24;
  if ( (_WORD)v24 )
  {
    v25 = *v8;
    v26 = (unsigned __int16)v24;
    if ( v25 + (unsigned __int16)v24 <= v8[1] )
    {
      v46 = *(const void **)(*(_DWORD *)&v51[1] + 4);
      Src = (void *)(*((_DWORD *)v8 + 1) + 2 * (v25 >> 1));
      memmove(Src, v46, (unsigned __int16)v24);
      *v8 += (unsigned __int16)v52;
      if ( (unsigned int)*v8 + 1 < v8[1] )
        *((_WORD *)Src + (v26 >> 1)) = 0;
    }
  }
  v27 = v56 - v48;
  v28 = v54;
  v29 = *v8;
  v49 = v27;
  Src = &v57[v54 / 2u];
  if ( v27 )
  {
    v30 = v27;
    if ( v27 + v29 <= v8[1] )
    {
      v52 = (unsigned __int16 *)(*((_DWORD *)v8 + 1) + 2 * (v29 >> 1));
      memmove(v52, Src, v27);
      *v8 += v49;
      if ( (unsigned int)*v8 + 1 < v8[1] )
        v52[v30 >> 1] = 0;
    }
    v28 = v54;
  }
  if ( v61 )
    *v61 = v8;
  *(_WORD *)(*((_DWORD *)v8 + 1) + 2 * (*v8 >> 1)) = 0;
  if ( v53 && *(_DWORD *)v53 )
    *(_DWORD *)v53 += *((_DWORD *)v8 + 1) + (unsigned __int16)**(_WORD **)&v51[1] - v28 - (_DWORD)Heap;
  v31 = v60;
  if ( !v60 )
    goto LABEL_41;
  v32 = v62[0] == 5;
  *v60 = 0;
  v31[1] = 0;
  v31[2] = 0;
  v31[3] = 0;
  if ( !v32 )
    goto LABEL_41;
  v39 = RtlpReferenceCurrentDirectory(1);
  v50 = v39;
  if ( !v39 )
  {
    RtlLeaveCriticalSection((int)&FastPebLock);
    goto LABEL_41;
  }
  v60 = v39 + 3;
  if ( !(unsigned __int8)RtlPrefixUnicodeString(v39 + 3, &v56, 1) )
  {
    v45 = (int)v50;
LABEL_94:
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v45, 0xFFFFFFFF) )
    {
      NtClose(*(HANDLE *)(v45 + 4));
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v45);
    }
    goto LABEL_41;
  }
  v40 = v60;
  v41 = v55;
  v42 = (_WORD *)(*(unsigned __int16 *)v60 + (unsigned __int16)**(_WORD **)&v51[1] - v54 + *((_DWORD *)v8 + 1));
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
  v32 = (v58 & 2) == 0;
  v45 = (int)v50;
  *((_WORD *)v31 + 1) = v43;
  if ( v32 )
    goto LABEL_94;
  v31[3] = v50;
  v31[2] = v50[1];
LABEL_41:
  v33 = 0;
LABEL_42:
  if ( Heap != (unsigned __int16 *)v63 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return v33;
}
