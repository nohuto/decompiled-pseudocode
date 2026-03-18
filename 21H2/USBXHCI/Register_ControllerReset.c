/*
 * XREFs of Register_ControllerReset @ 0x1C0013D48
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 *     Register_PrepareHardware @ 0x1C0071244 (Register_PrepareHardware.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     Register_WaitForControllerReady @ 0x1C0013BAC (Register_WaitForControllerReady.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0014130 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Register_SetClearSSICPortUnused @ 0x1C00141D8 (Register_SetClearSSICPortUnused.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     Etw_StartDeviceFail @ 0x1C004885C (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  unsigned int *v4; // rbp
  int v5; // eax
  int v6; // edx
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __m128i *v17; // rcx
  int v19; // r9d
  int v20; // edx
  int v21; // eax
  void (*v22)(void); // rax
  int Ulong; // eax
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      6,
      60,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v4 = *(unsigned int **)(a1 + 32);
    v5 = Register_WaitForControllerReady(a1);
    v7 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 61;
LABEL_23:
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          6,
          v19,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          v5);
      }
    }
    else
    {
      if ( a2 || (XilRegister_ReadUlong(a1, v4 + 1) & 1) != 0 )
      {
        Register_SetClearSSICPortUnused(a1, 0LL);
        XilRegister_WriteUlong(a1, v4, 2);
        v8 = 0;
        v9 = 1;
        if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u8[0] & 2) != 0 )
        {
          Interval.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          v8 = 1;
          v9 = 2;
        }
        v10 = v8;
        while ( (XilRegister_ReadUlong(a1, v4) & 2) != 0 )
        {
          if ( v8 == 100 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v11) = 1;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                v11,
                6,
                65,
                (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
                v10);
            }
            Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v11, 3LL);
            return (unsigned int)-1073741823;
          }
          Interval.QuadPart = -10000LL * v9;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v20,
              6,
              66,
              (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
              v8,
              v9);
          }
          v10 += v9;
          v21 = 2 * v9;
          ++v8;
          if ( v9 == 16 )
            v21 = 16;
          v9 = v21;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v11,
            6,
            63,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            v10);
        }
        if ( v10 > 0x32 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v11,
            6,
            64,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            v10);
        }
        v5 = Register_WaitForControllerReady(a1);
        v7 = v5;
        if ( v5 >= 0 )
        {
          v12 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v12 + 352) & 0x10) != 0 )
          {
            Interval.QuadPart = -1000000LL;
            KeDelayExecutionThread(0, 0, &Interval);
            v12 = *(_QWORD *)(a1 + 8);
          }
          v13 = *(_QWORD *)(v12 + 168);
          if ( v13 )
          {
            v22 = *(void (**)(void))(v13 + 32);
            if ( v22 )
              v22();
          }
          Register_RestoreRyzenFeatureBitsPostReset(a1);
          v17 = *(__m128i **)(a1 + 8);
          if ( (_mm_srli_si128(v17[21], 8).m128i_u64[0] & 0x8000) != 0 )
          {
            if ( *(_DWORD *)(a1 + 20) < 0x80F0u || v17[20].m128i_i8[1] || v17[20].m128i_i8[0] != 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16);
              if ( !KdRefreshDebuggerNotPresent() )
                __debugbreak();
            }
            else
            {
              Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 33004LL));
              XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 33004LL), Ulong | 1);
            }
          }
          return v7;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v7;
        v19 = 67;
        goto LABEL_23;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2,
          6,
          62,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
