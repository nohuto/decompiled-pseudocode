/*
 * XREFs of sub_18003850C @ 0x18003850C
 * Callers:
 *     sub_180037338 @ 0x180037338 (sub_180037338.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003850C(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  _QWORD *v10; // rcx
  int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // esi
  __int64 *v14; // r15
  HSTRING v15; // r14
  DWORD LastError; // edi
  __int64 v17; // rax
  PCWSTR StringRawBuffer; // rax
  char v19; // di
  _QWORD *v20; // rcx
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h]
  unsigned int v25; // [rsp+30h] [rbp-20h] BYREF
  int *v26; // [rsp+38h] [rbp-18h]
  int v27; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v30; // [rsp+98h] [rbp+48h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+58h] BYREF

  if ( a2 )
  {
    *a3 = 0LL;
    v6 = *a2;
    v23 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 80))(a2, &v23);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v26 = &v27;
      v24 = v23;
      v27 = 0;
      v28 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 56LL))(v23, &v25);
      *v26 = v9;
      if ( v9 >= 0 && v25 )
      {
        v10 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        }
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v24 + 48LL))(v24, 0LL, &v28);
        *v26 = v11;
      }
      v12 = v25;
      v13 = 0;
      while ( 1 )
      {
        if ( *v26 < 0 || v13 == v12 )
        {
          v22 = v28;
          goto LABEL_32;
        }
        v14 = v28;
        string = 0LL;
        if ( (*(int (__fastcall **)(_QWORD *, unsigned int *))(*v28 + 88LL))(v28, &v30) < 0 || v30 > 1 )
          goto LABEL_19;
        v15 = string;
        if ( string )
        {
          LastError = GetLastError();
          WindowsDeleteString(v15);
          SetLastError(LastError);
        }
        v17 = *v14;
        string = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v17 + 48))(v14, &string) < 0
          || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL),
              v19 = 1,
              (unsigned int)o__wcsicmp(*a1, StringRawBuffer)) )
        {
LABEL_19:
          v19 = 0;
        }
        if ( string )
          WindowsDeleteString(string);
        if ( v19 )
          break;
        ++v13;
        if ( *v26 >= 0 && v13 < v25 )
        {
          v20 = v28;
          if ( v28 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
          }
          v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v24 + 48LL))(v24, v13, &v28);
          *v26 = v21;
        }
      }
      v22 = v28;
      if ( v28 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v28 + 8LL))(v28);
        v22 = v28;
      }
      *a3 = v22;
LABEL_32:
      if ( v22 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      }
      v8 = 0;
    }
    else
    {
      sub_180003AB0(
        retaddr,
        18,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
        v7);
    }
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    return v8;
  }
  else
  {
    sub_180003AB0(
      retaddr,
      15,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
      -2147024809);
    return 2147942487LL;
  }
}
