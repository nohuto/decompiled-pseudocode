/*
 * XREFs of GreGetSystemPaletteEntries @ 0x1C02B7A80
 * Callers:
 *     CreateScreenPalette @ 0x1C0244AEC (CreateScreenPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0115A3C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall GreGetSystemPaletteEntries(HDC a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF

  Entries = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v11 = *(_QWORD *)(v16[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14, v8, v9, v10);
    if ( (*(_DWORD *)(v11 + 2172) & 0x100) != 0 )
    {
      v15 = *(_QWORD *)(v11 + 1808);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v15, a2, a3, a4, 1);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
    if ( v16[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  }
  return Entries;
}
