/*
 * XREFs of sub_180023148 @ 0x180023148
 * Callers:
 *     sub_180021AD0 @ 0x180021AD0 (sub_180021AD0.c)
 *     sub_180022A70 @ 0x180022A70 (sub_180022A70.c)
 *     sub_1800235B8 @ 0x1800235B8 (sub_1800235B8.c)
 *     sub_180023794 @ 0x180023794 (sub_180023794.c)
 *     sub_180036240 @ 0x180036240 (sub_180036240.c)
 *     sub_1800369E4 @ 0x1800369E4 (sub_1800369E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180023148(__int64 a1, signed __int32 a2, signed __int32 a3)
{
  bool v3; // di
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  signed __int32 v7; // ecx
  signed __int32 v8; // eax
  void (__fastcall *v9)(__int64, __int64, __int64, __int128 *, __int64, int); // rax
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  v3 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), a2, 0) )
  {
    v5 = (_QWORD *)(a1 + 40);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    GetRestrictedErrorInfo(v5);
    v7 = *(_DWORD *)(a1 + 48);
    v12 = -2;
    _InterlockedCompareExchange(&v12, v7, -2);
    if ( v12 )
    {
      return 0;
    }
    else
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 3, 0);
      v3 = v8 == v12;
      if ( v8 == v12 && qword_18005AD70 )
      {
        v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, int))(*(_QWORD *)qword_18005AD70
                                                                                        + 64LL);
        v11 = xmmword_180050AB0;
        v9(qword_18005AD70, 2LL, 2LL, &v11, a1, 4);
      }
    }
  }
  return v3;
}
