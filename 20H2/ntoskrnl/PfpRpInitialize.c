/*
 * XREFs of PfpRpInitialize @ 0x140A6D864
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6D32C (PfInitializeSuperfetch.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     memset @ 0x140411300 (memset.c)
 *     PfpRpStart @ 0x1407BBC70 (PfpRpStart.c)
 */

__int64 __fastcall PfpRpInitialize(__int64 a1)
{
  int v2; // ecx
  int v3; // r8d
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax

  memset((void *)a1, 0, 0xA0uLL);
  v2 = -1;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = -1;
  v4 = 8;
  v5 = 8;
  do
  {
    ++v3;
    v5 >>= 1;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_DWORD *)(a1 + 64) = v3;
  *(_QWORD *)(a1 + 56) = 0LL;
  do
  {
    ++v2;
    v4 >>= 1;
  }
  while ( v4 );
  *(_DWORD *)(a1 + 104) = v2;
  *(_QWORD *)(a1 + 108) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 136));
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  result = (unsigned int)xmmword_140C4FF84;
  if ( (xmmword_140C4FF84 & 2) != 0 )
    return PfpRpStart(a1);
  return result;
}
