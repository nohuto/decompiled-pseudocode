/*
 * XREFs of sub_180020DF4 @ 0x180020DF4
 * Callers:
 *     sub_1800069D0 @ 0x1800069D0 (sub_1800069D0.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180020DF4(__int64 a1, int a2)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]

  v3 = qword_18004FE78;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v5 = *(_QWORD **)(v3 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_DWORD *)(v6 + 212) == a2 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v6 + 32);
      v14 = 0;
      sub_18001A330((__int64)&lpCriticalSection);
      v7 = *(__int64 **)(v6 + 648);
      v8 = (__int64 *)*v7;
      while ( v8 != v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[8] + 48LL))(v8[8]);
        v9 = (__int64 **)v8[2];
        if ( *((_BYTE *)v9 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v8 = i;
          v8 = i;
        }
        else
        {
          v8 = (__int64 *)v8[2];
          for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v8 = j;
        }
      }
      if ( v14 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v14 = 0;
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
