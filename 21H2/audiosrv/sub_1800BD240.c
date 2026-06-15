/*
 * XREFs of sub_1800BD240 @ 0x1800BD240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180046480 @ 0x180046480 (sub_180046480.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BD240(__int64 a1, unsigned int a2, float *a3)
{
  __int64 v3; // rdi
  float *v4; // rsi
  int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _BYTE *v11; // rax
  float v12; // xmm0_4
  _BYTE v14[128]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_24:
    sub_18005E8F8((__int64)"CMeterSoftware::GetChannelsPeakValues", 688, v6);
    return (unsigned int)v6;
  }
  if ( a2 != *(_DWORD *)(a1 + 24) )
  {
    v6 = -2147024809;
    goto LABEL_24;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  v6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 && *(_DWORD *)(a1 + 24) <= 0x20u )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, v14, (unsigned int)v3);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 || v9 == -2147023174 )
      {
        if ( (_DWORD)v3 )
          memset(v4, 0, 4 * v3);
        sub_180046480((_QWORD *)(a1 + 32));
        v6 = 0;
      }
    }
    else if ( (_DWORD)v3 )
    {
      v10 = v3;
      v11 = (_BYTE *)(v14 - (_BYTE *)v4);
      do
      {
        v12 = fminf(*(float *)((char *)v4 + (_QWORD)v11), 1.0);
        if ( v12 <= 0.0 )
          v12 = 0.0;
        *v4++ = v12;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( (_DWORD)v3 )
  {
    memset(v4, 0, 4 * v3);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( v6 < 0 )
    goto LABEL_24;
  return (unsigned int)v6;
}
