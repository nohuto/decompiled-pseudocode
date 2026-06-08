/*
 * XREFs of MWaitIdleCheck @ 0x1C0007DE0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00086DC (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00089F8 (WriteGenAddr.c)
 */

__int64 __fastcall MWaitIdleCheck(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 GenAddr; // r11
  unsigned __int8 v3; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 )
  {
    GenAddr = ReadGenAddr(&dword_1C001CE74);
    v3 = 0;
    if ( qword_1C001CE84 )
      v3 = ReadGenAddr(&dword_1C001CE80);
    if ( ((GenAddr | v3) & 0x10) != 0 )
    {
      WriteGenAddr(&dword_1C001CE74, 16LL);
      if ( qword_1C001CE84 )
        WriteGenAddr(&dword_1C001CE80, 16LL);
      return (unsigned int)-1073741823;
    }
  }
  return v1;
}
