/*
 * XREFs of ?MiPIdleTimerFunc@@YGXPAUtagWND@@IIJ@Z @ 0x14D4A0
 * Callers:
 *     <none>
 * Callees:
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _IsMiPEnabledForWindow@4 @ 0x14E372 (_IsMiPEnabledForWindow@4.c)
 */

void __stdcall MiPIdleTimerFunc(struct tagWND *a1, unsigned int a2, unsigned int a3, int a4)
{
  struct tagWND *v4; // edi
  int v5; // esi
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx

  v4 = a1;
  v5 = *((_DWORD *)a1 + 2);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 720);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 4) == *(_DWORD *)a1 )
        *(_DWORD *)(v6 + 4) = 0;
    }
  }
  FindTimer((unsigned int)a1, a3, 2u, 1, 0);
  if ( v5 )
  {
    v7 = *(_BYTE **)(v5 + 720);
    if ( v7 )
    {
      if ( (*v7 & 1) != 0 && IsMiPEnabledForWindow(a1) )
      {
        *(_DWORD *)(*(_DWORD *)(v5 + 720) + 24) = GetNextFrameId();
        v8 = MEMORY[0xFFDF0004];
        if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
        {
          v10 = MEMORY[0xFFDF0324];
          if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
          {
            v11 = MEMORY[0xFFDF0320];
          }
          else
          {
            do
            {
              _mm_pause();
              v10 = MEMORY[0xFFDF0324];
              v11 = MEMORY[0xFFDF0320];
            }
            while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
            v4 = a1;
            v8 = MEMORY[0xFFDF0004];
          }
          v9 = MEMORY[0xFFDF0004] * (v10 << 8) + (((unsigned int)v8 * (unsigned __int64)v11) >> 24);
        }
        else
        {
          v9 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
        }
        *(_DWORD *)(*(_DWORD *)(v5 + 720) + 72) = v9;
        *(_DWORD *)(*(_DWORD *)(v5 + 720) + 96) = 0;
        *(LARGE_INTEGER *)(*(_DWORD *)(v5 + 720) + 88) = KeQueryPerformanceCounter(0);
        v12 = *(_DWORD *)(v5 + 720);
        v13 = *(_DWORD *)(v12 + 28);
        if ( (v13 & 0x10000) != 0 )
        {
          *(_DWORD *)(v12 + 28) = v13 & 0xFFFEFFFF;
          *(_DWORD *)(*(_DWORD *)(v5 + 720) + 28) |= (unsigned int)&loc_20000;
          v12 = *(_DWORD *)(v5 + 720);
        }
        _PostTransformableMessage(v4, 581, ((*(_WORD *)(v12 + 28) & 0xE1F7) << 16) | 1, *(_DWORD *)(v12 + 312), 0);
      }
    }
  }
}
