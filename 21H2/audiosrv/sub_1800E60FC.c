/*
 * XREFs of sub_1800E60FC @ 0x1800E60FC
 * Callers:
 *     sub_1800E4970 @ 0x1800E4970 (sub_1800E4970.c)
 *     sub_1800E4A50 @ 0x1800E4A50 (sub_1800E4A50.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E60FC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v11[2]; // [rsp+30h] [rbp-528h] BYREF
  _BYTE v12[1264]; // [rsp+40h] [rbp-518h] BYREF

  v11[0] = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v11);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v11[1] = a1 + 152;
  v5 = *(_QWORD **)(a1 + 192);
  v6 = *(_QWORD *)(a1 + 200);
  while ( v5 != (_QWORD *)v6 && *v5 != a2 )
    ++v5;
  if ( v5 != (_QWORD *)v6 )
  {
    v7 = v5 + 1;
    v8 = 0LL;
    v9 = (v6 - (unsigned __int64)(v5 + 1) + 7) >> 3;
    if ( (unsigned __int64)(v5 + 1) > v6 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v7 != a2 )
          *v5++ = *v7;
        ++v7;
        ++v8;
      }
      while ( v8 != v9 );
    }
  }
  *(_QWORD *)(a1 + 200) = v5;
  memset(v12, 0, sizeof(v12));
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v12, 0LL);
  if ( a1 != -152 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11[0] + 200LL))(v11[0], 2LL, 0xFFFFFFFFLL, v4);
  sub_18000F708(v11);
  return 0LL;
}
