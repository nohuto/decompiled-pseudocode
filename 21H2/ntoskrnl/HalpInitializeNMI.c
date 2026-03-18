/*
 * XREFs of HalpInitializeNMI @ 0x1403D2A38
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A5A680 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C54AE4 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C54AE8 = 0;
  }
  return 0LL;
}
