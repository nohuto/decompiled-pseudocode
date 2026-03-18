/*
 * XREFs of MiGetOptimalProcessorWriteCount @ 0x14035C8F0
 * Callers:
 *     MiCreateColorAnchors @ 0x14035C800 (MiCreateColorAnchors.c)
 *     MiZeroNodePages @ 0x1403A7930 (MiZeroNodePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetOptimalProcessorWriteCount(unsigned int a1)
{
  unsigned int *v1; // rax
  __int64 result; // rax

  if ( a1 == -1 )
    v1 = (unsigned int *)&unk_140C52474;
  else
    v1 = (unsigned int *)(4544LL * a1 + qword_140C50B90 + 4380);
  result = *v1;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
