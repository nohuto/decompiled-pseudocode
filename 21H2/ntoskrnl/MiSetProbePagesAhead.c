/*
 * XREFs of MiSetProbePagesAhead @ 0x14030A708
 * Callers:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140308590 (MiProbeLeafFrame.c)
 * Callees:
 *     MiLegitimatePageForDriversToMap @ 0x14030A93C (MiLegitimatePageForDriversToMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  __int64 v2; // rax
  int v3; // r12d
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  signed __int64 v9; // rdx
  _QWORD *v10; // rcx
  signed __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(v2) = *(_DWORD *)(a1 + 64) & 0xF;
  if ( (_BYTE)v2 == 1 )
  {
    v3 = *(_DWORD *)(a1 + 88);
    if ( v3 != 3 )
    {
      v4 = *(_QWORD *)(a1 + 40);
      v18 = v4;
      v5 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL);
      LOBYTE(v2) = 40;
      if ( ((*(_QWORD *)(8 * v5 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        v7 = 0LL;
        v8 = v4 & 0xF0FF000000000FFFuLL;
        while ( 1 )
        {
          v6 += 8LL;
          if ( (v6 & 0xFFF) == 0 )
            break;
          if ( v6 > *(_QWORD *)(a1 + 24) )
            break;
          v18 = MI_READ_PTE_LOCK_FREE(v6);
          LOBYTE(v2) = v18;
          if ( (v18 & 0xF0FF000000000FFFuLL) != v8 )
            break;
          v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL);
          LOBYTE(v2) = 40;
          if ( ((*(_QWORD *)(v9 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
            break;
          v10 = (_QWORD *)qword_140C4EEC0;
          v11 = v9 - 0x58000000000LL;
          if ( qword_140C4EEC0 && ((*(_QWORD *)(v11 + 40) >> 60) & 7) == 1 )
          {
            v12 = (__int64)((unsigned __int128)(v9 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
            v13 = (v12 >> 63) + v12;
            while ( v10 )
            {
              v14 = v10[3];
              if ( v13 < v14 )
              {
                v10 = (_QWORD *)*v10;
              }
              else
              {
                LOBYTE(v2) = v13 - v14;
                if ( v13 - v14 < v10[4] )
                  goto LABEL_26;
                v10 = (_QWORD *)v10[1];
              }
            }
          }
          LODWORD(v2) = MiLegitimatePageForDriversToMap(v11);
          if ( (int)v2 < 0 )
            break;
          if ( !v3 )
          {
            v15 = *(_QWORD *)(v11 + 40);
            if ( ((v15 >> 60) & 7) != 1 && (v15 & 0x1000000000LL) == 0 )
            {
              v2 = *(_QWORD *)(v11 + 8);
              if ( v2 > 0 )
                break;
            }
            LODWORD(v2) = MI_PFN_IS_PROTO(v11);
            if ( (_DWORD)v2 )
            {
              LODWORD(v2) = *(_DWORD *)(a1 + 64);
              if ( (v2 & 0x10) != 0 )
                break;
            }
          }
          ++v7;
        }
LABEL_26:
        if ( v7 )
        {
          v16 = *(_QWORD *)(a1 + 16) << 25;
          *(_QWORD *)(a1 + 160) = -1LL;
          v16 >>= 16;
          *(_QWORD *)(a1 + 144) = v16;
          v2 = (v7 << 12) + v16 + 4095;
          *(_DWORD *)(a1 + 64) |= 0x20u;
          *(_QWORD *)(a1 + 152) = v2;
        }
      }
    }
  }
  return v2;
}
