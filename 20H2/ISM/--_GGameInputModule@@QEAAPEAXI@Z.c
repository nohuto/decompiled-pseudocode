/*
 * XREFs of ??_GGameInputModule@@QEAAPEAXI@Z @ 0x1800422FC
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004268C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x180043274 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall GameInputModule::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  HMODULE SpinCount; // rcx

  v1 = this + 1;
  EnterCriticalSection(this + 1);
  SpinCount = (HMODULE)this->SpinCount;
  if ( SpinCount )
    FreeLibrary(SpinCount);
  LeaveCriticalSection(v1);
  DeleteCriticalSection(v1);
  operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
