/*
 * XREFs of sub_1800387F0 @ 0x1800387F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800387F0(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v2; // r14
  RTL_SRWLOCK *v3; // rsi
  int v4; // edi
  volatile signed __int32 *Ptr; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1 + 4;
  v8 = a2;
  v3 = a1 + 5;
  v4 = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 5);
  if ( v2->Ptr )
  {
    Ptr = (volatile signed __int32 *)v2->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)v2->Ptr + 3);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( Ptr )
  {
    v4 = sub_18001FA18(&v8, (__int64)Ptr, v2);
    if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
    if ( v4 < 0 )
      sub_180003268(
        retaddr,
        21,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
        v4);
  }
  return (unsigned int)v4;
}
