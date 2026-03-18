/*
 * XREFs of XmInitializeEmulator @ 0x1403C108C
 * Callers:
 *     x86BiosInitializeBiosEx @ 0x1403C0FC0 (x86BiosInitializeBiosEx.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140394650 (x86BiosTranslateAddress.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140CED36E;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140CED364 );
  dword_140CED4C0 = 0x8000000;
  dword_140CED348 = 2048;
  word_140CED35C = 0;
  qword_140CED4C8 = (__int64)x86BiosReadIoSpace;
  qword_140CED4D0 = (__int64)x86BiosWriteIoSpace;
  qword_140CED4D8 = (__int64)x86BiosTranslateAddress;
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
