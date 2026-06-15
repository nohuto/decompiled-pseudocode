/*
 * XREFs of sub_1800BD430 @ 0x1800BD430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BD430(__int64 a1, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // eax
  float *v10; // rcx
  __int64 v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm6_4
  _DWORD v14[32]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 > 0x20 )
      return 2147942487LL;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 40) + 32LL))(
               *(_QWORD *)(a1 + 40),
               (unsigned int)v8,
               &v14[v8]);
        if ( v2 < 0 )
          v14[v8] = 0;
        v9 = *(_DWORD *)(a1 + 24);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v9 );
      if ( v9 )
      {
        v10 = (float *)v14;
        v11 = v9;
        do
        {
          v12 = *v10++;
          v5 = fmaxf(v12, v5);
          --v11;
        }
        while ( v11 );
      }
    }
  }
  v13 = fminf(v5, 1.0);
  if ( v13 <= 0.0 )
    v13 = 0.0;
  *a2 = v13;
  if ( v2 < 0 )
    sub_18005E8F8((__int64)"CMeterHardware::GetPeakValue", 438, v2);
  return (unsigned int)v2;
}
