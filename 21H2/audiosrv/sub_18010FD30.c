/*
 * XREFs of sub_18010FD30 @ 0x18010FD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010EBE4 @ 0x18010EBE4 (sub_18010EBE4.c)
 *     sub_18010F5C8 @ 0x18010F5C8 (sub_18010F5C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010FD30(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_13;
  }
  if ( a3 > 1 )
    goto LABEL_4;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 - 8);
  if ( (unsigned int)sub_18010F5C8(a1 - 8) )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v8 + 112LL))(v8, a2, &v14);
      if ( v6 >= 0 )
      {
        if ( !v14 )
        {
LABEL_4:
          v6 = -2147024809;
          goto LABEL_13;
        }
        v9 = sub_18010EBE4(v7, a2, a3 == 0);
        v6 = 0;
        if ( v9 < 0 )
          v6 = v9;
      }
    }
    else
    {
      v6 = -2147019873;
    }
  }
  else
  {
    v6 = -2147418113;
    sub_18004BD84(
      (int)retaddr,
      646,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      -2147418113);
  }
LABEL_13:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
