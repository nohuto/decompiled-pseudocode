/*
 * XREFs of sub_180033590 @ 0x180033590
 * Callers:
 *     sub_180033B40 @ 0x180033B40 (sub_180033B40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033590(__int64 a1, _QWORD *a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // edi
  signed __int32 v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 48);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v2, -2);
  if ( v12 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 128);
    v5 = 0;
    if ( v6 > 0 )
    {
      do
      {
        if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 128), v6 + 1, v6) )
          break;
        v6 = *(_DWORD *)(a1 + 128);
      }
      while ( v6 > 0 );
      if ( v6 > 0 )
      {
        v7 = *(_QWORD *)(a1 + 112);
        *a2 = 0LL;
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 112);
          if ( v8 )
            v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, &unk_180050C98, a2);
        }
        else
        {
          v5 = -2147024809;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v11, 0);
          v9 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
  }
  return v5;
}
