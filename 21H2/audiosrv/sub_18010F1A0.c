/*
 * XREFs of sub_18010F1A0 @ 0x18010F1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010F1A0(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v12 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 64));
  if ( a2 && a3 )
  {
    *a3 = 1;
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v7 + 152LL))(v7, a2, &v12);
      if ( v8 >= 0 )
        *a3 = v12 == 0;
      else
        v6 = v8;
    }
    else
    {
      v6 = -2147019873;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
