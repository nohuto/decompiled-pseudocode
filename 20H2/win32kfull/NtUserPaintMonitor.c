/*
 * XREFs of NtUserPaintMonitor @ 0x1C01FFB70
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C01271B0 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  BOOL v8; // ebx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+28h] [rbp-60h] BYREF
  RECT v18; // [rsp+38h] [rbp-50h] BYREF
  __int128 v19; // [rsp+48h] [rbp-40h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-28h] BYREF
  __int64 v22; // [rsp+70h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v18 = *a3;
  v7 = ValidateHmonitor(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v9;
    if ( v9 )
      HMLockObject(v9);
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v7;
    HMLockObject(v7);
    v17 = v9;
    v8 = xxxDesktopPaintCallback(v7, a2, &v18, (__int64)&v17);
    ThreadUnlock1(v11, v10, v12);
    ThreadUnlock1(v14, v13, v15);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
