/*
 * XREFs of sub_180057CD4 @ 0x180057CD4
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 * Callees:
 *     sub_180057444 @ 0x180057444 (sub_180057444.c)
 *     sub_180068BD0 @ 0x180068BD0 (sub_180068BD0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 sub_180057CD4()
{
  unsigned int i; // ebx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  LPVOID v5; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+30h] BYREF

  v6[1] = -2LL;
  sub_180068BD0(v6);
  v9 = 0LL;
  InitializeCriticalSection(&stru_18019F8B0);
  dword_18019E634 = 1;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, __int64 *))(*(_QWORD *)v6[0] + 32LL))(v6[0], &xmmword_18015BB58, &v9) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7) >= 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, i, &v8) >= 0 )
      {
        v5 = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &v5) >= 0 )
        {
          v1 = 0LL;
          v4 = 0LL;
          if ( v8 )
          {
            (**(void (__fastcall ***)(__int64, void *, __int64 *))v8)(v8, &unk_18015BB48, &v4);
            v1 = v4;
          }
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v1 + 32LL))(v1, &pv) >= 0 )
          {
            sub_180057444(v8, (__int64)pv, v2);
            CoTaskMemFree(pv);
          }
          CoTaskMemFree(v5);
          if ( v4 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[0] + 16LL))(v6[0]);
  return 0LL;
}
