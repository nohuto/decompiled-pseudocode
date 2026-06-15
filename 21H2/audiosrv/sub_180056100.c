/*
 * XREFs of sub_180056100 @ 0x180056100
 * Callers:
 *     sub_180055FFC @ 0x180055FFC (sub_180055FFC.c)
 * Callees:
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180056100(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 40) + 24LL))(
         *(_QWORD *)(a1 + 40),
         2LL,
         9LL,
         &v9);
  if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7), v3 < 0) )
  {
    v2 = v3;
  }
  else
  {
    v4 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = 0LL;
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, v4, &v8);
        if ( v5 < 0 )
          break;
        sub_1800561E0(a1, v8, 0LL);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( ++v4 >= v7 )
          goto LABEL_8;
      }
      v2 = v5;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
LABEL_8:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v2;
}
