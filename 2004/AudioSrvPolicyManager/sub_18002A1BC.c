/*
 * XREFs of sub_18002A1BC @ 0x18002A1BC
 * Callers:
 *     sub_180024FC0 @ 0x180024FC0 (sub_180024FC0.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     sub_180024FD8 @ 0x180024FD8 (sub_180024FD8.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002A1BC(DWORD SessionId, __int64 a2, float a3, char *a4)
{
  signed int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // r14
  char v9; // si
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v19; // [rsp+20h] [rbp-50h] BYREF
  void *v20[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v23; // [rsp+50h] [rbp-20h]

  v7 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v20[1] = v8;
  v9 = 1;
  v10 = sub_18002880C(SessionId, 1, 0LL, &v19);
  if ( v10 )
  {
    v7 = (unsigned __int16)v10 | 0x80070000;
    if ( v10 <= 0 )
      v7 = v10;
LABEL_17:
    if ( v7 >= 0 )
      goto LABEL_23;
    goto LABEL_18;
  }
  sub_180017BB0(v20, a2);
  v11 = sub_180024FD8(v19 + 280, &v22, (__int64 *)v20);
  v12 = *v11;
  v13 = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  *(_QWORD *)&v21 = v12;
  *((_QWORD *)&v21 + 1) = v13;
  v14 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v15 = (char *)v20[0] - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
  if ( !v12 )
  {
    v7 = -2147024809;
LABEL_18:
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Fu, &stru_180044DE8, v7);
    }
    sub_180005724("TsSessionUpdateDuckingGainForId", 2532, v7);
    goto LABEL_23;
  }
  v16 = v21;
  if ( *(float *)(v21 + 8) == a3 )
    v9 = 0;
  *a4 = v9;
  if ( v9 )
  {
    *(float *)(v16 + 8) = a3;
    goto LABEL_17;
  }
LABEL_23:
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v17 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  return (unsigned int)v7;
}
