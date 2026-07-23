/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180033BCC
 * Callers:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlLoadString @ 0x180046FA0 (RtlLoadString.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDF8 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x180069010 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x180070690 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x180080FE0 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800E11F0 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     ResourceEntryBinarySearch @ 0x180034888 (ResourceEntryBinarySearch.c)
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrIsResItemExist @ 0x180034BD4 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlULongAdd @ 0x180038AC4 (RtlULongAdd.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CE4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpResGetMappingSize @ 0x18004AC40 (LdrpResGetMappingSize.c)
 *     LdrpGetParentLangId @ 0x18007E1F4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008DD70 (_wcsicmp.c)
 *     RtlULongMult @ 0x18009C548 (RtlULongMult.c)
 *     NtQueryDefaultLocale @ 0x18009D350 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(void *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  PVOID v8; // r8
  __int64 v10; // rbx
  int v11; // ecx
  __int16 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned __int64 CurrentLocale_low; // rcx
  int v21; // r15d
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r14d
  PVOID Heap; // rax
  PVOID v27; // rdx
  int v28; // edi
  __int64 v29; // rcx
  PVOID v30; // r15
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int16 v37; // ax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // edi
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  struct _TEB *v47; // rax
  _DWORD *RcConfig; // rax
  __int64 v49; // r10
  __int16 v50; // r11
  unsigned int *v51; // rdx
  PVOID v52; // r14
  unsigned __int64 v53; // r8
  __int64 v54; // rcx
  unsigned int v55; // ecx
  __int64 v56; // rdi
  int ResourceFromAlternativeModule; // eax
  int v58; // eax
  int v59; // eax
  _WORD v60[2]; // [rsp+40h] [rbp-128h] BYREF
  bool v61; // [rsp+44h] [rbp-124h]
  NTSTATUS v62; // [rsp+48h] [rbp-120h]
  __int16 v63; // [rsp+4Ch] [rbp-11Ch]
  unsigned int v64; // [rsp+50h] [rbp-118h]
  unsigned int v65; // [rsp+58h] [rbp-110h]
  __int64 v66; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v67; // [rsp+68h] [rbp-100h]
  PVOID BaseOfImage; // [rsp+70h] [rbp-F8h]
  __int64 v69; // [rsp+78h] [rbp-F0h]
  int v70; // [rsp+80h] [rbp-E8h]
  unsigned int v71; // [rsp+84h] [rbp-E4h]
  char v72[4]; // [rsp+88h] [rbp-E0h] BYREF
  DWORD v73; // [rsp+8Ch] [rbp-DCh] BYREF
  __int64 v74; // [rsp+90h] [rbp-D8h]
  __int64 v75; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-C8h] BYREF
  DWORD DefaultLocaleId; // [rsp+A8h] [rbp-C0h] BYREF
  DWORD Lcid; // [rsp+ACh] [rbp-BCh] BYREF
  unsigned int v79; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v80; // [rsp+B4h] [rbp-B4h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-A0h]
  unsigned int v84; // [rsp+D0h] [rbp-98h] BYREF
  struct _TEB *v85; // [rsp+D8h] [rbp-90h]
  unsigned int *v86; // [rsp+E0h] [rbp-88h]
  __int64 *v87; // [rsp+E8h] [rbp-80h]
  _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v89; // [rsp+100h] [rbp-68h]
  __int64 v90; // [rsp+108h] [rbp-60h]
  __int64 v91; // [rsp+110h] [rbp-58h]
  __int64 v92; // [rsp+118h] [rbp-50h]

  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  BaseOfImage = a1;
  v64 = a4;
  v69 = a5;
  v10 = 0LL;
  v61 = 0;
  v81 = 0LL;
  v71 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v11 = a3;
  if ( a3 == 4 )
    v11 = 3;
  v65 = v11;
  v70 = v11;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v11 - 1) <= 2 )
  {
    if ( v11 == 3 )
      v12 = *(_WORD *)(a2 + 16);
    else
      v12 = 0;
    v63 = v12;
    v13 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v13 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v14 = wcsicmp((const wchar_t *)v13, L"MUI"), v8 = BaseOfImage, v14))
      || (~(_BYTE)v5 & 8) == 0
      || (v12 & 0xF3FF) != 0
      || v12 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v64 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v62 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v89 = *v7;
          if ( v65 < 2 )
            v16 = 0LL;
          else
            v16 = v7[1];
          v90 = v16;
          if ( v65 == 3 )
            v10 = v7[2];
          v91 = v10;
          if ( a3 == 4 )
            v92 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v69);
          v62 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v64 = v5;
    }
  }
  v17 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 2u, &v84, (char **)&v82);
  v19 = v82;
  if ( v17 < 0 )
    v19 = 0LL;
  v82 = v19;
  v83 = v19;
  if ( !v19 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(BaseOfImage, &v81, 256LL, v18);
  v62 = result;
  if ( (int)result >= 0 )
  {
    v76 = v19;
    v66 = 61166LL;
    v67 = 0;
    CurrentLocale_low = 0LL;
    v75 = 0LL;
    v74 = 0LL;
    v60[0] = 0;
    v63 = 0;
    v73 = 0;
    v21 = -1073741811;
    while ( 1 )
    {
      v22 = 3221225610LL;
      if ( !v19 )
        goto LABEL_48;
      v23 = v70;
      v22 = (unsigned int)--v70;
      if ( !v23 )
        goto LABEL_47;
      if ( !(_DWORD)v22 )
      {
        v24 = v74;
        if ( v65 == 3 )
          v24 = v19;
        v74 = v24;
      }
      if ( v74 )
      {
        v60[0] = 0;
        v63 = *(_WORD *)(a2 + 16);
        v61 = (v63 & 0x3FF) == 0;
        v25 = v65;
        goto LABEL_77;
      }
LABEL_155:
      result = RtlULongAdd(*(unsigned __int16 *)(v19 + 12), *(unsigned __int16 *)(v19 + 14), &v79);
      v62 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v79, 8LL, &v80);
      v62 = result;
      if ( (int)result < 0 )
        return result;
      v51 = (unsigned int *)(v19 + 16);
      v86 = v51;
      v52 = BaseOfImage;
      v53 = v81 + ((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v51 + v80 > v53 )
        return 3221225595LL;
      v54 = *v7;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v51 += 2 * v49;
        v86 = v51;
        LOWORD(v49) = v50;
      }
      if ( !(_WORD)v49 )
      {
        v55 = v65;
        switch ( v65 - v70 )
        {
          case 1u:
            v21 = -1073741686;
            break;
          case 2u:
            v21 = -1073741685;
            v62 = -1073741685;
            goto LABEL_169;
          case 3u:
            v21 = -1073741308;
            v62 = -1073741308;
            return (unsigned int)v21;
        }
        v62 = v21;
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
LABEL_169:
          if ( (v5 & 0x2040000) == 0 && v65 == 3 )
          {
            v89 = *(_QWORD *)a2;
            v90 = *(_QWORD *)(a2 + 8);
            v91 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v92 = *(_QWORD *)(a2 + 24);
            v56 = v69;
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v69);
            v55 = v65;
            if ( ResourceFromAlternativeModule != -1073020927 )
            {
              if ( ResourceFromAlternativeModule != -1073020922 )
                v21 = ResourceFromAlternativeModule;
              v62 = v21;
            }
            goto LABEL_178;
          }
        }
        v56 = v69;
LABEL_178:
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
          v58 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v58 & 0x20000) != 0 && (v58 & 0x10) != 0 && v55 == 3 )
          {
            v89 = *(_QWORD *)a2;
            v90 = *(_QWORD *)(a2 + 8);
            v91 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v92 = *(_QWORD *)(a2 + 24);
            v21 = LdrpLoadResourceFromAlternativeModule(v52, v56);
            v62 = v21;
            if ( v21 >= 0 )
              LdrpResReportResourceAccessInternal(v52);
          }
        }
        return (unsigned int)v21;
      }
      if ( v74 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               (_DWORD)BaseOfImage,
                               v81,
                               (unsigned __int16)v49,
                               v83,
                               (__int64)v51,
                               v54,
                               (__int64)&v76,
                               (__int64)&v75) )
        return 3221225595LL;
      v87 = ++v7;
      v19 = v76;
      CurrentLocale_low = v75;
    }
    v19 = 0LL;
    v76 = 0LL;
    v66 = *v51;
    CurrentLocale_low = v83 + v51[1];
    if ( CurrentLocale_low > v53 )
      return 3221225595LL;
    v75 = v83 + v51[1];
LABEL_47:
    v22 = 3221225610LL;
LABEL_48:
    if ( CurrentLocale_low && (v5 & 2) == 0 )
    {
      *(_QWORD *)v69 = CurrentLocale_low;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v85 = NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v85->ResourceRetValue = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v27 = BaseOfImage;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = BaseOfImage;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v75;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v27;
      }
      v28 = 0;
      v62 = 0;
      v5 = v64;
      v25 = v65;
      goto LABEL_55;
    }
    if ( v19 && (v5 & 2) != 0 )
    {
      v29 = v69;
      *(_QWORD *)v69 = v19;
      v28 = 0;
      v62 = 0;
      v25 = v65;
      goto LABEL_56;
    }
    v25 = v65;
    if ( v65 - v70 == 1 )
    {
      v28 = -1073741686;
      v62 = -1073741686;
      goto LABEL_55;
    }
    if ( v65 - v70 == 2 )
    {
      v28 = -1073741685;
      v62 = -1073741685;
      goto LABEL_55;
    }
    if ( v65 - v70 != 3 )
    {
      v28 = -1073741811;
      v62 = -1073741811;
      goto LABEL_55;
    }
    v28 = -1073741308;
    v62 = -1073741308;
    if ( v74 )
    {
      v75 = 0LL;
      while ( 1 )
      {
LABEL_77:
        v32 = v67++;
        if ( v32 > 6 )
        {
          v42 = v32 - 7;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( !v43 )
            {
              v60[0] = v66;
              if ( (~v5 & 0x80000) == 0 )
              {
                if ( NtCurrentTeb() )
                {
                  v47 = NtCurrentTeb();
                  CurrentLocale_low = LOWORD(v47->CurrentLocale);
                  v60[0] = v47->CurrentLocale;
                }
                v5 = v64;
                goto LABEL_152;
              }
              goto LABEL_140;
            }
            v44 = v43 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                v46 = v45 - 1;
                if ( v46 )
                {
                  if ( v46 != 1 )
                    return 3221225988LL;
LABEL_140:
                  v5 |= 0x20u;
                  v64 = v5;
                  goto LABEL_152;
                }
                v37 = 1033;
              }
              else
              {
                v60[0] = v66;
                v62 = NtQueryDefaultLocale(0, &DefaultLocaleId);
                if ( v62 < 0 )
                  goto LABEL_152;
                v37 = DefaultLocaleId;
                if ( DefaultLocaleId == v73 )
                  goto LABEL_152;
              }
            }
            else
            {
              v60[0] = v66;
              v62 = NtQueryDefaultLocale(1u, &v73);
              if ( v62 < 0 )
                goto LABEL_152;
              v37 = v73;
            }
          }
          else
          {
            if ( (~v5 & 0x80000) == 0 )
              goto LABEL_150;
            RcConfig = (_DWORD *)LdrpGetRcConfig(BaseOfImage);
            if ( !RcConfig )
              goto LABEL_150;
            if ( *RcConfig != -20054323 )
              goto LABEL_150;
            if ( !RcConfig[31] )
              goto LABEL_150;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
            if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
              goto LABEL_150;
            v37 = Lcid;
          }
        }
        else
        {
          if ( v32 == 6 )
          {
            v60[0] = v66;
            if ( (v5 & 0x20) != 0 )
              goto LABEL_152;
            v60[0] = 0;
            if ( (unsigned __int8)LdrpSetThreadPreferredLangList(CurrentLocale_low, v22, 1023LL) )
            {
              CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v71 >= (unsigned int)CurrentLocale_low )
                v60[0] = 0;
              else
                GetLCIDFromLangListNodeWithLICCheck(
                  CurrentLocale_low,
                  NtCurrentTeb()->MergedPrefLanguages,
                  v71,
                  (unsigned int)v60,
                  (__int64)v72);
              v5 = v64;
            }
            else
            {
              v60[0] = 0;
            }
            if ( v60[0] )
            {
              ++v71;
LABEL_125:
              --v67;
              goto LABEL_152;
            }
            goto LABEL_150;
          }
          if ( !v32 )
          {
            if ( !v63 )
            {
LABEL_95:
              v60[0] = 0;
              goto LABEL_152;
            }
            v37 = v66;
            if ( (v5 & 0x80000) != 0 )
              v37 = v63;
            goto LABEL_151;
          }
          v33 = v32 - 1;
          if ( !v33 )
          {
            v38 = ~v5;
            if ( (~v5 & 0x80000) != 0 && (v38 & 0x20000) != 0 && (v38 & 0x10) != 0 )
            {
              v89 = *(_QWORD *)a2;
              if ( v25 < 2 )
                v39 = 0LL;
              else
                v39 = *(_QWORD *)(a2 + 8);
              v90 = v39;
              if ( v25 == 3 )
                v40 = *(_QWORD *)(a2 + 16);
              else
                v40 = 0LL;
              v91 = v40;
              if ( a3 == 4 )
                v92 = *(_QWORD *)(a2 + 24);
              v41 = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v69);
              v62 = v41;
              if ( v41 >= 0 )
              {
                LdrpResReportResourceAccessInternal(BaseOfImage);
                return (unsigned int)v41;
              }
            }
LABEL_150:
            v37 = v66;
            goto LABEL_151;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            v37 = v63;
            if ( v61 )
              v37 = v66;
            goto LABEL_151;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            if ( (v5 & 4) != 0 )
              return 3221225988LL;
            if ( !v61 )
            {
              if ( (int)LdrpGetParentLangId(v60[0], v60, 1023LL) < 0 )
                goto LABEL_95;
              if ( !v60[0] )
                goto LABEL_152;
              goto LABEL_125;
            }
            goto LABEL_150;
          }
          v36 = v35 - 1;
          if ( v36 )
          {
            if ( v36 != 1 )
              return 3221225988LL;
            if ( !v61 )
              return 3221225988LL;
            goto LABEL_150;
          }
          if ( v61 )
            goto LABEL_150;
          v37 = v63 & 0x3FF;
        }
LABEL_151:
        v60[0] = v37;
LABEL_152:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v60[0] != v66 )
        {
          v66 = v60[0];
          v7 = &v66;
          v87 = &v66;
          v19 = v74;
          v76 = v74;
          goto LABEL_155;
        }
      }
    }
LABEL_55:
    v29 = v69;
LABEL_56:
    if ( (v5 & 0x2040000) != 0 || (unsigned int)(v28 + 1073741686) > 1 || v25 != 3 )
    {
      v30 = BaseOfImage;
    }
    else
    {
      v89 = *(_QWORD *)a2;
      v90 = *(_QWORD *)(a2 + 8);
      v91 = *(_QWORD *)(a2 + 16);
      if ( a3 == 4 )
        v92 = *(_QWORD *)(a2 + 24);
      v30 = BaseOfImage;
      v31 = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v29);
      if ( v31 != -1073020927 )
      {
        if ( v31 != -1073020922 )
          v28 = v31;
        v62 = v28;
      }
    }
    if ( (unsigned int)(v28 + 1073741686) <= 1 )
    {
      v59 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v59 & 0x20000) != 0 && (v59 & 0x10) != 0 && v25 == 3 )
      {
        v89 = *(_QWORD *)a2;
        v90 = *(_QWORD *)(a2 + 8);
        v91 = *(_QWORD *)(a2 + 16);
        if ( a3 == 4 )
          v92 = *(_QWORD *)(a2 + 24);
        v28 = LdrpLoadResourceFromAlternativeModule(v30, v69);
        v62 = v28;
        if ( v28 >= 0 )
          LdrpResReportResourceAccessInternal(v30);
      }
    }
    return (unsigned int)v28;
  }
  return result;
}
