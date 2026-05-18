/*
 * XREFs of sub_1800D6470 @ 0x1800D6470
 * Callers:
 *     sub_1800B9280 @ 0x1800B9280 (sub_1800B9280.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_1800D9100 @ 0x1800D9100 (sub_1800D9100.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800D6470(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  signed __int32 v9; // eax
  bool v10; // zf
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_1800D9100(a1, &v11);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*a2 + 8LL))(
    *a2,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 8),
    *(unsigned int *)(a1 + 12),
    *(_DWORD *)(a1 + 20),
    *(_DWORD *)(a1 + 28));
  v5 = *(_QWORD **)(a1 + 48);
  if ( *(_QWORD **)(a1 + 56) == v5 )
  {
    result = sub_180010F3C((_QWORD *)(a1 + 40), v5, a2);
  }
  else
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v6 = a2[1];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *v5 = *a2;
    result = a2[1];
    v5[1] = result;
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    v9 = _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
