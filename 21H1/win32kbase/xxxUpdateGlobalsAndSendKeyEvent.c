/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0060A60
 * Callers:
 *     xxxKeyEventEx @ 0x1C0060840 (xxxKeyEventEx.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0136880 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C0033184 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleAltTab @ 0x1C0045CB4 (ApiSetEditionHandleAltTab.c)
 *     UpdateKeyLights @ 0x1C004AC90 (UpdateKeyLights.c)
 *     UpdateAsyncKeyState @ 0x1C0060EF0 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C00610F4 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C00611E8 (ApiSetEditionHandleAltTabCancel.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C00612FC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C00616A4 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C0061F70 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C006211C (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ApiSetEditionIsSAS @ 0x1C00C7A14 (ApiSetEditionIsSAS.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A4F04 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01B2A38 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     PtiKbdFromQ @ 0x1C01B3CE8 (PtiKbdFromQ.c)
 */

NTSTATUS __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int16 a1,
        __int16 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  struct tagTHREADINFO *v12; // rdi
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // esi
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r15d
  int v24; // edx
  int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int16 v31; // di
  __int16 v32; // dx
  __int16 v33; // r13
  __int64 v34; // r8
  NTSTATUS result; // eax
  unsigned __int8 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  __int16 ActiveHKL; // ax
  unsigned __int16 v42; // [rsp+82h] [rbp-67h]
  unsigned int v43; // [rsp+84h] [rbp-65h]
  int v45; // [rsp+8Ch] [rbp-5Dh]
  int v46; // [rsp+90h] [rbp-59h] BYREF
  __int64 v47; // [rsp+98h] [rbp-51h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-49h]
  __int64 v49; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-39h]
  __int64 v51; // [rsp+B8h] [rbp-31h]
  __int64 v52; // [rsp+C0h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C8h] [rbp-21h] BYREF

  v12 = gptiCurrent;
  v50 = a5;
  v51 = a6;
  v52 = a12;
  v14 = a1 & 0x8000;
  v48 = a4;
  v42 = a1 & 0x100;
  v46 = 0;
  v45 = (unsigned __int16)((v14 != 0) + 256);
  if ( a11 )
    v15 = *a11;
  else
    v15 = 0LL;
  v43 = 0;
  v49 = v15;
  v47 = -1LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v17 = *(_QWORD *)a10;
      v43 = *(_DWORD *)(a10 + 8);
    }
    else
    {
      v16 = *((_QWORD *)gptiCurrent + 52);
      v17 = *(_QWORD *)(v16 + 880);
      v43 = *(_DWORD *)(v16 + 12) >> 31;
    }
  }
  else
  {
    v17 = v47;
  }
  v19 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  v21 = 4LL;
  if ( (byte_1C0251844 & 0x10) != 0 && (byte_1C0251844 & 4) == 0 )
    v45 = v20 + 4;
  v22 = gptiBlockInput;
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v12 )
  {
    LODWORD(v47) = 0;
    LOBYTE(v21) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v21, &v47) )
    {
      v37 = 2LL;
      return InputTraceLogging::Keyboard::DropInput(v37);
    }
    v22 = 0LL;
    gptiBlockInput = 0LL;
  }
  if ( (_BYTE)v19 != (_BYTE)a1 )
  {
    v36 = a1 ^ 1;
    if ( !v14
      || (v18 = (unsigned int)(1 << (2 * (v36 & 3))),
          ((unsigned __int8)v18 & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)v36 >> 2))) == 0) )
    {
      if ( !v22 || (struct tagTHREADINFO *)v22 == v12 )
      {
        LOBYTE(v18) = v19;
        LOBYTE(v22) = v14 != 0;
        UpdateAsyncKeyState(gpqForeground, v18, v22);
      }
    }
  }
  LOBYTE(v18) = a1;
  LOBYTE(v22) = v14 != 0;
  UpdateAsyncKeyState(gpqForeground, v18, v22);
  if ( gfEnableHexNumpad && gpqForeground )
  {
    v38 = ((__int64 (*)(void))PtiKbdFromQ)();
    v39 = (int)qword_1C0257EC0;
    if ( qword_1C0257EC0 )
      v39 = qword_1C0257EC0(v38);
    if ( !v39 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 416) + 832LL) + 100LL) & 0x20) == 0 )
      LowLevelHexNumpad(a2, v19, v14, v42);
  }
  if ( !v14 )
  {
    if ( (_BYTE)v19 == 20
      || (unsigned __int8)(v19 + 112) <= 1u
      || (_BYTE)v19 == 21 && (ActiveHKL = ApiSetEditionGetActiveHKL(), (ActiveHKL & 0x3FF) == 0x11) )
    {
      UpdateKeyLights(a8);
      if ( qword_1C0257FE8 )
        qword_1C0257FE8(2147483654LL, 0LL, v19, 0LL, 0);
    }
  }
  if ( gptiForeground )
    v23 = *((_DWORD *)gptiForeground + 217);
  else
    v23 = 0;
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v17, v43, (_DWORD)v12, v14, v19, a8, v23) )
  {
    v37 = 4LL;
    return InputTraceLogging::Keyboard::DropInput(v37);
  }
  LOBYTE(v24) = a1;
  LOBYTE(v25) = v19;
  if ( !(unsigned int)ApiSetEditionDoHotKeys(v25, v24, v14, v23, (__int64)&v49, (__int64)&v46) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v12, v17, v43) )
    {
      if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) == 0
        && ((a1 & 0x1000) == 0 || !a8 ? (v30 = v51) : (v30 = 0LL),
            LOBYTE(v29) = a1,
            LOBYTE(v28) = v19,
            (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v28, v29, v45, v30, a2, a1, v14, v50)) )
      {
        v37 = 5LL;
      }
      else
      {
        if ( !v46 )
        {
          if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || (_BYTE)v19 == 23 )
          {
            v31 = (v14 != 0) + 256;
            if ( (_BYTE)v19 == 18 )
            {
              if ( v14 )
              {
                if ( dword_1C0253058 )
                  v31 = (v14 != 0) + 260;
                v33 = a2;
                ApiSetEditionHandleAltTab(18, a2, v42, a3, v48, (__int64)&v49, v50, v31);
                v32 = v42;
                goto LABEL_25;
              }
              gppiLockSFW = 0LL;
            }
            v32 = v42;
          }
          else
          {
            v31 = (v14 != 0) + 260;
            v32 = v42 | 0x2000;
            if ( (_BYTE)v19 == 18 )
            {
              v33 = a2;
              dword_1C0253058 = 1;
              if ( !v14 )
                gppiLockSFW = 0LL;
              goto LABEL_25;
            }
            dword_1C0253058 = 0;
          }
          v33 = a2;
LABEL_25:
          if ( a8 && HIDWORD(v49) == 4 && v51 )
            v34 = *(unsigned __int16 *)(v51 + 6);
          else
            v34 = v48;
          return ApiSetEditionHandleAndPostKeyEvent(
                   a8,
                   v17,
                   v43,
                   v14,
                   v19,
                   v23,
                   v33,
                   a1,
                   v32,
                   a7,
                   (__int64)&v49,
                   a3,
                   v50,
                   v34,
                   v31,
                   v52);
        }
        v37 = 6LL;
      }
    }
    else
    {
      v37 = 0LL;
    }
    return InputTraceLogging::Keyboard::DropInput(v37);
  }
  result = 4;
  if ( (unsigned int)dword_1C024C960 > 4 )
  {
    result = tlgKeywordOn(&dword_1C024C960, 0x4000LL, v26, v27);
    if ( (_BYTE)result )
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_1C024C960,
               (unsigned __int8 *)dword_1C02206B3,
               0LL,
               0LL,
               2u,
               &v53);
  }
  return result;
}
