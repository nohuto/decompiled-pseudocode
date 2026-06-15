/*
 * XREFs of sub_1800F10B0 @ 0x1800F10B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180044248 @ 0x180044248 (sub_180044248.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F10B0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rbp
  __int64 *v8; // r14
  __int64 *i; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h]

  v17 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(__int64 **)(v7 + 32);
  for ( i = *(__int64 **)(v7 + 24); i != v8; ++i )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 184LL))(*i);
    if ( v10 == v17 )
      break;
  }
  if ( i == *(__int64 **)(v7 + 32) )
  {
    v11 = -2147023728;
    v12 = 530;
LABEL_7:
    sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v11);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v11;
  }
  if ( sub_180044248(*i) )
  {
    v11 = -2147024882;
    v12 = 533;
    goto LABEL_7;
  }
  sub_180048790(&v16, *i);
  v14 = v16;
  if ( v16 )
  {
    *a4 = v16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  else
  {
    *a4 = 0LL;
  }
  sub_18000F708(&v16);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
