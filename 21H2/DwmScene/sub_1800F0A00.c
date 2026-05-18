/*
 * XREFs of sub_1800F0A00 @ 0x1800F0A00
 * Callers:
 *     sub_180090160 @ 0x180090160 (sub_180090160.c)
 *     sub_18009ABB0 @ 0x18009ABB0 (sub_18009ABB0.c)
 *     sub_18009DFF0 @ 0x18009DFF0 (sub_18009DFF0.c)
 *     sub_1800AEC10 @ 0x1800AEC10 (sub_1800AEC10.c)
 *     sub_1800B8EE0 @ 0x1800B8EE0 (sub_1800B8EE0.c)
 *     sub_180101720 @ 0x180101720 (sub_180101720.c)
 *     sub_1801038E0 @ 0x1801038E0 (sub_1801038E0.c)
 * Callees:
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F0A00(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  signed __int32 v6; // eax
  bool v7; // zf

  sub_180012F14((__int64 *)(*a2 + 24LL), (__int64 *)(a1 + 24));
  *(_BYTE *)(*a2 + 72LL) = *(_BYTE *)(a1 + 72);
  result = *(unsigned int *)(a1 + 76);
  *(_DWORD *)(*a2 + 76LL) = result;
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    v6 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    v7 = v6 == 1;
    result = (unsigned int)(v6 - 1);
    if ( v7 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
