/*
 * XREFs of CmpPreserveSystemHiveData @ 0x140874E8C
 * Callers:
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x1403CDA40 (_strnicmp.c)
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     CmpFindSubKeyByNumber @ 0x1405F9C40 (CmpFindSubKeyByNumber.c)
 *     CmpGetValueData @ 0x1406214E0 (CmpGetValueData.c)
 *     CmpFindValueByName @ 0x140657CA0 (CmpFindValueByName.c)
 *     CmpSetValueKeyExisting @ 0x1406978F8 (CmpSetValueKeyExisting.c)
 *     CmpWalkPath @ 0x140793AA4 (CmpWalkPath.c)
 *     CmpCopySyncTree @ 0x140873D24 (CmpCopySyncTree.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  __int64 v49; // rax
  int v50; // ebx
  unsigned int v51; // ebx
  __int64 v52; // rax
  size_t Size; // [rsp+28h] [rbp-D8h]
  _DWORD v55[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v56[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v57; // [rsp+50h] [rbp-B0h]
  _DWORD v58[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v59[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v60[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v61[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v65[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-58h] BYREF
  int v67; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-48h]
  _DWORD v69[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v71[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-20h] BYREF
  int v73; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v74; // [rsp+ECh] [rbp-14h] BYREF
  _BYTE v75[4]; // [rsp+F4h] [rbp-Ch] BYREF
  const wchar_t *v76; // [rsp+F8h] [rbp-8h]
  const wchar_t *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  int v80; // [rsp+118h] [rbp+18h]
  int v81; // [rsp+11Ch] [rbp+1Ch]
  int v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  int v84; // [rsp+130h] [rbp+30h]
  int v85; // [rsp+134h] [rbp+34h]
  __int64 v86; // [rsp+138h] [rbp+38h]
  int v87; // [rsp+140h] [rbp+40h]
  __int64 v88; // [rsp+144h] [rbp+44h]
  char v89; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v90; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v91; // [rsp+1A8h] [rbp+A8h]
  WCHAR *PoolWithTag; // [rsp+1B0h] [rbp+B0h]
  int v93; // [rsp+1B8h] [rbp+B8h] BYREF
  int v94; // [rsp+1BCh] [rbp+BCh]

  v62 = 2LL;
  v93 = -1;
  v94 = 0;
  v61[1] = 0;
  v59[1] = 0;
  v56[1] = 0;
  v58[1] = 0;
  v60[1] = 0;
  v55[1] = 0;
  v65[0] = L"WPA";
  v65[1] = L"Control\\FastCache";
  v69[1] = 0;
  v71[1] = 0;
  v74 = 0LL;
  v76 = L"Control\\ProductOptions";
  v77 = L"ProductPolicy";
  v81 = 0;
  v85 = 0;
  v88 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v61[0] = -1;
  v59[0] = -1;
  v56[0] = -1;
  v58[0] = -1;
  v60[0] = -1;
  v55[0] = -1;
  v66 = 0LL;
  v67 = -1;
  v68 = 0LL;
  v69[0] = -1;
  v69[2] = -1;
  v70 = 0LL;
  v71[0] = -1;
  v72 = 0LL;
  v73 = -1;
  v75[0] = 0;
  v78 = -1;
  v79 = 0LL;
  v80 = -1;
  v82 = -1;
  v83 = 0LL;
  v84 = -1;
  v86 = 0LL;
  v87 = -1;
  v89 = 0;
  v5 = *(_DWORD *)(v4 + 36);
  v90 = 0;
  PoolWithTag = 0LL;
  v63 = 0LL;
  v57 = 0LL;
  v91 = v5;
  DestinationString = 0LL;
  if ( v5 == -1 || (v6 = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 36LL), v6 == -1) )
  {
LABEL_72:
    v16 = -1073741492;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v5, v60);
    v63 = v7;
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v6, v61);
    v57 = (_DWORD *)v8;
    if ( v7 && v8 )
    {
      v9 = 0;
      v10 = (const WCHAR **)v65;
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
        v5 = v91;
        ++v9;
        ++v10;
      }
      while ( !v9 );
      v14 = v91;
      v15 = CmpWalkPath(a1, v91, L"CurrentControlSet");
      if ( v15 == -1 )
      {
        v16 = 0;
        goto LABEL_75;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v15, v58);
      if ( v17 )
      {
        ValueByName = CmpFindValueByName(a1, v17, (int)&CmSymbolicLinkValueName);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v58);
        if ( ValueByName != -1 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, ValueByName, v55);
          v20 = v19;
          if ( v19 )
          {
            if ( *(_DWORD *)(v19 + 12) == 6 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v19 + 8), v56);
              v22 = 0LL;
              v23 = v21 == 0;
              v24 = v21;
              v25 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
              if ( v23 )
              {
                v25(a1, v55);
                v16 = -1073741670;
                goto LABEL_27;
              }
              v26 = (_WORD *)(v24 + *(unsigned int *)(v20 + 4) - 2LL);
              v25(a1, v55);
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
                (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v56);
                v16 = -1073741801;
                goto LABEL_27;
              }
              v28 = v27;
              memmove(PoolWithTag, v26 + 1, v28 * 2);
              v22[v28] = 0;
              v15 = CmpWalkPath(a1, v14, v22);
              (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v56);
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
              (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v55);
            }
          }
        }
        v32 = 0;
        v33 = &v66;
        for ( i = 0; i < 2; ++i )
        {
          v35 = CmpWalkPath(a1, v15, (const WCHAR *)*(v33 - 1));
          *((_DWORD *)v33 + 2) = v35;
          if ( v35 != -1 )
          {
            if ( *v33 )
            {
              v36 = 88LL * i;
              v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v35, &v69[v36 / 4]);
              v33[2] = v37;
              if ( !v37 )
                goto LABEL_47;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)*v33);
              v38 = CmpFindValueByName(a1, v33[2], (int)&DestinationString);
              *((_DWORD *)v33 + 8) = v38;
              if ( v38 != -1 )
              {
                v32 = 1;
                v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v38, &v71[v36 / 4]);
                v33[5] = v39;
                if ( !v39 )
                  goto LABEL_47;
                if ( !CmpGetValueData(
                        a1,
                        *((unsigned int *)v33 + 8),
                        v39,
                        (unsigned int *)&v75[v36 - 4],
                        (__int64)&v72 + v36,
                        (__int64)&v75[v36],
                        (__int64)&v73 + v36) )
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
          v40 = v57;
          v41 = 0;
          if ( v57[5] )
          {
            while ( 1 )
            {
              CmpFindSubKeyByNumber(a2, v40, v41, &v90);
              v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v90, &v93);
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
                (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
                if ( v45 )
                {
                  v46 = 0;
                  v47 = &v67;
                  do
                  {
                    if ( *v47 != -1 && (!*((_QWORD *)v47 - 1) || v47[6] != -1) )
                    {
                      v48 = CmpWalkPath(a2, v90, *((const WCHAR **)v47 - 2));
                      if ( v48 != -1 )
                      {
                        if ( *((_QWORD *)v47 - 1) )
                        {
                          v49 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, v48, &v93);
                          v50 = v49;
                          if ( !v49 )
                            goto LABEL_47;
                          RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v47 - 1));
                          v51 = CmpFindValueByName(a2, v50, (int)&DestinationString);
                          (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
                          if ( v51 != -1 )
                          {
                            v52 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a2 + 8))(a2, v51, v59);
                            if ( !v52 )
                              goto LABEL_47;
                            LODWORD(Size) = v47[16];
                            v16 = CmpSetValueKeyExisting(
                                    a2,
                                    v51,
                                    v52,
                                    *(_DWORD *)(*((_QWORD *)v47 + 4) + 12LL),
                                    *((void **)v47 + 6),
                                    Size,
                                    v51 >> 31);
                            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v59);
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
                (*(void (__fastcall **)(ULONG_PTR, int *))(a2 + 16))(a2, &v93);
              }
              v40 = v57;
              if ( ++v41 >= v57[5] )
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
  v29 = &v70;
  v30 = v71;
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
    --v62;
  }
  while ( v62 );
  if ( v63 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v60);
  if ( v57 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a2 + 16))(a2, v61);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return (unsigned int)v16;
}
