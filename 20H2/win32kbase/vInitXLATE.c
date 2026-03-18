/*
 * XREFs of vInitXLATE @ 0x1C0293838
 * Callers:
 *     InitializeGre @ 0x1C0293010 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  dword_1C024A22C = 256;
  xloIdent = 1;
  v0 = &unk_1C024A278;
  dword_1C024A224 = 1;
  qword_1C024A230 = (__int64)&unk_1C024A274;
  LODWORD(result) = 0;
  dword_1C024A268 = 0;
  dword_1C024A244 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
