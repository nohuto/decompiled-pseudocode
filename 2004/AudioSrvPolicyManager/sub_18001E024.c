/*
 * XREFs of sub_18001E024 @ 0x18001E024
 * Callers:
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180017FBC @ 0x180017FBC (sub_180017FBC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E024(__int64 a1, volatile signed __int32 **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 *v5; // rdx
  volatile signed __int32 *v6; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = *(__int64 **)(a1 + 72);
  if ( v5 )
  {
    while ( (volatile signed __int32 *)v5[2] != *a2 )
    {
      v5 = (__int64 *)*v5;
      if ( !v5 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0LL;
  }
  if ( v5 )
    sub_180017FBC((__int64 **)(a1 + 72), v5);
  v6 = *a2;
  if ( *a2 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
    }
    *a2 = 0LL;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
