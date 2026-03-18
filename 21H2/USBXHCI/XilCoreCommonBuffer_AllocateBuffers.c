/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015B94
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0009E10 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C000FAEC (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_Create @ 0x1C001591C (XilCoreCommonBuffer_Create.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0015AD8 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0016390 (WPP_RECORDER_SF_qDD.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C001686C (DmaEnabler_AllocateCommonBufferPage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C004FDB8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x1C005094C (WPP_RECORDER_SF_ddqDddd.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007837C (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

void __fastcall XilCoreCommonBuffer_AllocateBuffers(__int64 **a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  unsigned int v7; // r12d
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  __int64 *v15; // r15
  KIRQL v16; // al
  __int64 v17; // r14
  _QWORD *v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 ***v25; // rcx
  int v26; // edx
  int v27; // r9d
  int v28; // eax
  int v29; // [rsp+20h] [rbp-98h]
  int v30; // [rsp+38h] [rbp-80h]
  __int64 i; // [rsp+60h] [rbp-58h]
  unsigned int v32; // [rsp+C0h] [rbp+8h]
  __int64 v33; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+18h]
  __int64 v35; // [rsp+D8h] [rbp+20h] BYREF

  v3 = 0;
  v35 = 0LL;
  v5 = a2;
  v33 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v30 = *(_DWORD *)(a2 + 28);
    v28 = *(_DWORD *)(a2 + 24);
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qDD(a1[1][9], a2, 8, 11, (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids, v5, v28, v30);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 52);
  v7 = ((unsigned int)(a3 * *(_DWORD *)v5) >> 12) + (((a3 * *(_DWORD *)v5) & 0xFFF) != 0);
  v9 = 0x1000u % *(_DWORD *)v5;
  v8 = 0x1000u / *(_DWORD *)v5;
  v34 = 0x1000u / *(_DWORD *)v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_DD(a1[1][9], v9, 8, 12, (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids, v7, v8);
    v8 = v34;
  }
  v32 = 0;
  v10 = 0;
  if ( v7 )
  {
    v11 = 88 * v8 + 32;
    for ( i = v11; ; v11 = i )
    {
      v12 = **a1;
      v13 = *((_BYTE *)*a1 + 80)
          ? SecureDmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v12 + 104), v11, &v33, &v35)
          : DmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v12 + 96), v11, &v33, &v35);
      if ( v13 < 0 )
        break;
      v15 = (__int64 *)v33;
      if ( (*(_DWORD *)(v33 + 8) & 0xFFF) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_(a1[1][9], v14, 8, 13, (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids);
        }
        if ( *((_BYTE *)*a1 + 80) )
          SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(**a1 + 104), v15);
        else
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v15[2]);
      }
      else
      {
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 2);
        v17 = v35;
        *((_BYTE *)a1 + 25) = v16;
        ++*((_DWORD *)a1 + 50);
        *(_QWORD *)(v17 + 24) = v15;
        *(_BYTE *)(v17 + 16) = 1;
        v18 = *(_QWORD **)(v5 + 56);
        if ( *v18 != v5 + 48 )
LABEL_33:
          __fastfail(3u);
        *(_QWORD *)v17 = v5 + 48;
        *(_QWORD *)(v17 + 8) = v18;
        *v18 = v17;
        *(_QWORD *)(v5 + 56) = v17;
        if ( v34 )
        {
          v19 = v5 + 32;
          v20 = (_QWORD *)(v17 + 80);
          do
          {
            v21 = *v15;
            *(v20 - 4) = *v15;
            *(v20 - 4) = v21 + v3 * *(_DWORD *)v5;
            v22 = v15[1];
            *(v20 - 3) = v22;
            v23 = v3 * *(_DWORD *)v5;
            *(v20 - 2) = v17;
            *(v20 - 3) = v22 + v23;
            *((_DWORD *)v20 - 2) = *(_DWORD *)v5;
            v24 = *(_QWORD **)(v19 + 8);
            if ( *v24 != v19 )
              goto LABEL_33;
            *(v20 - 5) = v24;
            *(v20 - 6) = v19;
            *v24 = v20 - 6;
            *(_QWORD *)(v19 + 8) = v20 - 6;
            v25 = (__int64 ***)a1[21];
            if ( *v25 != a1 + 20 )
              goto LABEL_33;
            *v20 = a1 + 20;
            v20[1] = v25;
            *v25 = (__int64 **)v20;
            a1[21] = v20;
            v26 = *(_DWORD *)(v5 + 24) + 1;
            v27 = *(_DWORD *)(v5 + 28) + 1;
            *(_DWORD *)(v5 + 24) = v26;
            *(_DWORD *)(v5 + 28) = v27;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_ddqDddd(
                  a1[1][9],
                  v26,
                  v19,
                  v27,
                  v29,
                  v32,
                  v3,
                  *(v20 - 4),
                  *((_DWORD *)v20 - 6),
                  *((_DWORD *)v20 - 2),
                  v26,
                  v27);
                v19 = v5 + 32;
              }
            }
            ++v3;
            v20 += 11;
          }
          while ( v3 < v34 );
          v10 = v32;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 2, *((_BYTE *)a1 + 25));
        v3 = 0;
      }
      v32 = ++v10;
      if ( v10 >= v7 )
        break;
    }
  }
}
