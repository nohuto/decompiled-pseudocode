/*
 * XREFs of sub_180024B50 @ 0x180024B50
 * Callers:
 *     sub_18002975C @ 0x18002975C (sub_18002975C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     sub_180024FD8 @ 0x180024FD8 (sub_180024FD8.c)
 *     sub_18002DD08 @ 0x18002DD08 (sub_18002DD08.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180024B50(LPCRITICAL_SECTION lpCriticalSection, unsigned int a2, int a3, __int64 a4, int *a5)
{
  __int64 v5; // rbx
  int v7; // edi
  int v8; // esi
  unsigned int v9; // r14d
  __int64 v10; // r12
  __int64 *v11; // r15
  volatile signed __int32 *v12; // rdx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // r14d
  __int64 *v16; // r15
  volatile signed __int32 *v17; // rdx
  volatile signed __int32 *v18; // rbx
  int v20; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+44h] [rbp-3Ch] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int32 *v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  volatile signed __int32 *v27; // [rsp+70h] [rbp-10h]

  v5 = a4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 21LL * a2;
  v11 = (__int64 *)&off_18003FA20[v10];
  while ( 1 )
  {
    sub_180017BB0((void **)&v22, *v11);
    sub_180024FD8(lpCriticalSection[9].OwningThread, &v24, &v22);
    v12 = v22 - 6;
    if ( _InterlockedExchangeAdd(v22 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12);
    if ( v24 )
    {
      v20 = 0;
      v7 = sub_18002DD08(lpCriticalSection, a3, v5, (__int64)&v20);
      if ( v7 < 0 )
      {
        v14 = v25;
LABEL_16:
        if ( v14 )
        {
          if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        goto LABEL_35;
      }
      if ( v8 || v20 )
        v8 = 1;
    }
    v13 = v25;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    ++v9;
    ++v11;
    if ( v9 >= 0x15 )
      break;
    v5 = a4;
  }
  v15 = 0;
  v16 = (__int64 *)&off_18003FA20[v10];
  do
  {
    sub_180017BB0((void **)&v23, *v16);
    sub_180024FD8(lpCriticalSection[9].OwningThread, &v26, &v23);
    v17 = v23 - 6;
    if ( _InterlockedExchangeAdd(v23 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17);
    if ( v26 )
    {
      v21 = 0;
      v7 = sub_18002DD08(lpCriticalSection, a3, a4, (__int64)&v21);
      if ( v7 < 0 )
      {
        v14 = v27;
        goto LABEL_16;
      }
      if ( v8 || v21 )
        v8 = 1;
    }
    v18 = v27;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    ++v15;
    ++v16;
  }
  while ( v15 < 0x15 );
  if ( a5 )
    *a5 = v8;
LABEL_35:
  if ( v7 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_180044AD8, v7);
    }
    sub_180005724("CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains", 157, v7);
  }
  return (unsigned int)v7;
}
