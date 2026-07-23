/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x140A55864
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  __int64 result; // rax

  v0 = dword_140CFB18C;
  if ( (unsigned int)dword_140CFB18C > 0x40 )
  {
    v0 = 64;
  }
  else if ( !dword_140CFB18C )
  {
    v0 = 1;
  }
  result = (unsigned int)(v0 << 8);
  dword_140CFB18C = result;
  if ( (dword_140CFB180 & 0xFFFFFFFE) != 0 )
    dword_140CFB180 = 0;
  return result;
}
