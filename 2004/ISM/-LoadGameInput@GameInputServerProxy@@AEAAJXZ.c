/*
 * XREFs of ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800426F0
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x1800425A0 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     ?OnModuleUpdated@GameInputServerProxy@@CAXPEAX@Z @ 0x180042BC0 (-OnModuleUpdated@GameInputServerProxy@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x180011AF4 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18004238C (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     ?CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z @ 0x180042460 (-CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z.c)
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x1800427F8 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x180042F8C (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x1800432C4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 */

__int64 __fastcall GameInputServerProxy::LoadGameInput(GameInputServerProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  struct GameInputModule *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int Server; // esi
  int Module; // eax
  int SystemDirPath; // eax
  const struct std::nothrow_t *v8; // rdx
  void (*v9)(void *); // r9
  WCHAR *v10; // rdi
  LPCWSTR lpFileName; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (struct GameInputModule *)v2;
  if ( v2 )
  {
    LODWORD(v2->DebugInfo) = 0;
    *(_QWORD *)&v2->LockCount = 0LL;
    v2->OwningThread = 0LL;
    v2->LockSemaphore = 0LL;
    v2->SpinCount = 0LL;
    InitializeCriticalSection(v2 + 1);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)v3;
  if ( v3 )
  {
    GameInputServerProxy::UnloadGameInput(this);
    Module = GameInputModule::LoadModule(v3);
    Server = Module;
    if ( Module == 1 )
    {
      Server = -2147418113;
    }
    else if ( Module >= 0 )
    {
      Server = GameInputServerProxy::CreateServer((RTL_SRWLOCK *)this, v3);
      if ( Server >= 0 )
      {
        v4 = 0LL;
        *((_QWORD *)this + 8) = v3;
      }
    }
  }
  else
  {
    Server = -2147024882;
  }
  lpFileName = 0LL;
  SystemDirPath = GameInputModule::GetSystemDirPath(0LL, (const struct std::nothrow_t *)&lpFileName);
  v10 = (WCHAR *)lpFileName;
  if ( SystemDirPath >= 0 )
    GameInputWatcher::StartWatching((GameInputServerProxy *)((char *)this + 72), lpFileName, this, v9);
  if ( v10 )
    operator delete(v10, v8);
  if ( v4 )
    GameInputModule::`scalar deleting destructor'(v4);
  return (unsigned int)Server;
}
