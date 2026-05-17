/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180034EA0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048EFC (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x18007DA10 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpGetFromMUIMemCache @ 0x1800335B8 (LdrpGetFromMUIMemCache.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     LdrMapAndVerifyResourceFile @ 0x18004B8F4 (LdrMapAndVerifyResourceFile.c)
 *     GetOverlayFilePath @ 0x18004CF6C (GetOverlayFilePath.c)
 *     LdrpGetDataModulePath @ 0x18006A008 (LdrpGetDataModulePath.c)
 *     LdrpQuerySxSMUIFile @ 0x18007647C (LdrpQuerySxSMUIFile.c)
 *     LdrpGetFileDriverStoreRoot @ 0x180079020 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084144 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C3E0 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180091FA0 (wcsrchr.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CF934 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0EBC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E163C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, __int16 a2, __int64 *a3, _QWORD *a4, int a5)
{
  __int64 *v6; // r15
  wchar_t *v7; // rdi
  __int64 v8; // r14
  _BYTE *v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // r8
  int v13; // r13d
  int v14; // r12d
  int DataModulePath; // eax
  unsigned __int64 v16; // rax
  int ModuleInfoFromVirtualMemory; // edi
  const wchar_t *v18; // rdx
  int v19; // r15d
  int v20; // edi
  int v21; // r8d
  WCHAR *v22; // rdx
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 Heap; // rax
  __int64 v30; // rax
  WCHAR *i; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r8d
  __int64 v36; // rcx
  char v37[4]; // [rsp+50h] [rbp-AB8h] BYREF
  int OverlayFilePath; // [rsp+54h] [rbp-AB4h]
  char v39; // [rsp+58h] [rbp-AB0h]
  char v40; // [rsp+59h] [rbp-AAFh]
  unsigned __int16 v41; // [rsp+5Ah] [rbp-AAEh]
  unsigned int v42; // [rsp+5Ch] [rbp-AACh] BYREF
  int v43; // [rsp+60h] [rbp-AA8h] BYREF
  _WORD *v44; // [rsp+68h] [rbp-AA0h]
  __int64 v45; // [rsp+70h] [rbp-A98h]
  __int64 v46; // [rsp+78h] [rbp-A90h] BYREF
  int v47; // [rsp+80h] [rbp-A88h] BYREF
  unsigned int v48; // [rsp+84h] [rbp-A84h] BYREF
  int v49; // [rsp+88h] [rbp-A80h]
  __int64 *v50; // [rsp+90h] [rbp-A78h]
  __int64 v51; // [rsp+98h] [rbp-A70h] BYREF
  const void *v52; // [rsp+A0h] [rbp-A68h] BYREF
  char *v53; // [rsp+A8h] [rbp-A60h]
  wchar_t *Str; // [rsp+B0h] [rbp-A58h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-A50h] BYREF
  char *v56; // [rsp+C0h] [rbp-A48h]
  wchar_t *v57; // [rsp+C8h] [rbp-A40h]
  __int64 v58; // [rsp+D0h] [rbp-A38h] BYREF
  HANDLE v59; // [rsp+D8h] [rbp-A30h] BYREF
  wchar_t *v60; // [rsp+E0h] [rbp-A28h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-A20h] BYREF
  _BYTE *v62; // [rsp+F0h] [rbp-A18h]
  __int64 v63; // [rsp+F8h] [rbp-A10h]
  _QWORD *v64; // [rsp+100h] [rbp-A08h]
  int v65; // [rsp+108h] [rbp-A00h] BYREF
  __int64 v66; // [rsp+110h] [rbp-9F8h]
  int v67; // [rsp+118h] [rbp-9F0h] BYREF
  _WORD *v68; // [rsp+120h] [rbp-9E8h]
  _BYTE v69[24]; // [rsp+128h] [rbp-9E0h] BYREF
  __int64 v70; // [rsp+140h] [rbp-9C8h] BYREF
  int v71; // [rsp+148h] [rbp-9C0h]
  __int128 v72; // [rsp+150h] [rbp-9B8h]
  __int128 v73; // [rsp+160h] [rbp-9A8h]
  __int128 v74; // [rsp+170h] [rbp-998h]
  __int64 v75; // [rsp+180h] [rbp-988h]
  WCHAR v76[2]; // [rsp+18Ch] [rbp-97Ch] BYREF
  WCHAR SourceString[352]; // [rsp+190h] [rbp-978h] BYREF
  char v78; // [rsp+450h] [rbp-6B8h] BYREF
  _WORD v79[352]; // [rsp+490h] [rbp-678h] BYREF
  char v80; // [rsp+750h] [rbp-3B8h] BYREF
  _BYTE v81[704]; // [rsp+800h] [rbp-308h] BYREF

  v64 = a4;
  v6 = a3;
  v50 = a3;
  v41 = a2;
  v45 = a1;
  v59 = 0LL;
  v47 = 0;
  v7 = 0LL;
  Str = 0LL;
  v42 = 0;
  v63 = 0LL;
  v51 = 0LL;
  v61 = 0LL;
  v39 = 0;
  v70 = 72LL;
  v71 = 1;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v37[0] = 0;
  v57 = 0LL;
  v60 = 0LL;
  v40 = 1;
  v8 = 0LL;
  v58 = 0LL;
  v9 = v81;
  v62 = v81;
  v48 = 702;
  v49 = 1;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v10 = LdrpGetFromMUIMemCache(a1, a2, &v51, 4);
  if ( v10 == (_DWORD *)-1LL )
  {
    v13 = a5;
    v14 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *v6 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v10 )
    {
      *v6 = (__int64)v10;
      if ( a4 )
        *a4 = v51;
      OverlayFilePath = 0;
      return 0LL;
    }
    v13 = a5;
    v14 = a5 & 0x400000;
  }
  v46 = 0LL;
  if ( v14 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v45, SourceString, v11, &v47, &Str, &v42, &v58);
    v7 = Str;
    v8 = v58;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v45, SourceString, 702LL, &v47, &v60, &v42, v37);
    OverlayFilePath = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
    {
LABEL_84:
      v23 = v45;
      goto LABEL_41;
    }
    v7 = v60;
    Str = v60;
  }
  v16 = v47 & 0xFFFFFFFE;
  if ( v16 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)SourceString + v16) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(SourceString, v7) >= 0 )
  {
    v7 = v57;
    Str = v57;
    v32 = -1LL;
    do
      ++v32;
    while ( v57[v32] );
    v42 = 2 * v32;
  }
  v55 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v68 = v79;
  v67 = 46006272;
  v66 = 0LL;
  v65 = 0;
  if ( (unsigned __int64)v42 + 12 > 0x3C )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v42 + 10);
    v63 = Heap;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_93:
      OverlayFilePath = ModuleInfoFromVirtualMemory;
LABEL_94:
      v6 = v50;
      goto LABEL_84;
    }
    v56 = (char *)Heap;
    WORD1(v55) = 2 * (v42 + 5);
    v7 = Str;
    v8 = v58;
  }
  else
  {
    v56 = &v78;
    WORD1(v55) = 60;
  }
  LOWORD(v55) = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v55, v7);
  OverlayFilePath = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_94;
  v18 = L".mun";
  v19 = v13 & 0x1000000;
  if ( (v13 & 0x1000000) == 0 )
    v18 = L".mui";
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&v55, v18);
  OverlayFilePath = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_94;
  if ( v8 )
    RtlActivateActivationContextUnsafeFast((__int64)&v70, v8);
  v20 = LdrpQuerySxSMUIFile(&v55, v41, &v67, &v65, &v61);
  if ( v8 )
    RtlDeactivateActivationContextUnsafeFast((__int64)&v70);
  if ( v20 >= 0 )
  {
    v39 = 1;
    v44 = *(_WORD **)(v61 + 8);
    v43 = *(_DWORD *)v61;
  }
  if ( v39 )
  {
    v49 = 0;
LABEL_36:
    v23 = v45;
LABEL_37:
    LOBYTE(v21) = v37[0];
    v24 = LdrMapAndVerifyResourceFile(
            v23,
            (unsigned int)&v43,
            v21,
            v13,
            (__int64)v53,
            v49,
            (__int64)&v59,
            (__int64)&v51,
            (__int64)&v46);
    ModuleInfoFromVirtualMemory = v24;
    OverlayFilePath = v24;
    if ( !v19
      && (v24 == -1073741766 || v24 == -1073741772)
      && (unsigned __int8)LdrpGetFileDriverStoreRoot(SourceString, v25, v79) )
    {
      v44 = v79;
      v34 = -1LL;
      do
        ++v34;
      while ( v79[v34] );
      LOWORD(v43) = 2 * v34;
      HIWORD(v43) = 702;
      RtlAppendUnicodeToString(&v43, L"\\");
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v43, &v52);
      RtlAppendUnicodeToString(&v43, L"\\");
      RtlAppendUnicodeToString(&v43, v56);
      LOBYTE(v35) = v37[0];
      ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                      v23,
                                      (unsigned int)&v43,
                                      v35,
                                      v13,
                                      (__int64)v53,
                                      v49,
                                      (__int64)&v59,
                                      (__int64)&v51,
                                      (__int64)&v46);
      OverlayFilePath = ModuleInfoFromVirtualMemory;
    }
    goto LABEL_40;
  }
  v44 = v79;
  v43 = 46006272;
  if ( !v19 )
  {
    v22 = SourceString;
    goto LABEL_30;
  }
  v30 = -1LL;
  do
    ++v30;
  while ( SourceString[v30] );
  for ( i = &v76[(unsigned int)v30]; i > SourceString && *i != 92; --i )
    ;
  if ( i <= SourceString )
  {
    ModuleInfoFromVirtualMemory = -1073741686;
    goto LABEL_93;
  }
  i[1] = 0;
  RtlAppendUnicodeToString(&v43, SourceString);
  v22 = L"SystemResources\\";
LABEL_30:
  RtlAppendUnicodeToString(&v43, v22);
  if ( !v19 )
  {
    v53 = &v80;
    WORD1(v52) = 170;
    if ( (int)RtlLcidToLocaleName(v41, &v52, 2LL, 0LL) >= 0 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v43, &v52);
      RtlAppendUnicodeToString(&v43, L"\\");
      goto LABEL_33;
    }
    ModuleInfoFromVirtualMemory = -1073741811;
    goto LABEL_93;
  }
LABEL_33:
  RtlAppendUnicodeToString(&v43, v56);
  if ( v19 )
    goto LABEL_36;
  OverlayFilePath = GetOverlayFilePath(v53, v44, &v48, v81);
  if ( OverlayFilePath == -1073741789 )
  {
    v33 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v48);
    v9 = (_BYTE *)v33;
    v62 = (_BYTE *)v33;
    if ( v33 )
      OverlayFilePath = GetOverlayFilePath(v53, v44, &v48, v33);
  }
  if ( OverlayFilePath < 0 || (int)RtlInitUnicodeStringEx((__int64)v69, (__int64)v9) < 0 )
    goto LABEL_36;
  LOBYTE(v21) = v37[0];
  v23 = v45;
  ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                  v45,
                                  (unsigned int)v69,
                                  v21,
                                  v13,
                                  (__int64)v53,
                                  2,
                                  (__int64)&v59,
                                  (__int64)&v51,
                                  (__int64)&v46);
  OverlayFilePath = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
  {
    if ( ModuleInfoFromVirtualMemory != -1073741772 )
    {
      LOBYTE(v21) = v37[0];
      LdrpLogMapAndVerifyResourceFileFailure(ModuleInfoFromVirtualMemory, (unsigned int)v69, v21, v13, (__int64)&v52);
    }
    goto LABEL_37;
  }
  RtlInitUnicodeStringEx((__int64)&v43, (__int64)v9);
LABEL_40:
  v6 = v50;
LABEL_41:
  v26 = v46;
  if ( !v46 )
    v26 = -1LL;
  v46 = v26;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v27 = 0;
  }
  else
  {
    v27 = v40;
  }
  if ( v27 )
    LdrpSetAlternateResourceModuleHandle(v23, &v46, &v59, 0LL, v41, v14 != 0 ? 33 : 1, ModuleInfoFromVirtualMemory, v51);
  if ( v46 == -1 )
  {
    *v6 = 0LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v28 = 2147353477LL;
    if ( (*(_BYTE *)v28 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v36 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v36 = 2147353476LL;
      LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v36);
    }
    *v6 = v46;
    if ( v64 )
      *v64 = v51;
    ModuleInfoFromVirtualMemory = 0;
    OverlayFilePath = 0;
  }
  if ( v60 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v60);
    ModuleInfoFromVirtualMemory = OverlayFilePath;
  }
  if ( v57 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v57);
    ModuleInfoFromVirtualMemory = OverlayFilePath;
  }
  if ( v63 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v63);
    ModuleInfoFromVirtualMemory = OverlayFilePath;
  }
  if ( v9 && v81 != v9 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
    return (unsigned int)OverlayFilePath;
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
