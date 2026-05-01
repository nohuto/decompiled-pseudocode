/*
 * XREFs of sub_18001DDD8 @ 0x18001DDD8
 * Callers:
 *     sub_18001C850 @ 0x18001C850 (sub_18001C850.c)
 *     sub_18001C950 @ 0x18001C950 (sub_18001C950.c)
 *     sub_18001CA00 @ 0x18001CA00 (sub_18001CA00.c)
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 * Callees:
 *     sub_18001E15C @ 0x18001E15C (sub_18001E15C.c)
 *     sub_18001EC54 @ 0x18001EC54 (sub_18001EC54.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001DDD8(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v2; // r14
  _QWORD *Ptr; // rax
  int v6; // esi
  _QWORD *v7; // rcx
  bool v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  _QWORD *v11; // rsi
  _QWORD *v12; // r13
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v15; // [rsp+80h] [rbp+50h] BYREF
  volatile signed __int32 *v16; // [rsp+88h] [rbp+58h] BYREF

  v16 = 0LL;
  v2 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v6 = 0;
LABEL_10:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v6;
  }
  v7 = (_QWORD *)Ptr[2];
  v8 = 0;
  v9 = Ptr[3];
  v15 = 0LL;
  v10 = ((v9 - (__int64)v7) >> 3) - 1;
  v14 = v10;
  if ( !v10 )
  {
    v8 = *v7 == a2;
LABEL_20:
    if ( v8 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      sub_18001E15C(&v16, a1);
      sub_18001E15C(a1, &v15);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
    }
    goto LABEL_23;
  }
  v6 = sub_18001EC54(&v15, &v14);
  if ( v6 < 0 )
  {
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
        if ( qword_18005ADB0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
      }
    }
    goto LABEL_10;
  }
  v11 = (_QWORD *)*((_QWORD *)a1->Ptr + 2);
  v12 = (_QWORD *)*((_QWORD *)a1->Ptr + 4);
  if ( v11 != *((_QWORD **)a1->Ptr + 3) )
  {
    do
    {
      if ( v8 || a2 != *v11 )
      {
        if ( !v10 )
          break;
        sub_1800267DC(v15, *v11, *v12++);
        --v10;
      }
      else
      {
        v8 = 1;
      }
      ++v11;
    }
    while ( v11 != *((_QWORD **)a1->Ptr + 3) );
    v14 = v10;
    goto LABEL_20;
  }
LABEL_23:
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v6 = 0;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  return (unsigned int)v6;
}
