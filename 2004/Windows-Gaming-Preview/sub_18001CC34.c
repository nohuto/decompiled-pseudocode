/*
 * XREFs of sub_18001CC34 @ 0x18001CC34
 * Callers:
 *     sub_18001F790 @ 0x18001F790 (sub_18001F790.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_18001610C @ 0x18001610C (sub_18001610C.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_18001D3AC @ 0x18001D3AC (sub_18001D3AC.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18001CC34(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  bool v7; // bl
  bool v8; // al
  __int64 v9; // rdx
  int v10; // eax
  HRESULT v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-79h] BYREF
  __int64 v26; // [rsp+28h] [rbp-71h] BYREF
  volatile signed __int64 *v27; // [rsp+30h] [rbp-69h] BYREF
  __int64 v28; // [rsp+38h] [rbp-61h] BYREF
  __int64 v29; // [rsp+40h] [rbp-59h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h] BYREF
  __int64 v31; // [rsp+50h] [rbp-49h] BYREF
  __int64 v32; // [rsp+58h] [rbp-41h] BYREF
  __int128 v33; // [rsp+60h] [rbp-39h] BYREF
  __int64 v34; // [rsp+70h] [rbp-29h]
  __int64 v35; // [rsp+78h] [rbp-21h]
  HSTRING_HEADER v36; // [rsp+80h] [rbp-19h] BYREF
  HSTRING v37; // [rsp+98h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+7h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 retaddr; // [rsp+F8h] [rbp+5Fh]

  v31 = 0LL;
  v30 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, &v31);
  v5 = v4;
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[1] + 72LL))(a1[1], &v30), v5 = v4, v4 < 0) )
  {
    sub_180003268(retaddr, 561, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v4);
    goto LABEL_51;
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(L"FullTileId", 0xAu, &hstringHeader, &string);
  if ( v6 < 0 )
    goto LABEL_57;
  v32 = 0LL;
  v28 = 0LL;
  v7 = (*(int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, string, &v32) >= 0;
  v8 = (*(int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, string, &v28) >= 0;
  if ( !v7 || !v8 )
  {
    v27 = 0LL;
    if ( v7 )
    {
      v9 = v32;
    }
    else
    {
      if ( !v8 )
      {
LABEL_14:
        v37 = 0LL;
        v11 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &v36, &v37);
        if ( v11 >= 0 )
        {
          v29 = 0LL;
          v26 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, v37, &v29);
          v5 = v12;
          if ( v12 >= 0
            && (v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v37, &v26),
                v5 = v12,
                v12 >= 0) )
          {
            v33 = 0LL;
            v13 = sub_18001610C((__int64)&v33);
            v5 = v13;
            if ( v13 < 0
              || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 56LL))(v29, &v25) >= 0
              && v25
              && (v13 = sub_18001D120(a1[2], v29, &v27, &v33), v5 = v13, v13 < 0)
              || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 56LL))(v26, &v25) >= 0
              && v25
              && (v13 = sub_18001D120(a1[2], v26, &v27, &v33), v5 = v13, v13 < 0) )
            {
              sub_180003268(retaddr, 561, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v13);
            }
            else
            {
              v14 = (__int64 *)(a2 + 16);
              v34 = *(_QWORD *)(a2 + 16);
              v15 = v34;
              *(_QWORD *)(a2 + 16) = 0LL;
              v16 = 0LL;
              if ( v15 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                v16 = *v14;
              }
              if ( v27 )
              {
                if ( v16 )
                {
                  *v14 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                }
                RoGetAgileReference(0LL, &xmmword_180050E58, v27, a2 + 16);
              }
              else
              {
                v35 = v16;
                *v14 = 0LL;
                if ( v16 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              }
              v5 = 0;
            }
            v17 = (volatile signed __int32 *)*((_QWORD *)&v33 + 1);
            if ( *((_QWORD *)&v33 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
                if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
              }
            }
          }
          else
          {
            sub_180003268(retaddr, 561, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v12);
          }
          v18 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          v19 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v37 = 0LL;
          goto LABEL_44;
        }
        sub_180011F90(v11);
LABEL_57:
        sub_180011F90(v6);
        JUMPOUT(0x18001D0B8LL);
      }
      v9 = v28;
    }
    v10 = sub_18001D3AC(a1[2], v9, &v27);
    v5 = v10;
    if ( v10 < 0 )
    {
      sub_180003268(retaddr, 561, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v10);
LABEL_44:
      if ( v27 )
        sub_1800120A0(v27);
      goto LABEL_46;
    }
    goto LABEL_14;
  }
  v5 = -2147024809;
  sub_180003268(retaddr, 561, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", -2147024809);
LABEL_46:
  v20 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  string = 0LL;
LABEL_51:
  v22 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v5;
}
