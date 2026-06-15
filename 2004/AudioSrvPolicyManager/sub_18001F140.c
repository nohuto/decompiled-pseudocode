/*
 * XREFs of sub_18001F140 @ 0x18001F140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18001F140(void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *))
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v4; // [rsp+28h] [rbp-8h]
  __int64 v5; // [rsp+48h] [rbp+18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF

  v5 = 0LL;
  (**a1)(a1, &qword_180042878, &v5);
  v1 = 0LL;
  v6 = 0LL;
  v2 = v5;
  if ( v5 )
  {
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v6) >= 0 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v6 + 144);
      v4 = 0;
      sub_18001A330((__int64)&lpCriticalSection);
      if ( v4 )
        LeaveCriticalSection(lpCriticalSection);
    }
    v1 = (volatile signed __int32 *)v6;
    v2 = v5;
  }
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 32LL))(v1);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
    }
    v2 = v5;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
