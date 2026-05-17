/*
 * XREFs of _RtlpCopyLegacyContextAmd64@16 @ 0x4B35BD2F
 * Callers:
 *     _RtlpCopyLegacyContext@16 @ 0x4B35BCDD (_RtlpCopyLegacyContext@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpCopyLegacyContextAmd64(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int result; // eax

  v4 = a3;
  *(_DWORD *)(a2 + 48) = a3 & 0x67FFFFFF;
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 48) = a3 & 0x67FFFFFF | *(_DWORD *)(a4 + 48) & 0x98000000;
  if ( (a3 & 0x100001) == 0x100001 )
  {
    *(_DWORD *)(a2 + 248) = *(_DWORD *)(a4 + 248);
    *(_DWORD *)(a2 + 252) = *(_DWORD *)(a4 + 252);
    *(_WORD *)(a2 + 56) = *(_WORD *)(a4 + 56);
    *(_WORD *)(a2 + 66) = *(_WORD *)(a4 + 66);
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a4 + 152);
    *(_DWORD *)(a2 + 156) = *(_DWORD *)(a4 + 156);
    *(_DWORD *)(a2 + 68) = *(_DWORD *)(a4 + 68);
  }
  if ( (a3 & 0x100002) == 0x100002 )
  {
    qmemcpy((void *)(a2 + 120), (const void *)(a4 + 120), 0x20u);
    qmemcpy((void *)(a2 + 160), (const void *)(a4 + 160), 0x58u);
    v4 = a3;
  }
  if ( (v4 & 0x100004) == 0x100004 )
  {
    *(_WORD *)(a2 + 64) = *(_WORD *)(a4 + 64);
    *(_WORD *)(a2 + 62) = *(_WORD *)(a4 + 62);
    *(_WORD *)(a2 + 60) = *(_WORD *)(a4 + 60);
    *(_WORD *)(a2 + 58) = *(_WORD *)(a4 + 58);
  }
  if ( (v4 & 0x100008) == 0x100008 )
  {
    *(_DWORD *)(a2 + 52) = *(_DWORD *)(a4 + 52);
    qmemcpy((void *)(a2 + 256), (const void *)(a4 + 256), 0x1A0u);
    v4 = a3;
  }
  result = 1048592;
  if ( (v4 & 0x100010) == 0x100010 )
  {
    qmemcpy((void *)(a2 + 72), (const void *)(a4 + 72), 0x30u);
    qmemcpy((void *)(a2 + 1200), (const void *)(a4 + 1200), 0x20u);
  }
  return result;
}
