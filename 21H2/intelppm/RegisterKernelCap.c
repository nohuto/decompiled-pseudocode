/*
 * XREFs of RegisterKernelCap @ 0x1C0036C50
 * Callers:
 *     PccCapWorker @ 0x1C0010C40 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     CalculatePercentageCap @ 0x1C00263E0 (CalculatePercentageCap.c)
 *     PepTranslateLimitReason @ 0x1C003AE9C (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r11
  int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 1184);
  v2 = (_DWORD *)a1;
  v3 = 2;
  if ( v1 )
  {
    v3 = PepTranslateLimitReason(*(unsigned int *)(v1 + 24), *(unsigned int *)(v1 + 32));
  }
  else if ( *(_QWORD *)(a1 + 232) || *(_QWORD *)(a1 + 240) )
  {
    v4 = *(_DWORD *)(a1 + 724);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 216);
    if ( !v5 )
      return 0LL;
    v4 = CalculatePercentageCap(*(_QWORD *)(v5 + 24), v2[112], v2[124]);
  }
  v11 = 0LL;
  v6 = v2[20];
  v10[0] = 62;
  if ( v6 )
  {
    HIDWORD(v11) = v6;
    v7 = v2[21];
  }
  else
  {
    v7 = v2[14];
  }
  v10[1] = v7;
  v10[3] = v2[180];
  v8 = v11;
  if ( v4 < 0x64 )
    v8 = v3;
  v10[2] = v4;
  LODWORD(v11) = v8;
  ((void (__fastcall *)(_DWORD *))qword_1C001C610)(v10);
  return 0LL;
}
