/*
 * XREFs of sub_1800AD770 @ 0x1800AD770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B1C18 @ 0x1800B1C18 (sub_1800B1C18.c)
 *     sub_1800B1E40 @ 0x1800B1E40 (sub_1800B1E40.c)
 *     sub_1800DDB08 @ 0x1800DDB08 (sub_1800DDB08.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AD770(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  const char *v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  signed __int32 v13; // eax
  bool v14; // zf
  void (__fastcall **v15)(__int64); // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  signed __int32 v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v27; // [rsp+48h] [rbp+7h]
  char v28[16]; // [rsp+58h] [rbp+17h] BYREF
  char v29[16]; // [rsp+68h] [rbp+27h] BYREF
  char v30[16]; // [rsp+78h] [rbp+37h] BYREF
  char v31[16]; // [rsp+88h] [rbp+47h] BYREF
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF

  result = (__int64)&retaddr;
  v5 = *(_DWORD *)(a1 + 128);
  if ( v5 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 440) & 0x100) != 0 )
      v5 = ((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 280LL))(*a2) != 0) + 2;
    result = *(_DWORD *)(a1 + 440) >> 9;
    if ( (*(_DWORD *)(a1 + 440) & 0x200) != 0 )
      v5 = 4;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a2 + 32LL))(*a2, v30);
    sub_1800B1E40(a1, v23);
    v24 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a2 + 40LL))(*a2, v31);
    return sub_1800B1C18(a1, v24);
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      if ( !*(_QWORD *)(a1 + 136) && !*(_QWORD *)(a1 + 152) )
      {
        v8 = (const char *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
          v8 = *(const char **)v8;
        return sub_18011BCAC(
                 &unk_1802136C0,
                 4LL,
                 "Warning: camera '%s' not bound to any render target or depth buffer -- no pixels will be rendered",
                 v8);
      }
      return result;
    }
    v27 = 0LL;
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
    v10 = v9[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = v9[1];
    }
    *(_QWORD *)&v27 = *v9;
    *((_QWORD *)&v27 + 1) = v10;
    v11 = sub_1800DDC68(v27, v28, 2LL);
    sub_1800B1E40(a1, v11);
    v12 = sub_1800DDB08(v27, v29, 2LL);
    result = sub_1800B1C18(a1, v12);
    if ( v10 )
    {
      v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF);
      v14 = v13 == 1;
      result = (unsigned int)(v13 - 1);
      if ( v14 )
      {
        (**(void (__fastcall ***)(__int64))v10)(v10);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
        if ( !(_DWORD)result )
        {
          v15 = *(void (__fastcall ***)(__int64))v10;
          v16 = v10;
          return ((__int64 (__fastcall *)(__int64))v15[1])(v16);
        }
      }
    }
  }
  else
  {
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
    v18 = v17[1];
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v18 = v17[1];
    }
    v19 = (_QWORD *)*v17;
    v20 = *(_QWORD *)(*v17 + 464LL);
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v20 = v19[58];
    }
    v25[0] = v19[57];
    v25[1] = v20;
    sub_1800B1E40(a1, v25);
    v21 = v19[60];
    if ( v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
      v21 = v19[60];
    }
    v26[0] = v19[59];
    v26[1] = v21;
    result = sub_1800B1C18(a1, v26);
    if ( v18 )
    {
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF);
      v14 = v22 == 1;
      result = (unsigned int)(v22 - 1);
      if ( v14 )
      {
        (**(void (__fastcall ***)(__int64))v18)(v18);
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
        if ( !(_DWORD)result )
        {
          v15 = *(void (__fastcall ***)(__int64))v18;
          v16 = v18;
          return ((__int64 (__fastcall *)(__int64))v15[1])(v16);
        }
      }
    }
  }
  return result;
}
