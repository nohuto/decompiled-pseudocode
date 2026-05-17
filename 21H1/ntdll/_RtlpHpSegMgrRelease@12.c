/*
 * XREFs of _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1
 * Callers:
 *     _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B (_RtlpHpSegMgrAllocate@12.c)
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 * Callees:
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegMgrVaCtxFree@12 @ 0x4B37C6A4 (_RtlpHpSegMgrVaCtxFree@12.c)
 */

char __fastcall RtlpHpSegMgrRelease(int a1, int a2, int a3)
{
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  _WORD *v8; // esi
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v11; // [esp+10h] [ebp-8h] BYREF
  _WORD *v12; // [esp+14h] [ebp-4h] BYREF

  v4 = a2;
  v10 = a2;
  v5 = -*(_DWORD *)a1;
  LOBYTE(v6) = *(_BYTE *)(a1 + 9) & 7;
  v11 = v5;
  if ( !(_BYTE)v6 )
  {
LABEL_11:
    if ( v4 )
      LOBYTE(v6) = RtlpHpFreeVA(&v10, (int *)&v11, 0x8000, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    return v6;
  }
  v7 = 0;
  if ( v5 >= 0x200000 )
    goto LABEL_6;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, v5 >> 12, -a3, 0x4000, 0);
  v6 = RtlpHpSegMgrVaCtxFree(&v11);
  v4 = v6;
  v10 = v6;
  if ( v6 )
  {
LABEL_6:
    RtlpHpQueryVA(v4, &v12, 0, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    v8 = v12;
    v6 = (int)&v12[v11 >> 21];
    v12 = (_WORD *)v6;
    if ( (unsigned int)v8 < v6 )
    {
      do
      {
        LOWORD(v6) = *v8;
        if ( (*v8 & 0x7FF) != 0 )
          LOBYTE(v6) = RtlpHpSegMgrCommit(a1, v10, v7, 0x200u, -(v6 & 0x7FF), 0x4000, 0);
        ++v8;
        v7 += 512;
      }
      while ( v8 < v12 );
    }
    v4 = v10;
    goto LABEL_11;
  }
  return v6;
}
