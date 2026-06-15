/*
 * XREFs of sub_18013FC70 @ 0x18013FC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 */

__int64 __fastcall sub_18013FC70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // edi
  char v8; // al
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  v6 = 0LL;
  v14 = 0LL;
  v13 = 0;
  if ( !a2 || !a3 )
  {
    v7 = -2147467261;
    goto LABEL_11;
  }
  if ( *(int *)a2 >= 3 )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 96LL))(a1, a2, &v13);
  if ( v7 >= 0 )
  {
    if ( !v13 || (v8 = sub_180140028(a1 + 184, *(unsigned int *)(a2 + 4), &v14), v6 = v14, !v8) )
    {
LABEL_5:
      v7 = -2147024809;
      goto LABEL_11;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL))(v14, a3);
    v7 = 0;
    if ( v9 < 0 )
      v7 = v9;
  }
LABEL_11:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
