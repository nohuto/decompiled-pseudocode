/*
 * XREFs of FsRtlpOplockKeysEqual @ 0x140360830
 * Callers:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14022BE58 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToII @ 0x14024302C (FsRtlpOplockBreakToII.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D578 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockKeysEqual @ 0x1403956B0 (FsRtlOplockKeysEqual.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x140362430 (IoGetOplockKeyContextEx.c)
 */

char __fastcall FsRtlpOplockKeysEqual(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int16 v10; // cx
  int v11; // esi
  int v13; // ecx
  __int64 v15; // rbp
  __int64 OplockKeyContext; // rax
  __int64 v17; // r8

  if ( (a3 & 0x40) == 0
    || a1
    && (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL)) != 0
    && *(_QWORD *)(v15 + 136)
    && (OplockKeyContext = IoGetOplockKeyContextEx(a1)) != 0
    && (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0
    && (v17 = *(_QWORD *)(v15 + 136), *(_DWORD *)(OplockKeyContext + 4) == *(_DWORD *)v17)
    && *(_WORD *)(OplockKeyContext + 8) == *(_WORD *)(v17 + 4)
    && *(_WORD *)(OplockKeyContext + 10) == *(_WORD *)(v17 + 6)
    && *(_BYTE *)(OplockKeyContext + 12) == *(_BYTE *)(v17 + 8)
    && *(_BYTE *)(OplockKeyContext + 13) == *(_BYTE *)(v17 + 9)
    && *(_BYTE *)(OplockKeyContext + 14) == *(_BYTE *)(v17 + 10)
    && *(_BYTE *)(OplockKeyContext + 15) == *(_BYTE *)(v17 + 11)
    && *(_BYTE *)(OplockKeyContext + 16) == *(_BYTE *)(v17 + 12)
    && *(_BYTE *)(OplockKeyContext + 17) == *(_BYTE *)(v17 + 13)
    && *(_BYTE *)(OplockKeyContext + 18) == *(_BYTE *)(v17 + 14)
    && *(_BYTE *)(OplockKeyContext + 19) == *(_BYTE *)(v17 + 15) )
  {
    if ( a1 && a2 )
    {
      if ( a1 == a2 )
        return 1;
      v6 = *(_QWORD **)(a1 + 208);
      if ( !v6 || v6 == IopRevocationExtension || (v7 = v6[7]) == 0 || (*(_BYTE *)(v7 + 2) & 3) == 0 )
        v7 = 0LL;
      v8 = *(_QWORD **)(a2 + 208);
      if ( !v8 || v8 == IopRevocationExtension || (v9 = v8[7]) == 0 || (*(_BYTE *)(v9 + 2) & 3) == 0 )
        v9 = 0LL;
      if ( v7 && v9 && (*(_BYTE *)(v9 + 2) & 2) != 0 )
      {
        v10 = *(_WORD *)(v7 + 2);
        v11 = a3 & 0x10;
        if ( !(v11 ? (v10 & 1) == 0 : (v10 & 2) == 0) )
        {
          v13 = *(_DWORD *)(v9 + 20);
          if ( v11 )
          {
            if ( *(_DWORD *)(v7 + 4) == v13
              && *(_WORD *)(v7 + 8) == *(_WORD *)(v9 + 24)
              && *(_WORD *)(v7 + 10) == *(_WORD *)(v9 + 26)
              && *(_BYTE *)(v7 + 12) == *(_BYTE *)(v9 + 28)
              && *(_BYTE *)(v7 + 13) == *(_BYTE *)(v9 + 29)
              && *(_BYTE *)(v7 + 14) == *(_BYTE *)(v9 + 30)
              && *(_BYTE *)(v7 + 15) == *(_BYTE *)(v9 + 31)
              && *(_BYTE *)(v7 + 16) == *(_BYTE *)(v9 + 32)
              && *(_BYTE *)(v7 + 17) == *(_BYTE *)(v9 + 33)
              && *(_BYTE *)(v7 + 18) == *(_BYTE *)(v9 + 34)
              && *(_BYTE *)(v7 + 19) == *(_BYTE *)(v9 + 35) )
            {
              return 1;
            }
          }
          else if ( *(_DWORD *)(v7 + 20) == v13
                 && *(_WORD *)(v7 + 24) == *(_WORD *)(v9 + 24)
                 && *(_WORD *)(v7 + 26) == *(_WORD *)(v9 + 26)
                 && *(_BYTE *)(v7 + 28) == *(_BYTE *)(v9 + 28)
                 && *(_BYTE *)(v7 + 29) == *(_BYTE *)(v9 + 29)
                 && *(_BYTE *)(v7 + 30) == *(_BYTE *)(v9 + 30)
                 && *(_BYTE *)(v7 + 31) == *(_BYTE *)(v9 + 31)
                 && *(_BYTE *)(v7 + 32) == *(_BYTE *)(v9 + 32)
                 && *(_BYTE *)(v7 + 33) == *(_BYTE *)(v9 + 33)
                 && *(_BYTE *)(v7 + 34) == *(_BYTE *)(v9 + 34)
                 && *(_BYTE *)(v7 + 35) == *(_BYTE *)(v9 + 35) )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
