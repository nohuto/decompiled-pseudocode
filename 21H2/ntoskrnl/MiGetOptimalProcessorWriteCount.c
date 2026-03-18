/*
 * XREFs of MiGetOptimalProcessorWriteCount @ 0x140263644
 * Callers:
 *     MiCreatePageChains @ 0x140263558 (MiCreatePageChains.c)
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetOptimalProcessorWriteCount(unsigned int a1)
{
  unsigned int *v1; // rax
  __int64 result; // rax

  if ( a1 == -1 )
    v1 = (unsigned int *)&unk_140C53394;
  else
    v1 = (unsigned int *)(*(_QWORD *)(120LL * a1 + qword_140C506E0 + 112) + 68LL);
  result = *v1;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
