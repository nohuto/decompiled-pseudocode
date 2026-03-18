/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01830B0
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188C3C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0196FC8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01974E4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A5E04 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A60A0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0047564 (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ValidateHbwnd @ 0x1C011C2C0 (ValidateHbwnd.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C01836E8 (INPUTDEST_FROM_BASEWND.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__m128i *__fastcall CInputDest::CInputDest(__m128i *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __m128i *v13; // rax
  __m128i v14; // xmm7
  __m128i v15; // xmm8
  __m128i v16; // xmm9
  __m128i v17; // xmm10
  __m128i v18; // xmm11
  __m128i v19; // xmm6
  __m128i v20; // xmm12
  __int64 v21; // rax
  __m128i *result; // rax
  __int128 v23; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D8h]
  _OWORD v25[14]; // [rsp+38h] [rbp-D0h] BYREF

  memset(a1, 0, 0x70uLL);
  a1[7].m128i_i8[0] = 0;
  memset(v25, 0, 0x70uLL);
  if ( a3 == 2 )
  {
    if ( a4 == 2 )
    {
      v12 = ValidateHwndEx(a2, 1, 0);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      v12 = HMValidateHandleNoSecure(a2, 1);
    }
    v13 = (__m128i *)INPUTDEST_FROM_PWND(v25, v12);
LABEL_8:
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = v13[4];
    v19 = v13[5];
    v20 = v13[6];
    goto LABEL_17;
  }
  if ( a3 == 1 )
  {
    if ( a4 == 2 )
    {
      v21 = ValidateHbwnd(a2, v8);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      v21 = HMValidateHandleNoSecure(a2, 23);
    }
    v13 = (__m128i *)INPUTDEST_FROM_BASEWND(v25, v21);
    goto LABEL_8;
  }
  v20 = (__m128i)v25[6];
  v19 = (__m128i)v25[5];
  v18 = (__m128i)v25[4];
  v17 = (__m128i)v25[3];
  v16 = (__m128i)v25[2];
  v15 = (__m128i)v25[1];
  v14 = (__m128i)v25[0];
LABEL_17:
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v19, 12)) )
  {
    if ( !v19.m128i_i64[0] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    v24 = v19.m128i_i64[0];
    *((_QWORD *)&v23 + 1) = a1 + 5;
    HMAssignmentLock((__int64 **)&v23 + 1);
  }
  result = a1;
  *a1 = v14;
  a1[1] = v15;
  a1[2] = v16;
  a1[3] = v17;
  a1[4] = v18;
  a1[5] = v19;
  a1[6] = v20;
  return result;
}
