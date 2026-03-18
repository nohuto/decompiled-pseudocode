/*
 * XREFs of NtUserPaintMonitor @ 0x1C02009E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopPaintCallback @ 0x1C0125A80 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r14
  BOOL v10; // ebx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+28h] [rbp-60h] BYREF
  RECT v20; // [rsp+38h] [rbp-50h] BYREF
  __int128 v21; // [rsp+48h] [rbp-40h] BYREF
  __int64 v22; // [rsp+58h] [rbp-30h]
  __int128 v23; // [rsp+60h] [rbp-28h] BYREF
  __int64 v24; // [rsp+70h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v20 = *a3;
  v9 = ValidateHmonitor(a1);
  v10 = 0;
  if ( v9 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    *((_QWORD *)&v21 + 1) = v11;
    if ( v11 )
      HMLockObject(v11);
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v23;
    *((_QWORD *)&v23 + 1) = v9;
    HMLockObject(v9);
    v19 = v11;
    v10 = xxxDesktopPaintCallback(v9, a2, &v20, (__int64)&v19);
    ThreadUnlock1(v13, v12, v14);
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v10;
}
