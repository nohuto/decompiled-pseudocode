/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C002CD00
 * Callers:
 *     xxxKeyEventEx @ 0x1C002CAE0 (xxxKeyEventEx.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012E540 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C0021E30 (UpdateKeyLights.c)
 *     UpdateAsyncKeyState @ 0x1C002D190 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C002D394 (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C002D488 (ApiSetEditionHandleAltTabCancel.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C002D59C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C002D944 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C002E210 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C002E3BC (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C00A3874 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleAltTab @ 0x1C00B3CE4 (ApiSetEditionHandleAltTab.c)
 *     ApiSetEditionIsSAS @ 0x1C00C73A4 (ApiSetEditionIsSAS.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C019CCA4 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01AA958 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     PtiKbdFromQ @ 0x1C01ABC08 (PtiKbdFromQ.c)
 */

__int64 __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int16 a1,
        unsigned __int16 a2,
        int a3,
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
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  int v25; // edx
  int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  int v32; // ecx
  __int16 v33; // di
  __int16 v34; // dx
  __int16 v35; // r13
  __int64 v36; // r8
  __int64 result; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  __int16 ActiveHKL; // ax
  unsigned __int16 v43; // [rsp+82h] [rbp-67h]
  unsigned int v44; // [rsp+84h] [rbp-65h]
  int v46; // [rsp+8Ch] [rbp-5Dh]
  int v47; // [rsp+90h] [rbp-59h] BYREF
  __int64 v48; // [rsp+98h] [rbp-51h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-49h]
  __int64 v50; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-39h]
  __int64 v52; // [rsp+B8h] [rbp-31h]
  __int64 v53; // [rsp+C0h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+C8h] [rbp-21h] BYREF

  v12 = gptiCurrent;
  v51 = a5;
  v52 = a6;
  v53 = a12;
  v14 = a1 & 0x8000;
  v49 = a4;
  v43 = a1 & 0x100;
  v47 = 0;
  v46 = (unsigned __int16)((v14 != 0) + 256);
  if ( a11 )
    v15 = *a11;
  else
    v15 = 0LL;
  v44 = 0;
  v50 = v15;
  v48 = -1LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v17 = *(_QWORD *)a10;
      v44 = *(_DWORD *)(a10 + 8);
    }
    else
    {
      v16 = *((_QWORD *)gptiCurrent + 53);
      v17 = *(_QWORD *)(v16 + 880);
      v44 = *(_DWORD *)(v16 + 12) >> 31;
    }
  }
  else
  {
    v17 = v48;
  }
  v19 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  v22 = 4LL;
  if ( (byte_1C0249844 & 0x10) != 0 && (byte_1C0249844 & 4) == 0 )
    v46 = v20 + 4;
  v23 = gptiBlockInput;
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v12 )
  {
    LODWORD(v48) = 0;
    LOBYTE(v22) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v22, &v48) )
    {
      v38 = 2LL;
      return InputTraceLogging::Keyboard::DropInput(v38);
    }
    v23 = 0LL;
    gptiBlockInput = 0LL;
  }
  if ( (_BYTE)v19 != (_BYTE)a1 )
  {
    LOBYTE(v21) = a1 ^ 1;
    if ( !v14
      || (v18 = (unsigned int)(1 << (2 * (v21 & 3))),
          ((unsigned __int8)v18 & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v21 >> 2))) == 0) )
    {
      if ( !v23 || (struct tagTHREADINFO *)v23 == v12 )
      {
        LOBYTE(v18) = v19;
        LOBYTE(v23) = v14 != 0;
        UpdateAsyncKeyState(gpqForeground, v18, v23, v21);
      }
    }
  }
  LOBYTE(v18) = a1;
  LOBYTE(v23) = v14 != 0;
  UpdateAsyncKeyState(gpqForeground, v18, v23, v21);
  if ( gfEnableHexNumpad && gpqForeground )
  {
    v39 = ((__int64 (*)(void))PtiKbdFromQ)();
    v40 = (int)qword_1C024FF00;
    if ( qword_1C024FF00 )
      v40 = qword_1C024FF00(v39);
    if ( !v40 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
      LowLevelHexNumpad(a2, v19, v14, v43);
  }
  if ( !v14 )
  {
    if ( (_BYTE)v19 == 20
      || (unsigned __int8)(v19 + 112) <= 1u
      || (_BYTE)v19 == 21 && (ActiveHKL = ApiSetEditionGetActiveHKL(), (ActiveHKL & 0x3FF) == 0x11) )
    {
      UpdateKeyLights(a8);
      if ( qword_1C0250028 )
        qword_1C0250028(2147483654LL, 0LL, v19, 0LL, 0);
    }
  }
  if ( gptiForeground )
    v24 = *((_DWORD *)gptiForeground + 219);
  else
    v24 = 0;
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v17, v44, (_DWORD)v12, v14, v19, a8, v24) )
  {
    v38 = 4LL;
    return InputTraceLogging::Keyboard::DropInput(v38);
  }
  LOBYTE(v25) = a1;
  LOBYTE(v26) = v19;
  if ( !(unsigned int)ApiSetEditionDoHotKeys(v26, v25, v14, v24, (__int64)&v50, (__int64)&v47) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v12, v17, v44) )
    {
      if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) == 0
        && ((a1 & 0x1000) == 0 || !a8 ? (v31 = v52) : (v31 = 0LL),
            LOBYTE(v30) = a1,
            LOBYTE(v29) = v19,
            (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v29, v30, v46, v31, a2, a1, v14, v51)) )
      {
        v38 = 5LL;
      }
      else
      {
        if ( !v47 )
        {
          v32 = 4;
          if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || (_BYTE)v19 == 23 )
          {
            v33 = (v14 != 0) + 256;
            if ( (_BYTE)v19 == 18 )
            {
              if ( v14 )
              {
                if ( dword_1C024B058 )
                  v33 = (v14 != 0) + 260;
                LOBYTE(v32) = 18;
                v35 = a2;
                ApiSetEditionHandleAltTab(v32, a2, v43, a3, v49, (__int64)&v50, v51, v33);
                v34 = v43;
                goto LABEL_25;
              }
              gppiLockSFW = 0LL;
            }
            v34 = v43;
          }
          else
          {
            v33 = (v14 != 0) + 260;
            v34 = v43 | 0x2000;
            if ( (_BYTE)v19 == 18 )
            {
              v35 = a2;
              dword_1C024B058 = 1;
              if ( !v14 )
                gppiLockSFW = 0LL;
              goto LABEL_25;
            }
            dword_1C024B058 = 0;
          }
          v35 = a2;
LABEL_25:
          if ( a8 && HIDWORD(v50) == 4 && v52 )
            v36 = *(unsigned __int16 *)(v52 + 6);
          else
            v36 = v49;
          return ApiSetEditionHandleAndPostKeyEvent(
                   a8,
                   v17,
                   v44,
                   v14,
                   v19,
                   v24,
                   v35,
                   a1,
                   v34,
                   a7,
                   (__int64)&v50,
                   a3,
                   v51,
                   v36,
                   v33,
                   v53);
        }
        v38 = 6LL;
      }
    }
    else
    {
      v38 = 0LL;
    }
    return InputTraceLogging::Keyboard::DropInput(v38);
  }
  result = 4LL;
  if ( (unsigned int)dword_1C0244A70 > 4 )
  {
    result = tlgKeywordOn(&dword_1C0244A70, 0x4000LL, v27, v28);
    if ( (_BYTE)result )
      return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0218CD4, 0, 0, 2u, &v54);
  }
  return result;
}
