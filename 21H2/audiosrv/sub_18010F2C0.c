/*
 * XREFs of sub_18010F2C0 @ 0x18010F2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010F2C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v8 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( a4 && a2 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, a2, a4);
          if ( v10 < 0 )
            v8 = v10;
        }
        else
        {
          v8 = -2147024809;
        }
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, a2, a4);
        if ( v11 < 0 )
          v8 = v11;
      }
    }
    else
    {
      v8 = -2147019873;
    }
  }
  else
  {
    v8 = -2147467261;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
