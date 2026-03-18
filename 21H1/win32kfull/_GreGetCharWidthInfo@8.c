/*
 * XREFs of _GreGetCharWidthInfo@8 @ 0xC3E8C
 * Callers:
 *     _NtGdiGetCharWidthInfo@8 @ 0xC3E28 (_NtGdiGetCharWidthInfo@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

int __fastcall GreGetCharWidthInfo(HDC a1, _DWORD *a2)
{
  int v2; // esi
  bool v4; // zf
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // eax
  int v9; // esi
  int v10; // edi
  DC *v11[3]; // [esp+8h] [ebp-10h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  memset(v11, 0, sizeof(v11));
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v12 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v11, 0, 2u) )
      GreAcquireSemaphore(v12[137]);
    if ( v12 && *(_DWORD *)(v12[17] + 2096) )
    {
      v4 = !DC::bWorldToDeviceIdentity(v11[0]);
      v6 = v5[173];
      if ( v4 )
      {
        v9 = v5[169];
        v10 = v5[168];
        *a2 = lCvt(v10, v9, 16 * v6);
        a2[1] = lCvt(v10, v9, 16 * v12[174]);
        v7 = lCvt(v10, v9, 16 * v12[175]);
      }
      else
      {
        *a2 = v6;
        a2[1] = v5[174];
        v7 = v5[175];
      }
      a2[2] = v7;
      v2 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    if ( v11[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  }
  return v2;
}
