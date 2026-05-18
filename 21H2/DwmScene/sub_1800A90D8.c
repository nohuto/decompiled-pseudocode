/*
 * XREFs of sub_1800A90D8 @ 0x1800A90D8
 * Callers:
 *     sub_1800A73E0 @ 0x1800A73E0 (sub_1800A73E0.c)
 * Callees:
 *     sub_180069F50 @ 0x180069F50 (sub_180069F50.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A7B28 @ 0x1800A7B28 (sub_1800A7B28.c)
 *     sub_1800A7C10 @ 0x1800A7C10 (sub_1800A7C10.c)
 *     sub_18011C1A0 @ 0x18011C1A0 (sub_18011C1A0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A90D8(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  volatile signed __int32 *v18; // rcx

  v2 = a1[66];
  if ( v2 )
  {
    v3 = (a1[68] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = v3 + 39;
      v5 = *(_QWORD *)(v2 - 8);
      v6 = v2 - v5;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
        goto LABEL_28;
      v2 = v5;
    }
    j_j__o_free(v2);
    a1[66] = 0LL;
    a1[67] = 0LL;
    a1[68] = 0LL;
  }
  v7 = a1[65];
  if ( v7 >= 0x10 )
  {
    v8 = a1[62];
    v9 = v7 + 1;
    if ( v9 >= 0x1000 )
    {
      v4 = v9 + 39;
      v10 = *(_QWORD *)(v8 - 8);
      v6 = v8 - v10;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
        goto LABEL_28;
      v8 = v10;
    }
    j_j__o_free(v8);
  }
  a1[64] = 0LL;
  a1[65] = 15LL;
  *((_BYTE *)a1 + 496) = 0;
  sub_1800A7C10((__int64)(a1 + 60), (__int64)(a1 + 60), *(__int64 **)(a1[60] + 8LL));
  j_j__o_free(a1[60]);
  sub_18011C1A0(a1 + 59);
  v11 = (volatile signed __int32 *)a1[58];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a1[56];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  sub_1800A7B28(a1 + 52, (__int64)(a1 + 52));
  `eh vector destructor iterator'(a1 + 32, 0x10uLL, 0xAuLL, (void (*)(void *))unknown_libname_98);
  `eh vector destructor iterator'(a1 + 12, 0x10uLL, 0xAuLL, (void (*)(void *))unknown_libname_98);
  sub_180069F50(a1 + 10, (__int64)(a1 + 10));
  result = sub_1800A1F98(a1 + 6, (__int64)(a1 + 6));
  v14 = a1[5];
  if ( v14 >= 0x10 )
  {
    v15 = v14 + 1;
    v16 = a1[2];
    if ( v15 < 0x1000 )
    {
LABEL_23:
      result = j_j__o_free(v16);
      goto LABEL_24;
    }
    v4 = v15 + 39;
    v17 = *(_QWORD *)(v16 - 8);
    v6 = v16 - v17;
    if ( (unsigned __int64)(v6 - 8) <= 0x1F )
    {
      v16 = v17;
      goto LABEL_23;
    }
LABEL_28:
    o__invalid_parameter_noinfo_noreturn(v6, v4);
    JUMPOUT(0x1800A9349LL);
  }
LABEL_24:
  a1[4] = 0LL;
  a1[5] = 15LL;
  *((_BYTE *)a1 + 16) = 0;
  v18 = (volatile signed __int32 *)a1[1];
  if ( v18 )
  {
    result = (unsigned int)_InterlockedDecrement(v18 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  return result;
}
