/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C0023F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C00237AC (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edx
  __int64 v4; // r8
  _BYTE *v5; // rax
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // r12
  int v9; // esi
  SIZE_T v10; // rbx
  _DWORD *v11; // rax
  _DWORD *v12; // r13
  _QWORD *v13; // r8
  _DWORD *v14; // r15
  _DWORD *v15; // rsi
  unsigned int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  bool v21; // al
  __int64 v22; // rcx
  unsigned __int64 (__fastcall *v23)(unsigned __int64 *, char, unsigned __int64 *, unsigned __int64 *); // rax
  __int64 v24; // rax
  int LpIndexFromProcessorIndex; // eax
  unsigned int k; // ecx
  __int64 v27; // rax
  _DWORD *v29; // [rsp+30h] [rbp-40h]
  _QWORD *v30; // [rsp+38h] [rbp-38h]
  __int64 v31; // [rsp+40h] [rbp-30h]
  __int64 v32; // [rsp+48h] [rbp-28h]
  __int64 v33; // [rsp+50h] [rbp-20h]
  __int128 v34; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+68h] [rbp-8h]
  int j; // [rsp+B0h] [rbp+40h]
  unsigned int i; // [rsp+C0h] [rbp+50h]
  __int64 v38; // [rsp+C8h] [rbp+58h]

  v35 = 0LL;
  v2 = 0;
  v34 = 0LL;
  v3 = *(_DWORD *)(a1 + 36);
  if ( !v3 )
    goto LABEL_43;
  v4 = v3;
  v5 = (_BYTE *)(*(_QWORD *)(a1 + 408) + 16LL);
  do
  {
    if ( v5[1] && *v5 )
      ++v2;
    v5 += 24;
    --v4;
  }
  while ( v4 );
  if ( v2 )
  {
    v6 = 32 * *(_DWORD *)(a1 + 16) * (unsigned int)v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      v10 = (unsigned int)(104 * *(_DWORD *)(a1 + 16));
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
      v12 = v11;
      if ( v11 )
      {
        memset(v11, 0, v10);
        v13 = *(_QWORD **)(a1 + 424);
        v14 = v12;
        v15 = v8;
        v16 = 0;
        v30 = v13;
        v32 = *(_QWORD *)(a1 + 416);
        v29 = v8;
        for ( i = 0; v16 < *(_DWORD *)(a1 + 16); i = v16 )
        {
          *v14 = 0;
          v17 = 0LL;
          for ( j = 0; (unsigned int)v17 < *(_DWORD *)(a1 + 36); v30 = v13 )
          {
            v18 = *(_QWORD *)(a1 + 408);
            if ( *(_BYTE *)(v18 + 24 * v17 + 17) && *(_BYTE *)(v18 + 24 * v17 + 16) )
            {
              v19 = *v13;
              v33 = v19;
              v38 = 3LL * (unsigned int)*v14;
              v20 = &v14[6 * *v14];
              if ( *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))(v19 + 48) == GetCpcDifferentialFeedback )
              {
                v31 = *(_QWORD *)(v19 + 56);
                v9 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v31 + 296), (__int64)(v20 + 4));
                if ( v9 < 0 )
                  goto LABEL_39;
                v9 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v31 + 272), (__int64)&v14[2 * v38 + 2]);
                if ( v9 < 0 )
                  goto LABEL_39;
                v15 = v29;
                v21 = 0;
                v22 = v38;
              }
              else
              {
                v23 = *(unsigned __int64 (__fastcall **)(unsigned __int64 *, char, unsigned __int64 *, unsigned __int64 *))(v18 + 24 * v17);
                v22 = 3LL * (unsigned int)*v14;
                *((_QWORD *)v20 + 2) = 0x100040000000E8LL;
                *(_QWORD *)&v14[2 * v38 + 2] = 0x100040000000E7LL;
                v21 = v23 != PerfReadWrappingCounter;
              }
              LOBYTE(v14[2 * v22 + 6]) = v21;
              v24 = 32LL * v16;
              if ( *(_DWORD *)(v24 + v32 + 28) )
              {
                v15[1] = -1;
                LpIndexFromProcessorIndex = *(_DWORD *)(v24 + v32);
              }
              else
              {
                v15[1] = *(_DWORD *)(v24 + v32);
                LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex();
                LODWORD(v17) = j;
                v16 = i;
              }
              v13 = v30;
              v15[2] = LpIndexFromProcessorIndex;
              *v15 = *v14;
              *(_QWORD *)(v33 + 56) = v15;
              *(_QWORD *)(v33 + 48) = PerfHvReadFeedback;
              ++*v14;
              v15 += 8;
              v29 = v15;
            }
            v17 = (unsigned int)(v17 + 1);
            ++v13;
            j = v17;
          }
          ++v16;
          v14 += 26;
        }
        for ( k = 0; k < *(_DWORD *)(a1 + 36); ++k )
        {
          v27 = *(_QWORD *)(a1 + 408);
          if ( *(_BYTE *)(v27 + 24LL * k + 17) && *(_BYTE *)(v27 + 24LL * k + 16) )
            *(_BYTE *)(v27 + 24LL * k + 16) = 0;
        }
        LODWORD(v34) = 62;
        *((_QWORD *)&v34 + 1) = v12;
        v35 = a1;
        if ( qword_1C0014688 )
          v9 = qword_1C0014688(&v34);
        else
          v9 = -1073741822;
        if ( v9 >= 0 )
        {
          v8 = 0LL;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x14u,
            (__int64)&WPP_1179e57565003c44c8b3022adf67a914_Traceguids,
            v9);
        }
      }
      else
      {
        v9 = -1073741670;
      }
LABEL_39:
      if ( v8 )
        ExFreePoolWithTag(v8, 0x72637250u);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
LABEL_43:
    LODWORD(v34) = 62;
    *((_QWORD *)&v34 + 1) = 0LL;
    v35 = a1;
    if ( qword_1C0014688 )
      v9 = qword_1C0014688(&v34);
    else
      v9 = -1073741822;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x13u,
        (__int64)&WPP_1179e57565003c44c8b3022adf67a914_Traceguids,
        v9);
  }
  return (unsigned int)v9;
}
