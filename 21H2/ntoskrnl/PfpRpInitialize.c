/*
 * XREFs of PfpRpInitialize @ 0x140A6BCA4
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6B76C (PfInitializeSuperfetch.c)
 * Callees:
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfpRpStart @ 0x1407C0590 (PfpRpStart.c)
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
  result = (unsigned int)xmmword_140C50144;
  if ( (xmmword_140C50144 & 2) != 0 )
    return PfpRpStart(a1);
  return result;
}
