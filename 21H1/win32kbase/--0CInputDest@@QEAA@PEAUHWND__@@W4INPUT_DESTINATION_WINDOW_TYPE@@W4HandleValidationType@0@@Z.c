/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0
 * Callers:
 *     NtUserReportInertia @ 0x1C0003A80 (NtUserReportInertia.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C018E93C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C019CCB8 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019D1D4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019F5D4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01ABB64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01ABE00 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C005C7C0 (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C008BD80 (ValidateHwndEx.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ValidateHbwnd @ 0x1C0122780 (ValidateHbwnd.c)
 *     INPUTDEST_FROM_BASEWND @ 0x1C01893E8 (INPUTDEST_FROM_BASEWND.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__m128i *__fastcall CInputDest::CInputDest(__m128i *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128i *v11; // rax
  __m128i v12; // xmm7
  __m128i v13; // xmm8
  __m128i v14; // xmm9
  __m128i v15; // xmm10
  __m128i v16; // xmm11
  __m128i v17; // xmm6
  __m128i v18; // xmm12
  __int64 v19; // rax
  __m128i *result; // rax
  __int128 v21; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D8h]
  _OWORD v23[14]; // [rsp+38h] [rbp-D0h] BYREF

  memset(a1, 0, 0x70uLL);
  a1[7].m128i_i8[0] = 0;
  memset(v23, 0, 0x70uLL);
  if ( a3 == 2 )
  {
    if ( a4 == 2 )
    {
      v10 = ValidateHwndEx(a2, 1, 0);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      v10 = HMValidateHandleNoSecure(a2, 1);
    }
    v11 = (__m128i *)INPUTDEST_FROM_PWND(v23, v10);
LABEL_8:
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    v16 = v11[4];
    v17 = v11[5];
    v18 = v11[6];
    goto LABEL_17;
  }
  if ( a3 == 1 )
  {
    if ( a4 == 2 )
    {
      v19 = ValidateHbwnd(a2, v8);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      v19 = HMValidateHandleNoSecure(a2, 23);
    }
    v11 = (__m128i *)INPUTDEST_FROM_BASEWND(v23, v19);
    goto LABEL_8;
  }
  v18 = (__m128i)v23[6];
  v17 = (__m128i)v23[5];
  v16 = (__m128i)v23[4];
  v15 = (__m128i)v23[3];
  v14 = (__m128i)v23[2];
  v13 = (__m128i)v23[1];
  v12 = (__m128i)v23[0];
LABEL_17:
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v17, 12)) )
  {
    if ( !v17.m128i_i64[0] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v22 = v17.m128i_i64[0];
    *((_QWORD *)&v21 + 1) = a1 + 5;
    HMAssignmentLock((__int64 **)&v21 + 1);
  }
  result = a1;
  *a1 = v12;
  a1[1] = v13;
  a1[2] = v14;
  a1[3] = v15;
  a1[4] = v16;
  a1[5] = v17;
  a1[6] = v18;
  return result;
}
