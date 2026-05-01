/*
 * XREFs of sub_18001B11C @ 0x18001B11C
 * Callers:
 *     sub_18001B0E0 @ 0x18001B0E0 (sub_18001B0E0.c)
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180026660 @ 0x180026660 (sub_180026660.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001B11C(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  *a1 = off_18004B0A8;
  a1[1] = off_18004B088;
  a1[2] = off_18004B048;
  v2 = a1[8];
  if ( v2 )
  {
    if ( a1[5] )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 120LL))(v2, a1[5]);
      if ( v3 < 0 )
        sub_180012300(retaddr, 147, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v3);
    }
  }
  v4 = a1[9];
  if ( v4 )
  {
    if ( a1[6] )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 120LL))(v4, a1[6]);
      if ( v5 < 0 )
        sub_180012300(retaddr, 153, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v5);
    }
  }
  if ( a1[16] )
  {
    a1[16] = 0LL;
    sub_180026660();
  }
  v6 = (volatile signed __int32 *)a1[13];
  if ( v6 )
  {
    a1[13] = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  v7 = (volatile signed __int32 *)a1[10];
  if ( v7 )
  {
    a1[10] = 0LL;
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  v8 = a1[9];
  if ( v8 )
  {
    a1[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = a1[8];
  if ( v9 )
  {
    a1[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = a1[7];
  if ( v10 )
  {
    a1[7] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return sub_180019324((__int64)a1);
}
