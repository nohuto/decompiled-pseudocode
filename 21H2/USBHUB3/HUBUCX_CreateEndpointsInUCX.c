/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x1C0024900
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x1C0021350 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetEndpointPriority @ 0x1C0024790 (HUBUCX_GetEndpointPriority.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 a1)
{
  int v1; // edi
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, __int64); // r12
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 i; // rsi
  __int64 j; // rbp
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h]
  __int64 v26; // [rsp+A0h] [rbp+18h]
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v24 = 0;
  v1 = 0;
  v3 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x26u,
        (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids);
    return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = *(_QWORD *)(a1 + 48);
  v27 = *(_QWORD *)(a1 + 104);
  v5 = (__int64 *)(v4 + 16);
  v26 = *(_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(v4 + 16);
  v25 = v4;
  v7 = v6 - 8;
  if ( v4 + 16 == v6 )
    goto LABEL_29;
  while ( 1 )
  {
    v8 = 0LL;
    if ( *(_DWORD *)(v7 + 24) )
      break;
LABEL_23:
    v17 = *(__int64 **)(v7 + 8);
    v7 = (__int64)(v17 - 1);
    if ( v5 == v17 )
      goto LABEL_28;
  }
  while ( 1 )
  {
    v9 = v7 + 72 * v8 + 40;
    if ( *(_DWORD *)(v9 + 8) == 1 )
      break;
LABEL_22:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 24) )
      goto LABEL_23;
  }
  v10 = *(_QWORD *)(v9 + 48);
  v11 = *(unsigned int *)(v9 + 40);
  v12 = *(_QWORD *)(v9 + 32);
  *(_DWORD *)(v9 + 8) = 2;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(v3 + 448))(
         *(_QWORD *)(v3 + 248),
         *(_QWORD *)(a1 + 24),
         v12,
         v11,
         v10,
         v7 + 72 * v8 + 40);
  if ( v1 >= 0 )
  {
    v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v3 + 592);
    if ( !v13 )
      goto LABEL_19;
    v14 = *(unsigned int *)(v9 + 64);
    if ( (_DWORD)v14 )
      goto LABEL_17;
    if ( (int)HUBUCX_GetEndpointPriority(a1, v7, v7 + 72 * v8 + 40, &v24) >= 0 )
    {
      switch ( v24 )
      {
        case 1:
          v14 = 1LL;
          goto LABEL_17;
        case 2:
          v14 = 2LL;
          goto LABEL_17;
        case 3:
          v14 = 3LL;
LABEL_17:
          v13(*(_QWORD *)(v3 + 248), *(_QWORD *)(a1 + 24), *(_QWORD *)v9, v14);
          break;
      }
    }
    v1 = 0;
LABEL_19:
    v15 = *(_QWORD *)v9;
    if ( (*(_DWORD *)(v9 + 12) & 1) != 0 )
    {
      v16 = v26;
      *(_DWORD *)(v9 + 8) = 6;
      *(_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v15;
    }
    else
    {
      *(_QWORD *)(v27 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v15;
    }
    goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v1;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x27u,
      (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
      v23);
  }
  *(_DWORD *)(v9 + 8) = 1;
LABEL_28:
  v4 = v25;
LABEL_29:
  for ( i = *v5; ; i = *(_QWORD *)(v21 + 8) )
  {
    v21 = i - 8;
    if ( v4 == v21 - 8 )
      break;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v21 + 24); j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(v21 + 72 * j + 48) == 2 )
      {
        if ( v1 >= 0 )
        {
          *(_DWORD *)(v21 + 72 * j + 48) = 3;
        }
        else
        {
          v20 = *(_QWORD *)(v21 + 72 * j + 40);
          *(_DWORD *)(v21 + 72 * j + 48) = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v3 + 456))(*(_QWORD *)(v3 + 248), *(_QWORD *)(a1 + 24), v20);
        }
      }
    }
  }
  if ( v1 < 0 )
  {
    *(_DWORD *)(a1 + 112) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 1564) = -1073737728;
    *(_DWORD *)(a1 + 1560) = -1073741670;
  }
  return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
}
