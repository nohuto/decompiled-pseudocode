/*
 * XREFs of sub_1800AA45C @ 0x1800AA45C
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_1800ACE00 @ 0x1800ACE00 (sub_1800ACE00.c)
 *     sub_1800C2154 @ 0x1800C2154 (sub_1800C2154.c)
 * Callees:
 *     sub_180080C20 @ 0x180080C20 (sub_180080C20.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800AA45C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rsi
  signed __int32 v6; // eax
  __int128 v7; // [rsp+20h] [rbp-18h]

  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v2 + 8);
      if ( !v6 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v6 + 1, v6) )
      {
        v3 = *(_QWORD *)(a1 + 64);
        *((_QWORD *)&v7 + 1) = v3;
        result = sub_180080C20(*(_QWORD *)(a1 + 56));
        goto LABEL_3;
      }
    }
  }
  v3 = 0LL;
  result = sub_180080C20(0LL);
LABEL_3:
  v5 = result;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      result = (unsigned int)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 12LL),
                               0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  if ( v5 != *(_QWORD *)(a1 + 96) )
  {
    *(_DWORD *)(a1 + 544) |= 1u;
    *(_QWORD *)(a1 + 96) = v5;
  }
  return result;
}
