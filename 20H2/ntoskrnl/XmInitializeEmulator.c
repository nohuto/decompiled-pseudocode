/*
 * XREFs of XmInitializeEmulator @ 0x1403C46BC
 * Callers:
 *     x86BiosInitializeBiosEx @ 0x1403C45F0 (x86BiosInitializeBiosEx.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403976E0 (x86BiosTranslateAddress.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140CED2EE;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140CED2E4 );
  dword_140CED440 = 0x8000000;
  dword_140CED2C8 = 2048;
  word_140CED2DC = 0;
  qword_140CED448 = (__int64)x86BiosReadIoSpace;
  qword_140CED450 = (__int64)x86BiosWriteIoSpace;
  qword_140CED458 = (__int64)x86BiosTranslateAddress;
  v1 = x86BiosTranslateAddress(0, 0);
  XmEmulatorInitialized = 1;
  v2 = 256LL;
  v1[320] = 207;
  result = 1280LL;
  while ( v2 )
  {
    *v1++ = 1280;
    --v2;
  }
  return result;
}
