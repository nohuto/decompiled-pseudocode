/*
 * XREFs of HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406CA8C8
 * Callers:
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x1406CA81C (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     CmSiUnlockViewOfSection @ 0x14031D704 (CmSiUnlockViewOfSection.c)
 *     CmSiProtectViewOfSection @ 0x140341D98 (CmSiProtectViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140702ADC (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpMappedViewConvertRegionFromLockedToCOWByPolicy(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2[7] - a2[3];
  v5 = a4 - a3;
  v16 = 0;
  v6 = a3 + v4;
  v8 = a3;
  v11 = CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), v6, a4 - a3, 8u, (__int64)&v16);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = 1;
    HvpViewMapTouchPages(v6, v5, v12);
    CmSiProtectViewOfSection(v13, *(__int64 **)(a1 + 24), v6, v5, 2u, (__int64)&v16);
    v11 = CmSiUnlockViewOfSection(v14, *(__int64 **)(a1 + 24), v6, v5);
    while ( v8 < a4 )
    {
      *((_BYTE *)a2 + ((unsigned __int64)(v8 - a2[3]) >> 12) + 72) = *((_BYTE *)a2
                                                                     + ((unsigned __int64)(v8 - a2[3]) >> 12)
                                                                     + 72) & 0xEB | 4;
      v8 += 4096LL;
    }
    a2[8] -= v5 >> 12;
  }
  return (unsigned int)v11;
}
