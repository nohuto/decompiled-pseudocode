/*
 * XREFs of sub_1800C1B38 @ 0x1800C1B38
 * Callers:
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     sub_1800F0588 @ 0x1800F0588 (sub_1800F0588.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     tanf @ 0x18011F778 (tanf.c)
 *     sqrtf @ 0x18011F784 (sqrtf.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C1B38(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        float a12,
        int a13,
        __int64 a14,
        _QWORD *a15)
{
  float v15; // xmm0_4
  __int64 result; // rax
  volatile signed __int32 *v17; // rbx
  signed __int32 v18; // eax
  bool v19; // zf

  v15 = tanf((float)(a11 * 0.017453292) * 0.5);
  sqrtf((float)(v15 * a12) * v15);
  sub_1800F0588(*a15);
  sub_1800F0588(*a15);
  sub_1800F0588(*a15);
  result = sub_1800F0588(*a15);
  v17 = *(volatile signed __int32 **)(a14 + 8);
  if ( v17 )
  {
    v18 = _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF);
    v19 = v18 == 1;
    result = (unsigned int)(v18 - 1);
    if ( v19 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
