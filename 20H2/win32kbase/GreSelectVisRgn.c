/*
 * XREFs of GreSelectVisRgn @ 0x1C004C6C0
 * Callers:
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0042C10 (HmgShareLockEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004BA04 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 */

__int64 __fastcall GreSelectVisRgn(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v8 = HmgShareLockEx(a1, 1, 0);
  v5 = v8;
  v6 = GreSelectVisRgnInternal(&v8, a2, a3);
  if ( v5 )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v8);
  return v6;
}
