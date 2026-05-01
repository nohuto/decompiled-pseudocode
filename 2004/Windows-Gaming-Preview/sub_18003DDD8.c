/*
 * XREFs of sub_18003DDD8 @ 0x18003DDD8
 * Callers:
 *     sub_18003DA50 @ 0x18003DA50 (sub_18003DA50.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180042DE0 @ 0x180042DE0 (sub_180042DE0.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003DDD8(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v10; // esi
  int v11; // edx
  volatile signed __int32 *v12; // rdi
  DWORD ActiveProcessorCount; // eax
  unsigned int v15; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v16; // [rsp+58h] [rbp-70h]
  _WORD v17[2]; // [rsp+60h] [rbp-68h] BYREF
  char v18; // [rsp+64h] [rbp-64h] BYREF
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  v16 = a2;
  v15 = 40;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _WORD *, unsigned int *))(*(_QWORD *)*a2 + 80LL))(
          *a2,
          3LL,
          v17,
          &v15);
  if ( v10 < 0 )
  {
    v11 = 221;
LABEL_10:
    sub_180003268(retaddr, v11, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp", v10);
    goto LABEL_11;
  }
  if ( v15 > 0x28 )
  {
    v10 = -2147418113;
    sub_180003268(
      retaddr,
      223,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      -2147418113);
    v12 = (volatile signed __int32 *)a2[1];
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          goto LABEL_14;
      }
    }
    return (unsigned int)v10;
  }
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  v10 = sub_180042DE0(v17[0], v15 - 4, (unsigned int)&v18, ActiveProcessorCount, a3, a4, a5, a6, a7);
  if ( v10 < 0 )
  {
    v11 = 233;
    goto LABEL_10;
  }
LABEL_11:
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
LABEL_14:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return (unsigned int)v10;
}
