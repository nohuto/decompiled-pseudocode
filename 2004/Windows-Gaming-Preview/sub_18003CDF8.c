/*
 * XREFs of sub_18003CDF8 @ 0x18003CDF8
 * Callers:
 *     sub_180038D10 @ 0x180038D10 (sub_180038D10.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003D03C @ 0x18003D03C (sub_18003D03C.c)
 *     sub_18003D4A0 @ 0x18003D4A0 (sub_18003D4A0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003CDF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DWORD v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  DWORD LastError; // eax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v7 = WaitForSingleObject(hHandle, 0x1F4u);
  if ( !v7 )
  {
    v20[1] = a1 + 16;
    AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 8) + 64LL))(
           *(_QWORD *)(a1 + 8),
           a2,
           &v19);
    v9 = v8;
    v10 = -2147023728;
    if ( v8 == -2147023728 )
    {
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
LABEL_20:
      sub_180003268(retaddr, 208, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v10);
      return (unsigned int)v10;
    }
    if ( v8 >= 0 )
    {
      v13 = v19;
      v20[0] = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v14 = sub_18003D03C(v13, v20, a4);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v16 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
        v10 = 0;
      }
      else
      {
        sub_180003268(retaddr, 240, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v14);
        v15 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
      }
    }
    else
    {
      sub_180003268(retaddr, 238, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v8);
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
      v10 = v9;
    }
    if ( v10 < 0 )
      goto LABEL_20;
    return *(_QWORD *)(a1 + 8) == 0LL ? 0x80004003 : 0;
  }
  if ( v7 == -1 )
  {
    LastError = GetLastError();
    if ( LastError )
      return sub_18003D4A0(retaddr, 212LL, "onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", LastError);
    return *(_QWORD *)(a1 + 8) == 0LL ? 0x80004003 : 0;
  }
  sub_180003268(retaddr, 216, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", -2147023436);
  return 2147943860LL;
}
