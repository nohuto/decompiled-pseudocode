/*
 * XREFs of sub_18012E8D0 @ 0x18012E8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012E460 @ 0x18012E460 (sub_18012E460.c)
 */

__int64 __fastcall sub_18012E8D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  sub_18012E460(&v7, *(void (__fastcall ****)(_QWORD, _DWORD *, _QWORD *))(a1 + 64));
  v3 = v7;
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
    v3 = v7;
    v5 = v4;
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v5;
}
