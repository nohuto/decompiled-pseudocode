/*
 * XREFs of NtUserGetControlColor @ 0x1C01F9DF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1C0143EEC (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 ControlColor; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _LARGE_STRING **v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  __int128 v24; // [rsp+38h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h]

  v24 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v13 = (__int64 *)v8;
  if ( v8 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v22;
    *((_QWORD *)&v22 + 1) = v8;
    HMLockObject(v8);
    v16 = (struct _LARGE_STRING **)ValidateHwnd(a2);
    if ( v16 && a3 && a4 - 306 <= 6 )
    {
      *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v24;
      *((_QWORD *)&v24 + 1) = v16;
      HMLockObject(v16);
      ControlColor = xxxGetControlColor(v13, v16, a3, a4);
      ThreadUnlock1(v19, v18, v20);
    }
    ThreadUnlock1(v15, v14, v17);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return ControlColor;
}
