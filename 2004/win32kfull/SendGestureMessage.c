/*
 * XREFs of SendGestureMessage @ 0x1C02282CC
 * Callers:
 *     NtUserfnGESTURE @ 0x1C0205800 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     AllocGestureInfo @ 0x1C0227EE8 (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x1C02285DC (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0228620 (_FreeGestureInfo.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  unsigned int v7; // r15d
  const void *v9; // rdi
  __int64 v10; // r8
  volatile void *v11; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // [rsp+48h] [rbp-80h] BYREF
  __int128 v18; // [rsp+58h] [rbp-70h]
  __int128 v19; // [rsp+68h] [rbp-60h]
  SIZE_T v20; // [rsp+78h] [rbp-50h]
  __int128 v21; // [rsp+80h] [rbp-48h]
  __int128 v22; // [rsp+90h] [rbp-38h]
  __int128 v23; // [rsp+A0h] [rbp-28h]
  SIZE_T Length; // [rsp+B0h] [rbp-18h]

  v7 = a2;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || !a4
    || (unsigned __int64)(a3 - 1) > 0xFFFFFFFE
    || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87LL, a2, a3);
    return 0LL;
  }
  v10 = (unsigned int)(a3 - 56);
  v11 = (volatile void *)(a4 + 56);
  if ( a4 + 56 < a4 || (unsigned __int64)v11 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v21 = *(_OWORD *)a4;
  v22 = *(_OWORD *)(a4 + 16);
  v23 = *(_OWORD *)(a4 + 32);
  Length = *(_QWORD *)(a4 + 48);
  v17 = v21;
  v18 = v22;
  v19 = v23;
  v20 = Length;
  if ( (_DWORD)Length != (_DWORD)v10 )
  {
    UserSetLastError(87LL, a2, v10);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(4294967294LL);
    ProbeForRead(v11, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (const void *)v11;
  }
  if ( !(unsigned int)ValidateGestureInfo(&v17) )
    return 0LL;
  v14 = AllocGestureInfo(a1, 0LL, (__int64)&v17, v9);
  if ( !v14 )
    return 0LL;
  *a7 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
          a1,
          v7,
          DWORD2(v21),
          v14,
          a5);
  if ( a6 >= 0x2AB && (a6 <= 0x2AC || a6 == 692) )
    FreeGestureInfo(v14, 1LL, v15, v16);
  return 1LL;
}
