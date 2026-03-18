/*
 * XREFs of ?CleanQueue@InteractiveControlDevice@@QAEXK@Z @ 0x1B17C4
 * Callers:
 *     ?QueueInput@InteractiveControlDevice@@QAEXPAU_LIST_ENTRY@@PAVInteractiveControlInput@@@Z @ 0x1B265C (-QueueInput@InteractiveControlDevice@@QAEXPAU_LIST_ENTRY@@PAVInteractiveControlInput@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall InteractiveControlDevice::CleanQueue(InteractiveControlDevice *this, unsigned int a2)
{
  int v3; // ecx
  InteractiveControlDevice *v4; // esi
  int v5; // eax
  int v6; // edi
  unsigned int v7; // edx
  InteractiveControlDevice *v8; // edi
  int v9; // eax
  int v10; // [esp+14h] [ebp-4h]

  v3 = MEMORY[0xFFDF0004];
  v4 = (InteractiveControlDevice *)*((_DWORD *)this + 3);
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v6 = MEMORY[0xFFDF0324];
    v7 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v6 = MEMORY[0xFFDF0324];
        v7 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v4 = (InteractiveControlDevice *)*((_DWORD *)this + 3);
      v3 = MEMORY[0xFFDF0004];
    }
    v5 = v3 * (v6 << 8) + (((unsigned int)v3 * (unsigned __int64)v7) >> 24);
  }
  else
  {
    v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v10 = v5;
  if ( v4 != (InteractiveControlDevice *)((char *)this + 8) )
  {
    while ( 1 )
    {
      v8 = (InteractiveControlDevice *)*((_DWORD *)v4 + 1);
      if ( (unsigned int)(v5 - *((_DWORD *)v4 + 4)) < 0x1388 )
        break;
      v9 = *(_DWORD *)v4;
      if ( *(InteractiveControlDevice **)(*(_DWORD *)v4 + 4) != v4 || *(InteractiveControlDevice **)v8 != v4 )
        __fastfail(3u);
      *(_DWORD *)v8 = v9;
      *(_DWORD *)(v9 + 4) = v8;
      if ( *((_DWORD *)v4 + 15) )
      {
        Win32FreePool(*((_DWORD *)v4 + 15));
        *((_DWORD *)v4 + 15) = 0;
        *((_DWORD *)v4 + 16) = 0;
      }
      Win32FreePool(v4);
      --*((_DWORD *)this + 4);
      v4 = v8;
      if ( v8 == (InteractiveControlDevice *)((char *)this + 8) )
        break;
      v5 = v10;
    }
  }
}
