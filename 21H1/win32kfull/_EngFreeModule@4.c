/*
 * XREFs of _EngFreeModule@4 @ 0x1E8FF7
 * Callers:
 *     <none>
 * Callees:
 *     _vUnmapFile@8 @ 0xD6388 (_vUnmapFile@8.c)
 */

void __stdcall EngFreeModule(HANDLE h)
{
  _DWORD *v1; // edi
  bool v2; // zf
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // ecx

  if ( h )
  {
    v1 = (char *)h - 16;
    if ( GreEngLoadModuleAllocListLock )
      GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
    v2 = v1[2]-- == 1;
    v3 = v1[2];
    if ( v2 )
    {
      v4 = *v1;
      if ( *(_DWORD **)(*v1 + 4) != v1 || (v5 = (_DWORD *)v1[1], (_DWORD *)*v5 != v1) )
        __fastfail(3u);
      *v5 = v4;
      *(_DWORD *)(v4 + 4) = v5;
    }
    if ( GreEngLoadModuleAllocListLock )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
      GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
    }
    if ( !v3 )
    {
      vUnmapFile((int)h);
      Win32FreePool((PATHOBJ *)((char *)h - v1[3]));
    }
  }
}
