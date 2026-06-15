/*
 * XREFs of sub_180052550 @ 0x180052550
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180022DE0 @ 0x180022DE0 (sub_180022DE0.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052550(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(volatile signed __int32 **)(a1 + 32);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = *(volatile signed __int32 **)(a1 + 32);
  }
  v5 = *(_QWORD *)(a1 + 24);
  v6 = (std::_Ref_count_base *)v4;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  v12 = a1;
  v13 = a2;
  v7 = *(_QWORD *)(v5 + 56);
  if ( !v7 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_13;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v7 + 16LL))(v7, &v13, &v12);
  v2 = v8;
  if ( v8 < 0 )
  {
LABEL_13:
    sub_18004BD84((int)retaddr, 101, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v8);
    goto LABEL_9;
  }
  v9 = *(_DWORD *)(a1 + 16);
  if ( !v9 )
  {
    v6 = 0LL;
    LOBYTE(v9) = 0;
    if ( v4 )
    {
      sub_180052600((std::_Ref_count_base *)v4);
      v9 = *(_DWORD *)(a1 + 16);
    }
  }
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(a1 + 20) = 1;
  v2 = 0;
LABEL_9:
  if ( v6 )
    sub_180052600(v6);
  return v2;
}
