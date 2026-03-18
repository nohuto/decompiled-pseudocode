/*
 * XREFs of ?ParseInputReport@InteractiveControlInput@@QAEJPAEK@Z @ 0x1B325B
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1B5FB3 (-ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIV.c)
 */

int __thiscall InteractiveControlInput::ParseInputReport(
        InteractiveControlInput *this,
        unsigned __int8 *Src,
        struct InteractiveControlDevice *MaxCount)
{
  int v4; // ecx
  int v5; // edi
  int v6; // ebx
  unsigned int v7; // edx
  int v8; // ebx
  void *v9; // eax
  unsigned int v11; // [esp+0h] [ebp-18h]
  struct tagINTERACTIVECTRL_INFO *v12; // [esp+4h] [ebp-14h]

  v4 = MEMORY[0xFFDF0004];
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
      v4 = MEMORY[0xFFDF0004];
    }
    v5 = v4 * (v6 << 8) + (((unsigned int)v4 * (unsigned __int64)v7) >> 24);
  }
  else
  {
    v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v8 = InteractiveControlParser::ParseInputReport(MaxCount, (unsigned __int8 *)this + 32, v11, v12);
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 6) + 180) )
    {
      if ( *((_DWORD *)this + 15) )
        Win32FreePool(*((_DWORD *)this + 15));
      v9 = (void *)Win32AllocPool(MaxCount, 1819440195);
      *((_DWORD *)this + 15) = v9;
      memcpy(v9, Src, (size_t)MaxCount);
    }
    *((_DWORD *)this + 4) = v5;
  }
  return v8;
}
