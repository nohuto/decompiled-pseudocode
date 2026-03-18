/*
 * XREFs of vInitXLATE @ 0x1C029B064
 * Callers:
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  dword_1C025224C = 256;
  xloIdent = 1;
  v0 = &unk_1C0252298;
  dword_1C0252244 = 1;
  qword_1C0252250 = (__int64)&unk_1C0252294;
  LODWORD(result) = 0;
  dword_1C0252288 = 0;
  dword_1C0252264 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
