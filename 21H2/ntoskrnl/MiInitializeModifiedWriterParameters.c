/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x140B08894
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  __int64 result; // rax

  v0 = dword_140D051CC;
  if ( (unsigned int)dword_140D051CC > 0x40 )
  {
    v0 = 64;
  }
  else if ( !dword_140D051CC )
  {
    v0 = 1;
  }
  dword_140D051CC = v0 << 8;
  result = (unsigned int)dword_140D051C0;
  if ( (dword_140D051C0 & 0xFFFFFFF8) != 0 )
  {
    result = 0LL;
    dword_140D051C0 = 0;
  }
  if ( (result & 4) != 0 )
  {
    dword_140C531CC = 16;
    dword_140C531D0 = 8;
  }
  else
  {
    dword_140C531CC = 4;
  }
  return result;
}
