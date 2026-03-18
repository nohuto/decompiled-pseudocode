/*
 * XREFs of ??0InteractiveControlInput@@QAE@PAVInteractiveControlDevice@@@Z @ 0x1B2DCB
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__thiscall InteractiveControlInput::InteractiveControlInput(
        InteractiveControlInput *this,
        struct InteractiveControlDevice *a2)
{
  InteractiveControlInput *v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  unsigned int v6; // edx
  int v7; // ecx
  _BYTE v9[28]; // [esp+Ch] [ebp-24h] BYREF
  int v10; // [esp+28h] [ebp-8h]
  InteractiveControlInput *v11; // [esp+2Ch] [ebp-4h]

  v2 = this;
  v11 = this;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v3 = MEMORY[0xFFDF0004];
  v10 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v5 = MEMORY[0xFFDF0324];
    v6 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v5 = MEMORY[0xFFDF0324];
        v6 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v2 = v11;
      v3 = v10;
    }
    v4 = v3 * (v5 << 8) + (((unsigned int)v3 * (unsigned __int64)v6) >> 24);
  }
  else
  {
    v4 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v7 = (unsigned __int16)word_26C384;
  *((_DWORD *)v2 + 4) = v4;
  *((_DWORD *)v2 + 7) = 0;
  word_26C384 = v7 + 1;
  *((_DWORD *)v2 + 5) = v7;
  *((_DWORD *)v2 + 6) = a2;
  memset(v9, 0, sizeof(v9));
  *((_DWORD *)v2 + 15) = 0;
  qmemcpy((char *)v2 + 32, v9, 0x1Cu);
  *((_DWORD *)v2 + 16) = 0;
  return v2;
}
