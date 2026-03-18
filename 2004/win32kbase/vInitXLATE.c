/*
 * XREFs of vInitXLATE @ 0x1C0295290
 * Callers:
 *     InitializeGre @ 0x1C0296F90 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  dword_1C024C23C = 256;
  xloIdent = 1;
  v0 = &unk_1C024C288;
  dword_1C024C234 = 1;
  qword_1C024C240 = (__int64)&unk_1C024C284;
  LODWORD(result) = 0;
  dword_1C024C278 = 0;
  dword_1C024C254 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
