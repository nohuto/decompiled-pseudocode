/*
 * XREFs of ??1LegacyInputDispatcher@@QAE@XZ @ 0xD4644
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     _xxxDesktopThread@4 @ 0xE3DD4 (_xxxDesktopThread@4.c)
 * Callees:
 *     <none>
 */

void __thiscall LegacyInputDispatcher::~LegacyInputDispatcher(LegacyInputDispatcher *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &LegacyInputDispatcher::`vftable';
  if ( v2 )
    Win32FreePool(v2);
  if ( *((_DWORD *)this + 3) )
    Win32FreePool(*((_DWORD *)this + 3));
  if ( *((_DWORD *)this + 4) )
    Win32FreePool(*((_DWORD *)this + 4));
  if ( *((_DWORD *)this + 2) )
    Win32FreePool(*((_DWORD *)this + 2));
}
