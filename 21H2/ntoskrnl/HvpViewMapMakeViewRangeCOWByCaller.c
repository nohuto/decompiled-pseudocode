/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x140723E38
 * Callers:
 *     HvpViewMapCOWAndUnsealRange @ 0x140723D80 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapMigrateCOWData @ 0x140732A4C (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14036286C (CmSiProtectViewOfSection.c)
 *     CmSiUnlockViewOfSection @ 0x1403628F0 (CmSiUnlockViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140723F48 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v17; // rcx
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0;
  v4 = a3;
  v10 = CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), a2[7] + a3 - a2[3], a4 - a3, 8u, (__int64)&v18);
  if ( v10 >= 0 )
  {
    v11 = v4;
    if ( v4 >= a4 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v12 = a2[3];
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v11 - v12) >> 12) + 72) & 2) == 0 )
        {
          LOBYTE(v9) = 1;
          v10 = HvpViewMapTouchPages(a2[7] + v11 - v12, 4096LL, v9);
          if ( v10 < 0 )
            break;
        }
        v11 += 4096LL;
        if ( v11 >= a4 )
        {
          while ( v4 < a4 )
          {
            v13 = a2[3];
            v14 = (unsigned __int64)(v4 - v13) >> 12;
            v15 = a2[7] + v4 - v13;
            LOBYTE(v13) = *((_BYTE *)a2 + v14 + 72) | 0xA;
            *((_BYTE *)a2 + v14 + 72) = v13;
            if ( (v13 & 0x10) != 0 )
            {
              CmSiUnlockViewOfSection(v8, *(__int64 **)(a1 + 24), v15, 4096LL);
              *((_BYTE *)a2 + v14 + 72) &= ~0x10u;
              --a2[8];
              *((_BYTE *)a2 + v14 + 72) |= 4u;
            }
            v4 += 4096LL;
          }
          return 0;
        }
      }
      do
      {
        v17 = a2[3];
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v4 - v17) >> 12) + 72) & 6) == 0 )
          CmSiProtectViewOfSection(v17, *(__int64 **)(a1 + 24), a2[7] + v4 - v17, 4096LL, 0x80000002, (__int64)&v18);
        v4 += 4096LL;
      }
      while ( v4 < a4 );
    }
  }
  return (unsigned int)v10;
}
