/*
 * XREFs of CmpPreserveSystemHiveData @ 0x1408797CC
 * Callers:
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x1403D1FF0 (_strnicmp.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpSetValueKeyExisting @ 0x14065BAA8 (CmpSetValueKeyExisting.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     CmpWalkPath @ 0x1407AC8F0 (CmpWalkPath.c)
 *     CmpCopySyncTree @ 0x140878644 (CmpCopySyncTree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r14d
  const WCHAR **v10; // r15
  const WCHAR *v11; // rbx
  int v12; // r13d
  int v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  int v16; // ebx
  __int64 v17; // rax
  unsigned int ValueByName; // ebx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  WCHAR *v22; // r13
  bool v23; // zf
  unsigned __int64 v24; // r15
  void (__fastcall *v25)(__int64, _DWORD *); // rax
  _WORD *v26; // r14
  unsigned int v27; // ebx
  size_t v28; // rbx
  __int64 *v29; // r14
  _DWORD *v30; // r15
  void *v31; // rcx
  char v32; // r12
  __int64 *v33; // rbx
  unsigned int i; // r14d
  unsigned int v35; // eax
  unsigned __int64 v36; // r15
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rax
  _DWORD *v40; // rcx
  unsigned int v41; // r15d
  __int64 v42; // rax
  const char *v43; // rcx
  int v44; // eax
  bool v45; // bl
  unsigned int v46; // r12d
  int *v47; // r14
  unsigned int v48; // eax
  __int64 v49; // rbx
  unsigned int v50; // ebx
  __int64 v51; // rax
  size_t Size; // [rsp+28h] [rbp-D8h]
  _DWORD v54[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v55[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v56; // [rsp+50h] [rbp-B0h]
  _DWORD v57[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v59[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v60[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v64[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h] BYREF
  int v66; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-48h]
  _DWORD v68[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v70[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-20h] BYREF
  int v72; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v73; // [rsp+ECh] [rbp-14h] BYREF
  _BYTE v74[4]; // [rsp+F4h] [rbp-Ch] BYREF
  const wchar_t *v75; // [rsp+F8h] [rbp-8h]
  const wchar_t *v76; // [rsp+100h] [rbp+0h]
  int v77; // [rsp+108h] [rbp+8h]
  __int64 v78; // [rsp+110h] [rbp+10h]
  int v79; // [rsp+118h] [rbp+18h]
  int v80; // [rsp+11Ch] [rbp+1Ch]
  int v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  int v83; // [rsp+130h] [rbp+30h]
  int v84; // [rsp+134h] [rbp+34h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  int v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+144h] [rbp+44h]
  char v88; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v89; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v90; // [rsp+1A8h] [rbp+A8h]
  WCHAR *PoolWithTag; // [rsp+1B0h] [rbp+B0h]
  int v92; // [rsp+1B8h] [rbp+B8h] BYREF
  int v93; // [rsp+1BCh] [rbp+BCh]

  v61 = 2LL;
  v92 = -1;
  v93 = 0;
  v60[1] = 0;
  v58[1] = 0;
  v55[1] = 0;
  v57[1] = 0;
  v59[1] = 0;
  v54[1] = 0;
  v64[0] = L"WPA";
  v64[1] = L"Control\\FastCache";
  v68[1] = 0;
  v70[1] = 0;
  v73 = 0LL;
  v75 = L"Control\\ProductOptions";
  v76 = L"ProductPolicy";
  v80 = 0;
  v84 = 0;
  v87 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v60[0] = -1;
  v58[0] = -1;
  v55[0] = -1;
  v57[0] = -1;
  v59[0] = -1;
  v54[0] = -1;
  v65 = 0LL;
  v66 = -1;
  v67 = 0LL;
  v68[0] = -1;
  v68[2] = -1;
  v69 = 0LL;
  v70[0] = -1;
  v71 = 0LL;
  v72 = -1;
  v74[0] = 0;
  v77 = -1;
  v78 = 0LL;
  v79 = -1;
  v81 = -1;
  v82 = 0LL;
  v83 = -1;
  v85 = 0LL;
  v86 = -1;
  v88 = 0;
  v5 = *(_DWORD *)(v4 + 36);
  v89 = 0;
  PoolWithTag = 0LL;
  v62 = 0LL;
  v56 = 0LL;
  v90 = v5;
  DestinationString = 0LL;
  if ( v5 == -1 || (v6 = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 36LL), v6 == -1) )
  {
LABEL_72:
    v16 = -1073741492;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v5, v59);
    v62 = v7;
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v6, v60);
    v56 = (_DWORD *)v8;
    if ( v7 && v8 )
    {
      v9 = 0;
      v10 = (const WCHAR **)v64;
      do
      {
        v11 = *v10;
        v12 = CmpWalkPath(a1, v5, *v10);
        v13 = CmpWalkPath(a2, v6, v11);
        if ( v12 == -1 || v13 == -1 )
        {
          v16 = -1073741492;
          goto LABEL_26;
        }
        if ( !CmpCopySyncTree(a1, v12, a2, v13, 2, 1) )
          goto LABEL_72;
        v5 = v90;
        ++v9;
        ++v10;
      }
      while ( !v9 );
      v14 = v90;
      v15 = CmpWalkPath(a1, v90, L"CurrentControlSet");
      if ( v15 == -1 )
      {
        v16 = 0;
        goto LABEL_75;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v15, v57);
      if ( v17 )
      {
        ValueByName = CmpFindValueByName(a1, v17, (__int64)&CmSymbolicLinkValueName);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v57);
        if ( ValueByName != -1 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, ValueByName, v54);
          v20 = v19;
          if ( v19 )
          {
            if ( *(_DWORD *)(v19 + 12) == 6 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v19 + 8), v55);
              v22 = 0LL;
              v23 = v21 == 0;
              v24 = v21;
              v25 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
              if ( v23 )
              {
                v25(a1, v54);
                v16 = -1073741670;
                goto LABEL_27;
              }
              v26 = (_WORD *)(v24 + *(unsigned int *)(v20 + 4) - 2LL);
              v25(a1, v54);
              v27 = 0;
              while ( *v26 != 92 && (unsigned __int64)v26 >= v24 )
              {
                ++v27;
                --v26;
              }
              PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * (v27 + 1), 0x68504D43u);
              v22 = PoolWithTag;
              if ( !PoolWithTag )
              {
                (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v55);
                v16 = -1073741801;
                goto LABEL_27;
              }
              v28 = v27;
              memmove(PoolWithTag, v26 + 1, v28 * 2);
              v22[v28] = 0;
              v15 = CmpWalkPath(a1, v14, v22);
              (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v55);
              if ( v15 == -1 )
              {
LABEL_25:
                v16 = 0;
LABEL_26:
                v22 = PoolWithTag;
                goto LABEL_27;
              }
            }
            else
            {
              (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v54);
            }
          }
        }
        v32 = 0;
        v33 = &v65;
        for ( i = 0; i < 2; ++i )
        {
          v35 = CmpWalkPath(a1, v15, (const WCHAR *)*(v33 - 1));
          *((_DWORD *)v33 + 2) = v35;
          if ( v35 != -1 )
          {
            if ( *v33 )
            {
              v36 = 88LL * i;
              v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v35, &v68[v36 / 4]);
              v33[2] = v37;
              if ( !v37 )
                goto LABEL_47;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)*v33);
              v38 = CmpFindValueByName(a1, v33[2], (__int64)&DestinationString);
              *((_DWORD *)v33 + 8) = v38;
              if ( v38 != -1 )
              {
                v32 = 1;
                v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v38, &v70[v36 / 4]);
                v33[5] = v39;
                if ( !v39 )
                  goto LABEL_47;
                if ( !CmpGetValueData(
                        a1,
                        *((unsigned int *)v33 + 8),
                        v39,
                        (unsigned int *)&v74[v36 - 4],
                        (__int64)&v71 + v36,
                        (__int64)&v74[v36],
                        (__int64)&v72 + v36) )
                {
                  v16 = -1073741492;
                  goto LABEL_26;
                }
              }
            }
            else
            {
              v32 = 1;
            }
          }
          v33 += 11;
        }
        if ( v32 )
        {
          v40 = v56;
          v41 = 0;
          if ( v56[5] )
          {
            while ( 1 )
            {
              CmpFindSubKeyByNumber(a2, v40, v41, &v89);
              v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v89, &v92);
              if ( !v42 )
                break;
              if ( *(_WORD *)(v42 + 72) == 13 )
              {
                v43 = (const char *)(v42 + 76);
                if ( (*(_BYTE *)(v42 + 2) & 0x20) != 0 )
                  v44 = strnicmp(v43, "ControlSet000", 0xAuLL);
                else
                  v44 = wcsnicmp((const wchar_t *)v43, L"ControlSet000", 0xAuLL);
                v45 = v44 == 0;
                (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v92);
                if ( v45 )
                {
                  v46 = 0;
                  v47 = &v66;
                  do
                  {
                    if ( *v47 != -1 && (!*((_QWORD *)v47 - 1) || v47[6] != -1) )
                    {
                      v48 = CmpWalkPath(a2, v89, *((const WCHAR **)v47 - 2));
                      if ( v48 != -1 )
                      {
                        if ( *((_QWORD *)v47 - 1) )
                        {
                          v49 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v48, &v92);
                          if ( !v49 )
                            goto LABEL_47;
                          RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v47 - 1));
                          v50 = CmpFindValueByName(a2, v49, (__int64)&DestinationString);
                          (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v92);
                          if ( v50 != -1 )
                          {
                            v51 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v50, v58);
                            if ( !v51 )
                              goto LABEL_47;
                            LODWORD(Size) = v47[16];
                            v16 = CmpSetValueKeyExisting(
                                    a2,
                                    v50,
                                    v51,
                                    *(_DWORD *)(*((_QWORD *)v47 + 4) + 12LL),
                                    *((void **)v47 + 6),
                                    Size,
                                    v50 >> 31);
                            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v58);
                            if ( v16 < 0 )
                              goto LABEL_26;
                          }
                        }
                        else
                        {
                          CmpCopySyncTree(a1, *v47, a2, v48, 2, 1);
                        }
                      }
                    }
                    ++v46;
                    v47 += 22;
                  }
                  while ( v46 < 2 );
                }
              }
              else
              {
                (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v92);
              }
              v40 = v56;
              if ( ++v41 >= v56[5] )
                goto LABEL_25;
            }
LABEL_47:
            v16 = -1073741670;
            goto LABEL_26;
          }
        }
        goto LABEL_25;
      }
    }
    v16 = -1073741670;
  }
LABEL_75:
  v22 = 0LL;
LABEL_27:
  v29 = &v69;
  v30 = v70;
  do
  {
    if ( *(v29 - 3) )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30 - 6);
    if ( *v29 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30);
    v31 = (void *)v29[2];
    if ( v31 )
    {
      if ( *((_BYTE *)v29 + 36) )
        ExFreePoolWithTag(v31, 0);
      else
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30 + 4);
    }
    v30 += 22;
    v29 += 11;
    --v61;
  }
  while ( v61 );
  if ( v62 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v59);
  if ( v56 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v60);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return (unsigned int)v16;
}
