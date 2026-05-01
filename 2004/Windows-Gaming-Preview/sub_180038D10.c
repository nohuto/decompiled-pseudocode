/*
 * XREFs of sub_180038D10 @ 0x180038D10
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18003A1A4 @ 0x18003A1A4 (sub_18003A1A4.c)
 *     sub_18003CDF8 @ 0x18003CDF8 (sub_18003CDF8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180038D10(__int64 a1, HSTRING *a2)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // edi
  __int128 v13; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  WindowsDeleteString(*a2);
  *a2 = 0LL;
  v4 = sub_18003A1A4(a1, 0LL);
  v13 = 0LL;
  EnterCriticalSection(&stru_18005AF28);
  v5 = qword_18005AF18;
  if ( qword_18005AF18 )
  {
    v8 = qword_18005AF20;
    if ( qword_18005AF20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(qword_18005AF20 + 8));
      v8 = qword_18005AF20;
      v5 = qword_18005AF18;
    }
    v9 = v5;
    *((_QWORD *)&v13 + 1) = v8;
    LeaveCriticalSection(&stru_18005AF28);
    v6 = 0;
  }
  else
  {
    v6 = -2147418113;
    sub_180003268(retaddr, 41, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", -2147418113);
    LeaveCriticalSection(&stru_18005AF28);
    v8 = 0LL;
    v9 = 0LL;
  }
  if ( v6 < 0 )
    sub_180012300(retaddr, 210, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v6);
  if ( v5 && (v10 = sub_18003CDF8(v9, *(_QWORD *)(v4 + 16), v7, a2), v11 = v10, v10 < 0) )
    sub_180003268(
      retaddr,
      213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      v10);
  else
    v11 = 0;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  return v11;
}
