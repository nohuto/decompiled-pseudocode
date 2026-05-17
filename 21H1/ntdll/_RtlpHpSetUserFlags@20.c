/*
 * XREFs of _RtlpHpSetUserFlags@20 @ 0x4B379956
 * Callers:
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 * Callees:
 *     _RtlpHpExtrasGet@16 @ 0x4B3783B5 (_RtlpHpExtrasGet@16.c)
 */

int __fastcall RtlpHpSetUserFlags(int a1, int a2, int a3, __int16 a4, __int16 a5)
{
  int v5; // esi
  unsigned int v6; // eax

  v5 = 0;
  v6 = RtlpHpExtrasGet(a1, a2, *(_DWORD *)(a1 + 12) | a3, 0);
  if ( v6 && v6 != -1 )
  {
    v5 = 1;
    *(_BYTE *)(v6 + 2) = *(_BYTE *)(v6 + 2) & ((16 * ~HIBYTE(a4)) | 0xF) | (16 * HIBYTE(a5));
  }
  return v5;
}
