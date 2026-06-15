/*
 * XREFs of sub_18005757C @ 0x18005757C
 * Callers:
 *     sub_180057444 @ 0x180057444 (sub_180057444.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_18005779C @ 0x18005779C (sub_18005779C.c)
 *     sub_180057830 @ 0x180057830 (sub_180057830.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 (__fastcall **__fastcall sub_18005757C(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // r10
  __int64 v9; // rcx
  __int64 (__fastcall **v10)(); // rbx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+38h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-10h] BYREF
  char v15; // [rsp+48h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h] BYREF

  result = (__int64 (__fastcall **)())&retaddr;
  v8 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a3;
  v9 = 0LL;
  v12 = 0LL;
  if ( v8 )
  {
    result = (__int64 (__fastcall **)())(**v8)(v8, &unk_18015AFA0, &v12);
    v9 = v12;
  }
  if ( v9 )
  {
    result = (__int64 (__fastcall **)())sub_18006A18C(40LL, &unk_18019F848);
    v10 = result;
    v13 = result;
    if ( result )
    {
      *(_OWORD *)result = 0LL;
      *((_OWORD *)result + 1) = 0LL;
      result[4] = 0LL;
      *((_DWORD *)result + 3) = 0;
      result[2] = 0LL;
      *((_DWORD *)result + 6) = 1;
      result[4] = 0LL;
      ++dword_18019E558;
      result = off_180147798;
      *v10 = (__int64 (__fastcall *)())off_180147798;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v13 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64, void *, __int64 (__fastcall ***)()))(*(_QWORD *)v12 + 104LL))(
             v12,
             23LL,
             &unk_18015BB28,
             &v13) < 0
        || (result = (__int64 (__fastcall **)())(*((__int64 (__fastcall **)(__int64 (__fastcall **)(), void *, __int64))*v13
                                                 + 3))(
                                                  v13,
                                                  &unk_18019D6B8,
                                                  2LL),
            (int)result >= 0) )
      {
        if ( (int)sub_180057830(v10, v12, a1) >= 0 )
        {
          lpCriticalSection = &stru_18019F8B0;
          v15 = 0;
          sub_180057764(&lpCriticalSection);
          if ( sub_18005779C(v11, v10) )
            (*((void (__fastcall **)(__int64 (__fastcall **)()))*v10 + 1))(v10);
          if ( v15 )
            LeaveCriticalSection(lpCriticalSection);
        }
        result = (__int64 (__fastcall **)())(*((__int64 (__fastcall **)(__int64 (__fastcall **)()))*v10 + 2))(v10);
      }
      if ( v13 )
        result = (__int64 (__fastcall **)())(*((__int64 (__fastcall **)(__int64 (__fastcall **)()))*v13 + 2))(v13);
    }
    v9 = v12;
  }
  if ( v9 )
    result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( *a3 )
    result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return result;
}
