/*
 * XREFs of ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x180042E08
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x180042D00 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x180011AF4 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x1800121C4 (-ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18004394C (-ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z.c)
 */

__int64 __fastcall GameInputModule::LoadModule(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v3; // ebp
  unsigned int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  const struct std::nothrow_t *v7; // rdx
  int SystemDirPath; // ebx
  WCHAR *v10; // rbx
  DWORD FileAttributesW; // eax
  const struct GameInputVersion *v12; // rdx
  HMODULE Library; // rax
  HMODULE v14; // rbp
  FARPROC ProcAddress; // r15
  FARPROC v16; // r12
  FARPROC v17; // rax
  LPCWSTR lpFileName; // [rsp+70h] [rbp+18h] BYREF

  lpFileName = a3;
  v3 = *(_DWORD *)a1;
  v5 = 0;
  if ( *(_DWORD *)a1 )
    goto LABEL_21;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
LABEL_20:
    LeaveCriticalSection(v6);
LABEL_21:
    if ( v3 != 1 )
      return 2147549183LL;
    LOBYTE(v5) = *(_QWORD *)(a1 + 32) == 0LL;
    return v5;
  }
  lpFileName = 0LL;
  SystemDirPath = GameInputModule::GetSystemDirPath(
                    (__int64)L"GameInput.dll",
                    (const struct std::nothrow_t *)&lpFileName);
  if ( SystemDirPath >= 0 )
  {
    v10 = (WCHAR *)lpFileName;
    FileAttributesW = GetFileAttributesW(lpFileName);
    if ( FileAttributesW != -1
      && (FileAttributesW & 0x550) == 0
      && (int)GameInputModule::ValidateModuleCertChain(v10) >= 0 )
    {
      Library = LoadLibraryExW(v10, 0LL, 0x800u);
      v14 = Library;
      if ( Library )
      {
        if ( GameInputModule::ValidateModuleVersion(Library, v12) )
        {
          ProcAddress = GetProcAddress(v14, "GameInputCreate");
          if ( ProcAddress )
          {
            v16 = GetProcAddress(v14, "DllCanUnloadNow");
            if ( v16 )
            {
              v17 = GetProcAddress(v14, "DllGetClassObject");
              if ( v17 )
              {
                *(_QWORD *)(a1 + 32) = v14;
                v14 = 0LL;
                *(_QWORD *)(a1 + 8) = ProcAddress;
                *(_QWORD *)(a1 + 16) = v16;
                *(_QWORD *)(a1 + 24) = v17;
              }
            }
          }
        }
        if ( v14 )
          FreeLibrary(v14);
      }
    }
    *(_DWORD *)a1 = 1;
    v3 = 1;
    if ( v10 )
      operator delete(v10, v12);
    goto LABEL_20;
  }
  if ( lpFileName )
    operator delete((void *)lpFileName, v7);
  LeaveCriticalSection(v6);
  return (unsigned int)SystemDirPath;
}
