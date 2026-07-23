/*
 * XREFs of HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1406CA8C8
 * Callers:
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x1406CA81C (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     CmSiUnlockViewOfSection @ 0x14031D704 (CmSiUnlockViewOfSection.c)
 *     CmSiProtectViewOfSection @ 0x140341D98 (CmSiProtectViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140702ADC (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpMappedViewConvertRegionFromLockedToCOWByPolicy(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  ULONG_PTR v5; // rbx
  void *v6; // rbp
  __int64 v8; // rsi
  NTSTATUS v11; // edx
  __int64 v12; // r8
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2[7] - a2[3];
  v5 = a4 - a3;
  LODWORD(v16) = 0;
  v6 = (void *)(a3 + v4);
  v8 = a3;
  v11 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v6, a4 - a3, 8u, (ULONG *)&v16);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = 1;
    HvpViewMapTouchPages(v6, v5, v12);
    CmSiProtectViewOfSection(v13, *(void ***)(a1 + 24), v6, v5, 2u, (ULONG *)&v16);
    v11 = CmSiUnlockViewOfSection(v14, *(void ***)(a1 + 24), v6, v5);
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
