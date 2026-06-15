/*
 * XREFs of sub_1800BD550 @ 0x1800BD550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180046480 @ 0x180046480 (sub_180046480.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BD550(__int64 a1, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  float *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm6_4
  _BYTE v14[128]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v8 = *(_QWORD *)(a1 + 32);
  if ( !v8 )
    goto LABEL_9;
  if ( *(_DWORD *)(a1 + 24) <= 0x20u )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 24LL))(v8, v14);
    v2 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 || v9 == -2147023174 )
      {
        sub_180046480((_QWORD *)(a1 + 32));
        v2 = 0;
      }
    }
    else if ( *(_DWORD *)(a1 + 24) )
    {
      v10 = *(unsigned int *)(a1 + 24);
      v11 = (float *)v14;
      do
      {
        v12 = *v11++;
        v5 = fmaxf(v12, v5);
        --v10;
      }
      while ( v10 );
    }
LABEL_9:
    if ( v7 )
      LeaveCriticalSection(v7);
    v13 = fminf(v5, 1.0);
    if ( v13 <= 0.0 )
      v13 = 0.0;
    *a2 = v13;
    if ( v2 < 0 )
      sub_18005E8F8((__int64)"CMeterSoftware::GetPeakValue", 607, v2);
    return (unsigned int)v2;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 2147942487LL;
}
