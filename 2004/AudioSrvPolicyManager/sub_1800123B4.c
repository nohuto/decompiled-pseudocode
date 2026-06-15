/*
 * XREFs of sub_1800123B4 @ 0x1800123B4
 * Callers:
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800123B4(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-30h] BYREF
  char v7; // [rsp+28h] [rbp-28h]
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-20h] BYREF
  char v9; // [rsp+38h] [rbp-18h]
  LPCRITICAL_SECTION v10; // [rsp+40h] [rbp-10h] BYREF
  char v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF

  v10 = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  sub_18001A330(&v10);
  v2 = *(_QWORD **)(a1 + 72);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( !*(_DWORD *)(v3 + 448) )
    {
      v8 = (LPCRITICAL_SECTION)(v3 + 32);
      v9 = 0;
      sub_18001A330(&v8);
      lpCriticalSection = (LPCRITICAL_SECTION)(v3 + 144);
      v7 = 0;
      sub_18001A330(&lpCriticalSection);
      v4 = *(_QWORD **)(v3 + 72);
      while ( v4 )
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) != 2 )
        {
          v12 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))v5)(v5, &unk_180042A80, &v12) >= 0 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 40LL))(v12, 1LL);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( v7 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
      }
      if ( v9 )
      {
        LeaveCriticalSection(v8);
        v9 = 0;
      }
    }
  }
  if ( v11 )
    LeaveCriticalSection(v10);
}
