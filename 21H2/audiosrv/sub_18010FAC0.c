/*
 * XREFs of sub_18010FAC0 @ 0x18010FAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010EB54 @ 0x18010EB54 (sub_18010EB54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010FAC0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_11;
  }
  if ( a3 > 2 )
    goto LABEL_8;
  v7 = *(_QWORD *)(a1 + 32);
  if ( !v7 )
  {
    v6 = -2147019873;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v7 + 112LL))(v7, a2, &v12);
  if ( v6 >= 0 )
  {
    if ( !v12 )
    {
LABEL_8:
      v6 = -2147024809;
      goto LABEL_11;
    }
    v8 = sub_18010EB54((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a3);
    v6 = 0;
    if ( v8 < 0 )
      v6 = v8;
  }
LABEL_11:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
