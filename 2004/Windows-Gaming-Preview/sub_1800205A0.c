/*
 * XREFs of sub_1800205A0 @ 0x1800205A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800205A0(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, __int64, __int64, __int128 *, __int64, _DWORD); // rax
  signed __int32 v10; // ecx
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v16; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v16 = -2;
  _InterlockedCompareExchange(&v16, v2, -2);
  if ( v16 == 4 )
  {
    v5 = -2147483634;
    v6 = 2147483662LL;
LABEL_16:
    RoOriginateError(v6, 0LL);
    return v5;
  }
  v5 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
  {
    v6 = 2147483672LL;
    v5 = -2147483624;
    goto LABEL_16;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = *(_QWORD *)(a1 + 24);
    }
    *(_QWORD *)(a1 + 24) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  _InterlockedOr(v12, 0);
  if ( qword_18005AD70 )
  {
    v8 = *(_QWORD *)qword_18005AD70;
    v14 = 0;
    v13 = a1;
    v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, _DWORD))(v8 + 64);
    v15 = xmmword_180050AB0;
    v9(qword_18005AD70, 2LL, 2LL, &v15, a1, 0);
  }
  v10 = *(_DWORD *)(a1 + 48);
  v17 = -2;
  _InterlockedCompareExchange(&v17, v10, -2);
  if ( (unsigned int)(v17 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v5;
}
