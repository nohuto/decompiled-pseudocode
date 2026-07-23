/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x18001C2B4
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x18001D390 (RtlFindCharInUnicodeString.c)
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     RtlpEnsureBufferSize @ 0x18006ED30 (RtlpEnsureBufferSize.c)
 *     RtlGetAssemblyStorageRoot @ 0x180072FA0 (RtlGetAssemblyStorageRoot.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF54C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(
        _UNICODE_STRING *a1,
        char a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  _UNICODE_STRING v8; // xmm0
  _ACTIVATION_CONTEXT *hActCtx; // r12
  NTSTATUS ActivationContextSectionString; // eax
  int v11; // ebx
  wchar_t *v12; // rcx
  _DWORD *lpData; // r15
  ULONG ulSectionTotalLength; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  bool v18; // zf
  int v19; // edx
  int v20; // ecx
  int AssemblyStorageRoot; // eax
  char *v22; // rbx
  int v23; // edx
  unsigned __int64 v24; // rcx
  int v25; // r13d
  const void **v26; // rdx
  unsigned __int64 v27; // r8
  _QWORD *v28; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  const void **v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r12d
  int v36; // eax
  wchar_t *Buffer; // r13
  unsigned __int16 Length; // bx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int16 v42; // bx
  unsigned int v43; // ecx
  int v44; // r9d
  size_t v45; // r13
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  void *v48; // rdx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  NTSTATUS CharInUnicodeString; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  USHORT NonInclusivePrefixLength; // [rsp+30h] [rbp-D0h] BYREF
  _ACTIVATION_CONTEXT *v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  const void **v60; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  tagACTCTX_SECTION_KEYED_DATA v64; // [rsp+80h] [rbp-80h] BYREF
  int v65; // [rsp+F0h] [rbp-10h] BYREF
  void *v66; // [rsp+F8h] [rbp-8h]
  wchar_t *v67; // [rsp+100h] [rbp+0h]
  wchar_t *v68; // [rsp+108h] [rbp+8h]
  __int64 v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  __int16 v71; // [rsp+120h] [rbp+20h] BYREF

  *(_QWORD *)&UnicodeString.Length = a4;
  v64.cbSize = 112;
  memset(&v64.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v65 = 0x20000;
  v60 = 0LL;
  v67 = (wchar_t *)&v71;
  v71 = 0;
  v68 = (wchar_t *)&v71;
  v69 = 2LL;
  v70 = 2LL;
  v66 = &v71;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v64);
  v11 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v11 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v11 = 0;
    goto LABEL_4;
  }
  hActCtx = (_ACTIVATION_CONTEXT *)v64.hActCtx;
  v58 = (_ACTIVATION_CONTEXT *)v64.hActCtx;
  if ( v64.ulLength < 0x14
    || v64.ulDataFormatVersion != 1
    || (lpData = v64.lpData,
        ulSectionTotalLength = v64.ulSectionTotalLength,
        v16 = *((unsigned int *)v64.lpData + 4),
        (unsigned int)v16 > v64.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v64.lpData + 3), v17 > 0x1FFFFFFF)
    || v16 > 0xFFFFFFFF - 8 * (unsigned __int64)v17
    || (unsigned int)v16 + 8 * v17 > v64.ulSectionTotalLength )
  {
LABEL_56:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v64.lpData + 4) & 2) == 0 )
    goto LABEL_26;
  v18 = (*((_BYTE *)v64.lpData + 4) & 4) == 0;
  v19 = 0;
  v59 = 0;
  if ( !v18 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
    goto LABEL_56;
  }
  if ( (v64.ulFlags & 1) != 0 )
  {
    if ( (v64.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Bu,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v19 = 1;
  }
  v20 = v19 | 2;
  if ( (v64.ulFlags & 2) == 0 )
    v20 = v19;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                          v20,
                          v64.hActCtx,
                          v64.ulAssemblyRosterIndex,
                          (unsigned int)&v60,
                          (__int64)ReturnedData,
                          (__int64)&v59);
  v11 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot < 0 )
  {
    if ( AssemblyStorageRoot == -1073741536 && v59 < 0 )
      v11 = v59;
    goto LABEL_4;
  }
LABEL_26:
  v22 = (char *)v64.lpSectionBase + (unsigned int)lpData[4];
  v23 = 0;
  *a3 = 0LL;
  v24 = 0LL;
  v25 = lpData[3];
  v59 = v25;
  if ( !v25 )
  {
LABEL_27:
    v26 = v60;
    if ( v60 )
      *a3 = v24 + *(unsigned __int16 *)v60;
    v27 = *(unsigned __int16 *)a3 + 2LL;
    if ( v27 <= 0xFFFE )
    {
      v28 = a5 + 8;
      if ( a5 == (unsigned __int16 *)-16LL || v27 > *((_QWORD *)a5 + 4) )
      {
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          goto LABEL_67;
        v26 = v60;
      }
      *((_QWORD *)a5 + 1) = *v28;
      a5[1] = a5[16];
      if ( !v26 )
        goto LABEL_38;
      *a5 = 0;
      v29 = *(unsigned __int16 *)v26 + 2LL;
      if ( v29 <= 0xFFFE )
      {
        if ( v29 <= *((_QWORD *)a5 + 4) )
        {
LABEL_37:
          v30 = *v28;
          v31 = *a5;
          *((_QWORD *)a5 + 1) = *v28;
          memmove((void *)(v30 + 2 * (v31 >> 1)), v26[1], *(unsigned __int16 *)v26);
          v32 = v60;
          a5[1] = *a5 + *(_WORD *)v60 + 2;
          v33 = (unsigned __int16)(*a5 + *(_WORD *)v32);
          v34 = *((_QWORD *)a5 + 1);
          *a5 = v33;
          v24 = v33 >> 1;
          *(_WORD *)(v34 + 2 * v24) = 0;
LABEL_38:
          v35 = 0;
          if ( v25 )
          {
            while ( 1 )
            {
              v45 = *(unsigned __int16 *)&v22[8 * v35];
              v46 = v45 + *a5 + 2LL;
              Src = (char *)v64.lpSectionBase + *(unsigned int *)&v22[8 * v35 + 4];
              if ( v46 > 0xFFFE )
                break;
              if ( v46 > *((_QWORD *)a5 + 4) && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                goto LABEL_76;
              v47 = *v28;
              v48 = Src;
              v49 = (unsigned __int64)*a5 >> 1;
              *((_QWORD *)a5 + 1) = *v28;
              memmove((void *)(v47 + 2 * v49), v48, v45);
              v50 = (unsigned __int16)(*a5 + v45);
              ++v35;
              *a5 = v50;
              a5[1] = v50 + 2;
              v24 = v50 >> 1;
              *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
              if ( v35 == v59 )
                goto LABEL_39;
            }
          }
          else
          {
LABEL_39:
            v36 = lpData[1];
            if ( (v36 & 1) != 0 )
              goto LABEL_47;
            if ( (v36 & 8) != 0 )
            {
              CharInUnicodeString = RtlFindCharInUnicodeString(
                                      1u,
                                      &StringToFind,
                                      &RtlDosPathSeperatorsString,
                                      &NonInclusivePrefixLength);
              v11 = CharInUnicodeString;
              if ( CharInUnicodeString < 0 )
              {
                if ( CharInUnicodeString == -1073741275 )
                  RtlAssert(
                    "Internal error check failed",
                    "minkernel\\ntdll\\sxsisol.cpp",
                    0x477u,
                    (PSTR)"Status != STATUS_NOT_FOUND");
                goto LABEL_51;
              }
              Length = -2 - NonInclusivePrefixLength + StringToFind.Length;
              Buffer = &StringToFind.Buffer[((unsigned __int64)NonInclusivePrefixLength >> 1) + 1];
            }
            else
            {
              Buffer = StringToFind.Buffer;
              Length = StringToFind.Length;
            }
            *a3 += Length;
            if ( *a3 < 0xFFFF )
            {
              v39 = *a5 + (unsigned int)Length + 2LL;
              if ( v39 <= 0xFFFE )
              {
                if ( v39 > *((_QWORD *)a5 + 4) && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                {
LABEL_76:
                  v11 = -1073741801;
                  goto LABEL_51;
                }
                v40 = *v28;
                v41 = (unsigned __int64)*a5 >> 1;
                *((_QWORD *)a5 + 1) = *v28;
                memmove((void *)(v40 + 2 * v41), Buffer, Length);
                v42 = *a5 + Length;
                *a5 = v42;
                v24 = (unsigned __int64)v42 >> 1;
                a5[1] = v42 + 2;
                *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
                v36 = lpData[1];
LABEL_47:
                if ( (v36 & 4) == 0 )
                {
LABEL_48:
                  if ( *(_QWORD *)&UnicodeString.Length )
                    **(_DWORD **)&UnicodeString.Length |= 2u;
                  v11 = 0;
                  goto LABEL_51;
                }
                v11 = sxsisol_ExpandEnvironmentStrings_UEx(v24, a5, &v65);
                if ( v11 >= 0 )
                {
                  v52 = (unsigned __int16)v65;
                  *a5 = 0;
                  if ( (unsigned __int64)(v52 + 2) <= 0xFFFE )
                  {
                    if ( (unsigned __int64)(v52 + 2) > *((_QWORD *)a5 + 4) )
                    {
                      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                      {
                        v11 = -1073741801;
                        goto LABEL_51;
                      }
                      LOWORD(v52) = v65;
                    }
                    v53 = *v28;
                    v54 = (unsigned __int64)*a5 >> 1;
                    *((_QWORD *)a5 + 1) = *v28;
                    memmove((void *)(v53 + 2 * v54), v66, (unsigned __int16)v52);
                    v55 = (unsigned __int16)(*a5 + v65);
                    *a5 = v55;
                    a5[1] = v55 + 2;
                    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v55 >> 1)) = 0;
                    goto LABEL_48;
                  }
                  v11 = -1073741562;
                }
LABEL_51:
                hActCtx = v58;
                goto LABEL_4;
              }
            }
          }
          v11 = -1073741562;
          goto LABEL_51;
        }
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
        {
          v26 = v60;
          goto LABEL_37;
        }
LABEL_67:
        v11 = -1073741801;
        goto LABEL_4;
      }
    }
    v11 = -1073741562;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v43 = *(_DWORD *)&v22[8 * v23 + 4];
    if ( v43 > ulSectionTotalLength )
      break;
    v44 = *(_DWORD *)&v22[8 * v23];
    if ( v43 > ~v44 || v44 + v43 > ulSectionTotalLength )
      break;
    ++v23;
    v24 = *a3 + (unsigned __int16)v44;
    *a3 = v24;
    if ( v23 == v25 )
      goto LABEL_27;
  }
  v11 = -1072365565;
LABEL_4:
  v12 = v68;
  if ( v67 )
  {
    if ( v67 != v68 )
    {
      UnicodeString.Buffer = v67;
      RtlFreeAnsiString(&UnicodeString);
      v12 = v68;
    }
    v69 = v70;
    v67 = v12;
  }
  v66 = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v65) = v70;
  LOWORD(v65) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
