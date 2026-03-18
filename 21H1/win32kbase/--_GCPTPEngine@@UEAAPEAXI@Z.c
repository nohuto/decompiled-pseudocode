/*
 * XREFs of ??_GCPTPEngine@@UEAAPEAXI@Z @ 0x1C01C5AC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1C01C5A60 (--1CPTPEngine@@UEAA@XZ.c)
 */

CPTPEngine *__fastcall CPTPEngine::`scalar deleting destructor'(CPTPEngine *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CPTPEngine::~CPTPEngine(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
