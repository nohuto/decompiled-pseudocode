/*
 * XREFs of sub_1800EB130 @ 0x1800EB130
 * Callers:
 *     sub_18008A890 @ 0x18008A890 (sub_18008A890.c)
 *     sub_1800952E0 @ 0x1800952E0 (sub_1800952E0.c)
 *     sub_180098720 @ 0x180098720 (sub_180098720.c)
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 *     sub_1800B3610 @ 0x1800B3610 (sub_1800B3610.c)
 *     sub_1800FBE50 @ 0x1800FBE50 (sub_1800FBE50.c)
 *     sub_1800FE010 @ 0x1800FE010 (sub_1800FE010.c)
 * Callees:
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EB130(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  signed __int32 v6; // eax
  bool v7; // zf

  sub_180012E34((__int64 *)(*a2 + 24LL), (__int64 *)(a1 + 24));
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
