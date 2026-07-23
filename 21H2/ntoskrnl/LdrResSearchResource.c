/*
 * XREFs of LdrResSearchResource @ 0x1405EBFB0
 * Callers:
 *     PspLocateInPEManifest @ 0x1405EBEAC (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x14078C7F0 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x14078E120 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x1407ABBBC (SeRegisterElamCertResources.c)
 *     AslpFileGetVersionBlock @ 0x1407B33C4 (AslpFileGetVersionBlock.c)
 *     RtlLoadString @ 0x140911820 (RtlLoadString.c)
 *     KeHwPolicyLocateResource @ 0x140A66230 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x140226068 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x140227614 (LdrLoadAlternateResourceModuleEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140227AFC (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1403A8368 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     LdrpResGetMappingSize @ 0x1405EC380 (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  void *v10; // rsi
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // edi
  __int64 result; // rax
  bool v15; // zf
  int v16; // eax
  unsigned __int16 v17; // ax
  __int64 v18; // r12
  ULONG64 v19; // [rsp+58h] [rbp-80h] BYREF
  PVOID ResourceDllBase; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v21; // [rsp+68h] [rbp-70h]
  __int64 v22; // [rsp+70h] [rbp-68h]
  _QWORD v23[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-50h]

  v8 = a3;
  v21 = a5;
  v22 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v12 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v12 = a4;
  v13 = v12 | 0x1000;
  if ( (v12 & 0x2000) != 0 )
    v13 = v12;
  if ( (v13 & 0xFFF00000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v13 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v13 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_22;
  }
  if ( (v13 & 0x41) == 0 )
    return 3221225714LL;
LABEL_22:
  if ( (v13 & 0x100) != 0 )
  {
    v15 = (v13 & 0xE00) == 0;
    goto LABEL_24;
  }
  v16 = v13 & 0xC00;
  if ( (v13 & 0x200) != 0 )
  {
    v15 = v16 == 0;
LABEL_24:
    if ( !v15 )
      return (unsigned int)-1073741582;
    goto LABEL_29;
  }
  if ( v16 == 3072 )
    return (unsigned int)-1073741582;
LABEL_29:
  if ( (v13 & 0x8000) != 0 && (~(_WORD)v13 & 0x810) != 0 || (v13 & 0x3000) == 0x3000 || (v13 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v19 = 0LL;
  if ( (v13 & 0x20000) != 0 )
  {
    if ( (v13 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v19 = *a6;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    if ( (v13 & 0x300) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v19 = *a6;
  }
  memmove(v23, a2, 8LL * a3);
  if ( v8 <= 3 )
  {
    if ( v8 != 3 )
      goto LABEL_57;
  }
  else
  {
    v8 = 3;
  }
  if ( v24 >= 0x10000 )
  {
    if ( *(_WORD *)v24 )
    {
      v17 = DownLevelLanguageNameToLangID((const void *)v24, 2);
      LODWORD(ResourceDllBase) = v17;
    }
    else
    {
      v17 = 0;
      LODWORD(ResourceDllBase) = 0;
    }
    v24 = v17;
    goto LABEL_57;
  }
  if ( v24 && ((v24 & 0x3FF) == 0 || v24 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v24, 0LL, 0, 2)) )
    return (unsigned int)-1073741811;
LABEL_57:
  if ( (v13 & 0x300) == 0 )
    goto LABEL_63;
  v10 = (void *)a1;
  if ( (v13 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
  }
  result = LdrpResGetMappingSize(v10, &v19, v13);
  if ( (int)result >= 0 || (v13 & 0x1000) == 0 )
  {
LABEL_63:
    v18 = v22;
    v11 = LdrpResSearchResourceMappedFile(v10, v19, v13, (__int64)v23, v8, v21, a6, a7, v22);
    if ( v11 == -1073741686 && ((v23[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      ResourceDllBase = 0LL;
      if ( LdrLoadAlternateResourceModuleEx(v10, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) >= 0 )
      {
        v19 = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, &v19, v13) >= 0 )
          return (unsigned int)LdrpResSearchResourceMappedFile(
                                 ResourceDllBase,
                                 v19,
                                 v13 | 0x1000000,
                                 (__int64)v23,
                                 v8,
                                 v21,
                                 a6,
                                 a7,
                                 v18);
      }
    }
    return v11;
  }
  return result;
}
