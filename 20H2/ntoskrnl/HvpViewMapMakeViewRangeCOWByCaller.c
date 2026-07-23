/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x1407045C0
 * Callers:
 *     HvpViewMapCOWAndUnsealRange @ 0x140704508 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapMigrateCOWData @ 0x14072E7DC (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiUnlockViewOfSection @ 0x14031D704 (CmSiUnlockViewOfSection.c)
 *     CmSiProtectViewOfSection @ 0x140341D98 (CmSiProtectViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140702ADC (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v8; // rcx
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  void *v14; // r8
  ULONG_PTR v16; // rcx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v17) = 0;
  v4 = a3;
  v9 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), (void *)(a2[7] + a3 - a2[3]), a4 - a3, 8u, (ULONG *)&v17);
  if ( v9 >= 0 )
  {
    v10 = v4;
    if ( v4 >= a4 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v11 = a2[3];
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v10 - v11) >> 12) + 72) & 2) == 0 )
        {
          v9 = HvpViewMapTouchPages((_BYTE *)(a2[7] + v10 - v11), 4096LL, 1);
          if ( v9 < 0 )
            break;
        }
        v10 += 4096LL;
        if ( v10 >= a4 )
        {
          while ( v4 < a4 )
          {
            v12 = a2[3];
            v13 = (unsigned __int64)(v4 - v12) >> 12;
            v14 = (void *)(a2[7] + v4 - v12);
            LOBYTE(v12) = *((_BYTE *)a2 + v13 + 72) | 0xA;
            *((_BYTE *)a2 + v13 + 72) = v12;
            if ( (v12 & 0x10) != 0 )
            {
              CmSiUnlockViewOfSection(v8, *(void ***)(a1 + 24), v14, 0x1000uLL);
              *((_BYTE *)a2 + v13 + 72) &= ~0x10u;
              --a2[8];
              *((_BYTE *)a2 + v13 + 72) |= 4u;
            }
            v4 += 4096LL;
          }
          return 0;
        }
      }
      do
      {
        v16 = a2[3];
        if ( (*((_BYTE *)a2 + ((v4 - v16) >> 12) + 72) & 6) == 0 )
          CmSiProtectViewOfSection(
            v16,
            *(void ***)(a1 + 24),
            (void *)(a2[7] + v4 - v16),
            0x1000uLL,
            0x80000002,
            (ULONG *)&v17);
        v4 += 4096LL;
      }
      while ( v4 < a4 );
    }
  }
  return (unsigned int)v9;
}
