/*
 * XREFs of ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0275524
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00FA3E0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0069D68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0276074 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, HDEV a2)
{
  unsigned int v3; // edi
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-50h] BYREF
  HDEV v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  __int16 v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF

  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v15, a1);
  if ( a2 )
  {
    if ( !v15 )
      return v3;
    v17 = *((_QWORD *)a2 + 8);
    GreAcquireSemaphore(v17);
    v10 = 0;
    v11 = 0;
    v3 = 1;
    v14 = 0LL;
    v13 = 0LL;
    v9 = 0LL;
    v4 = *((_DWORD *)a2 + 10);
    v12 = 256;
    v6 = 0LL;
    v8 = 1;
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)&v6 = *((_QWORD *)a2 + 6);
      v7 = a2;
      GreAcquireSemaphore(v6);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v6, 11LL);
    }
    v16 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v15, *((struct PALETTE **)a2 + 226));
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v6);
    if ( v9 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v9);
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
  }
  if ( v15 )
    DEC_SHARE_REF_CNT(v15);
  return v3;
}
