/*
 * XREFs of ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x140055E5C
 * Callers:
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x140056A14 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x140045F6C (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140045FA0 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x14004BFB4 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AllocateHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z @ 0x140053E64 (-AllocateHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z.c)
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x140054CA0 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140055CC4 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegObject::RegisterFromResource(
        ATL::CRegObject *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        int a5)
{
  HMODULE Library; // rax
  HMODULE v8; // rsi
  unsigned int Error; // ebx
  HRSRC Resource; // rax
  HRSRC v11; // rdi
  unsigned int v12; // eax
  const CHAR *v13; // r14
  DWORD cchWideChar; // edi
  size_t v15; // rax
  int v16; // eax
  HMODULE v18; // [rsp+38h] [rbp-460h]
  _QWORD *v19; // [rsp+48h] [rbp-450h] BYREF
  ATL::CRegObject *v20[2]; // [rsp+50h] [rbp-448h] BYREF
  LPWSTR lpWideCharStr; // [rsp+60h] [rbp-438h] BYREF
  _BYTE v22[1032]; // [rsp+68h] [rbp-430h] BYREF

  v19 = 0LL;
  v20[1] = this;
  v20[0] = 0LL;
  lpWideCharStr = 0LL;
  Library = LoadLibraryExW(a2, 0LL, 2u);
  v8 = Library;
  v18 = Library;
  if ( !Library )
  {
    Error = ATL::AtlHresultFromLastError();
    goto LABEL_19;
  }
  Resource = FindResourceExW(Library, a4, a3, 0);
  v11 = Resource;
  if ( !Resource )
    goto LABEL_4;
  v13 = (const CHAR *)LoadResource(v8, Resource);
  if ( !v13 )
    goto LABEL_4;
  cchWideChar = SizeofResource(v8, v11);
  if ( cchWideChar + 1 >= cchWideChar )
  {
    try
    {
      v15 = ATL::AtlMultiplyThrow<unsigned __int64>(cchWideChar + 1, 2uLL);
      if ( v15 <= 0x400 )
        lpWideCharStr = (LPWSTR)v22;
      else
        ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpWideCharStr, v15);
    }
    catch ( ... )
    {
      v8 = v18;
    }
    if ( !lpWideCharStr )
    {
      Error = -2147024882;
LABEL_18:
      FreeLibrary(v8);
LABEL_19:
      if ( lpWideCharStr != (LPWSTR)v22 )
        ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap((void **)&lpWideCharStr);
      goto LABEL_21;
    }
    v16 = MultiByteToWideChar(3u, 0, v13, cchWideChar, lpWideCharStr, cchWideChar);
    if ( v16 )
    {
      lpWideCharStr[v16] = 0;
      v12 = ATL::CRegParser::RegisterBuffer(v20, lpWideCharStr, a5);
      goto LABEL_17;
    }
LABEL_4:
    v12 = ATL::AtlHresultFromLastError();
LABEL_17:
    Error = v12;
    goto LABEL_18;
  }
  if ( lpWideCharStr != (LPWSTR)v22 )
    ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap((void **)&lpWideCharStr);
  Error = -2147024882;
LABEL_21:
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
  return Error;
}
