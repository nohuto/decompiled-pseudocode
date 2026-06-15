/*
 * XREFs of sub_18010FE40 @ 0x18010FE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_18010EC74 @ 0x18010EC74 (sub_18010EC74.c)
 *     sub_18010ED04 @ 0x18010ED04 (sub_18010ED04.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010FE40(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v8 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v8 = -2147467261;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -2147024809;
        goto LABEL_12;
      }
      v10 = sub_18010EC74((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a4);
      if ( v10 < 0 )
        goto LABEL_9;
    }
    v10 = sub_18010ED04((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a4);
    if ( v10 < 0 )
LABEL_9:
      v8 = v10;
  }
  else
  {
    v11 = sub_18010EC74((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a4);
    if ( v11 < 0 )
      v8 = v11;
  }
LABEL_12:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
