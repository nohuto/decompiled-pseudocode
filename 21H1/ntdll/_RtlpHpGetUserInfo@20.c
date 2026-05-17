/*
 * XREFs of _RtlpHpGetUserInfo@20 @ 0x4B37872D
 * Callers:
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 * Callees:
 *     _RtlpHpExtrasGet@16 @ 0x4B3783B5 (_RtlpHpExtrasGet@16.c)
 */

int __fastcall RtlpHpGetUserInfo(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v5; // eax

  v5 = RtlpHpExtrasGet(a1, a2, *(_DWORD *)(a1 + 12) | a3, 0);
  if ( v5 == -1 )
    return 0;
  if ( a4 && v5 )
    *a4 = *(_DWORD *)(v5 + 4);
  if ( a5 )
  {
    if ( v5 )
      *a5 = 16 * (*(_BYTE *)(v5 + 2) & 0xF0);
    else
      *a5 = 0;
  }
  return 1;
}
