/*
 * XREFs of sub_18001C160 @ 0x18001C160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001C160(RTL_SRWLOCK *a1, __int64 a2)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r9d
  int v10; // edx
  volatile signed __int32 *Ptr; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  HSTRING v15; // [rsp+28h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  if ( !a2 )
  {
    sub_180003268(retaddr, 373, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", -2147024809);
    return 2147942487LL;
  }
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, &v18);
    v5 = v6;
    if ( v6 < 0 )
    {
      sub_180003268(retaddr, 379, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v6);
      goto LABEL_21;
    }
    string = 0LL;
    v7 = v18;
    WindowsDeleteString(0LL);
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 56LL))(v7, &string);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v15 = string;
      v5 = 0;
      Ptr = 0LL;
      AcquireSRWLockExclusive(a1 + 14);
      if ( a1[13].Ptr )
      {
        Ptr = (volatile signed __int32 *)a1[13].Ptr;
        _InterlockedIncrement(Ptr + 3);
      }
      if ( a1 != (RTL_SRWLOCK *)-112LL )
        ReleaseSRWLockExclusive(a1 + 14);
      if ( !Ptr )
        goto LABEL_20;
      v5 = sub_18001FA18(&v15, Ptr, &a1[13]);
      if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
        if ( qword_18005ADB0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
      }
      if ( v5 >= 0 )
        goto LABEL_20;
      v9 = v5;
      v10 = 384;
    }
    else
    {
      v9 = v8;
      v10 = 382;
    }
    sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v9);
LABEL_20:
    WindowsDeleteString(string);
    string = 0LL;
LABEL_21:
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_23;
  }
  sub_180003268(retaddr, 376, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v4);
LABEL_23:
  v13 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v5;
}
