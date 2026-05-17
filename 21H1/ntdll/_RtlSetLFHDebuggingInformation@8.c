/*
 * XREFs of _RtlSetLFHDebuggingInformation@8 @ 0x4B370F2D
 * Callers:
 *     _RtlpSetHeapDebuggingInformation@8 @ 0x4B359790 (_RtlpSetHeapDebuggingInformation@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlSetLFHDebuggingInformation(int a1, int a2)
{
  _BYTE *v2; // ecx
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // edi

  v2 = (_BYTE *)(a1 + 447);
  v3 = 129;
  do
  {
    v4 = *(_DWORD *)(a2 + 16);
    if ( !v4 && !*(_DWORD *)(a2 + 20)
      || (v5 = *(unsigned __int16 *)(v2 - 3), v5 >= v4 >> 3) && v5 <= *(_DWORD *)(a2 + 20) >> 3 )
    {
      *v2 ^= (*v2 ^ (2 * *(_BYTE *)(a2 + 8))) & 6;
    }
    v2 += 4;
    --v3;
  }
  while ( v3 );
  return 0;
}
