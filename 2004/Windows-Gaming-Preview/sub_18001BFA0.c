/*
 * XREFs of sub_18001BFA0 @ 0x18001BFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_18001E990 @ 0x18001E990 (sub_18001E990.c)
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001BFA0(RTL_SRWLOCK *a1, __int64 a2)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // r9d
  int v8; // edx
  RTL_SRWLOCK *v9; // r14
  volatile signed __int32 *v10; // rbx
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rcx
  PVOID v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int64 *v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+28h]
  PVOID Ptr; // [rsp+78h] [rbp+38h] BYREF
  volatile signed __int64 *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  if ( !a2 )
  {
    sub_180003268(retaddr, 353, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", -2147024809);
    return 2147942487LL;
  }
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    Ptr = a1[16].Ptr;
    v13 = a1[7].Ptr;
    v14 = v19;
    v6 = ((__int64 (__fastcall *)(volatile signed __int64 **, __int64 *, PVOID *, PVOID *))sub_18001E990)(
           &v18,
           &v14,
           &v13,
           &Ptr);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v15 = v18;
      v9 = a1 + 10;
      v5 = 0;
      v10 = 0LL;
      AcquireSRWLockExclusive(v9 + 1);
      if ( v9->Ptr )
      {
        v10 = (volatile signed __int32 *)v9->Ptr;
        _InterlockedIncrement((volatile signed __int32 *)v9->Ptr + 3);
      }
      if ( v9 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(v9 + 1);
      if ( !v10 )
        goto LABEL_18;
      v5 = sub_18001FA18(&v15, v10, v9);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
        if ( qword_18005ADB0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
      }
      if ( v5 >= 0 )
        goto LABEL_18;
      v7 = v5;
      v8 = 365;
    }
    else
    {
      v7 = v6;
      v8 = 363;
    }
    sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v7);
LABEL_18:
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      sub_1800120A0(v11);
    }
    goto LABEL_20;
  }
  sub_180003268(retaddr, 356, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v4);
LABEL_20:
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v5;
}
