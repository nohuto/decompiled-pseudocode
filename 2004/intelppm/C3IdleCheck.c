/*
 * XREFs of C3IdleCheck @ 0x1C000DE80
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00086EC (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0008A08 (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // r11
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((__int64)&dword_1C001CE44);
  v2 = 0;
  if ( qword_1C001CE54 )
    v2 = ReadGenAddr((__int64)&dword_1C001CE50);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C001CE44, 16LL);
    if ( qword_1C001CE54 )
      WriteGenAddr(&dword_1C001CE50, 16LL);
    return (unsigned int)-1073741823;
  }
  return v0;
}
