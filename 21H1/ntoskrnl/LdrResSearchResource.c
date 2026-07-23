/*
 * XREFs of LdrResSearchResource @ 0x1406FAE00
 * Callers:
 *     PspLocateInPEManifest @ 0x1406FACFC (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x140777E40 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x140779780 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x14079283C (SeRegisterElamCertResources.c)
 *     AslpFileGetVersionBlock @ 0x14079AF08 (AslpFileGetVersionBlock.c)
 *     RtlLoadString @ 0x14090D030 (RtlLoadString.c)
 *     KeHwPolicyLocateResource @ 0x140A5D810 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x14033A250 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x14033AD04 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x140362394 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1403B4330 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     LdrpResGetMappingSize @ 0x1406FB06C (LdrpResGetMappingSize.c)
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
  int v11; // ecx
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // r15
  int v17; // eax
  unsigned __int16 v18; // ax
  ULONG64 v19; // [rsp+50h] [rbp-88h] BYREF
  PVOID ResourceDllBase; // [rsp+58h] [rbp-80h] BYREF
  int v21; // [rsp+60h] [rbp-78h]
  _QWORD *v22; // [rsp+68h] [rbp-70h]
  __int64 v23; // [rsp+70h] [rbp-68h]
  _QWORD v24[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-50h]

  v8 = a3;
  v22 = a5;
  v23 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v11 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v11 = a4;
  v12 = v11 | 0x1000;
  if ( (v11 & 0x2000) != 0 )
    v12 = v11;
  if ( (v12 & 0xFFF80000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v12 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_14;
  }
  if ( (v12 & 0x41) == 0 )
    return 3221225714LL;
LABEL_14:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
    goto LABEL_16;
  }
  v17 = v12 & 0xC00;
  if ( (v12 & 0x200) != 0 )
  {
    v13 = v17 == 0;
LABEL_16:
    if ( v13 )
      goto LABEL_17;
    return (unsigned int)-1073741582;
  }
  if ( v17 == 3072 )
    return (unsigned int)-1073741582;
LABEL_17:
  if ( (v12 & 0x8000) != 0 && (~(_WORD)v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v19 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
    {
      v14 = -1073741811;
      v21 = -1073741811;
      return v14;
    }
    v19 = *a6;
  }
  memmove(v24, a2, 8LL * a3);
  if ( v8 > 3 )
  {
    v8 = 3;
  }
  else if ( v8 != 3 )
  {
    goto LABEL_28;
  }
  if ( v25 >= 0x10000 )
  {
    if ( *(_WORD *)v25 )
    {
      v18 = DownLevelLanguageNameToLangID((const void *)v25, 2);
      LODWORD(ResourceDllBase) = v18;
    }
    else
    {
      v18 = 0;
      LODWORD(ResourceDllBase) = 0;
    }
    v25 = v18;
  }
  else if ( v25 && ((v25 & 0x3FF) == 0 || v25 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v25, 0LL, 0, 2)) )
  {
    return (unsigned int)-1073741811;
  }
LABEL_28:
  if ( (v12 & 0x300) == 0 )
    goto LABEL_31;
  v10 = (void *)a1;
  if ( (v12 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
  }
  result = LdrpResGetMappingSize(v10, &v19, v12);
  if ( (int)result >= 0 || (v12 & 0x1000) == 0 )
  {
LABEL_31:
    v16 = v23;
    v14 = LdrpResSearchResourceMappedFile(v10, v19, v12, (__int64)v24, v8, v22, a6, a7, v23);
    if ( v14 == -1073741686 && ((v24[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      ResourceDllBase = 0LL;
      if ( LdrLoadAlternateResourceModuleEx(v10, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) >= 0 )
      {
        v19 = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, &v19, v12) >= 0 )
          return (unsigned int)LdrpResSearchResourceMappedFile(
                                 ResourceDllBase,
                                 v19,
                                 v12 | 0x1000000,
                                 (__int64)v24,
                                 v8,
                                 v22,
                                 a6,
                                 a7,
                                 v16);
      }
    }
    return v14;
  }
  return result;
}
