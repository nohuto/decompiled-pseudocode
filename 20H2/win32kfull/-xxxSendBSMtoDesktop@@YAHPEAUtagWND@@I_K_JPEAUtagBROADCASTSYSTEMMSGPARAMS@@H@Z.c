/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00197A8
 * Callers:
 *     xxxSendMessageBSM @ 0x1C0019630 (xxxSendMessageBSM.c)
 * Callees:
 *     _PostTransformableMessageIL @ 0x1C001A1A0 (_PostTransformableMessageIL.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C001B338 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     CanForceForeground @ 0x1C003BA20 (CanForceForeground.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  __int64 v7; // r15
  unsigned int v9; // esi
  int v10; // eax
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BOOL8 v15; // r12
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned int v23; // ecx
  int v24; // r13d
  BOOL v25; // r15d
  int v26; // esi
  __m128i *v27; // r9
  bool v28; // cf
  int v29; // ecx
  __int64 v30; // rdx
  void *v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rcx
  __m128i v34; // xmm0
  PETHREAD *v35; // rcx
  _QWORD *v36; // rcx
  bool v37; // zf
  void *v38; // rax
  int v39; // [rsp+50h] [rbp-99h]
  __int64 v40; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-89h]
  int v42; // [rsp+68h] [rbp-81h]
  int v43; // [rsp+6Ch] [rbp-7Dh]
  HANDLE InputBuffer; // [rsp+70h] [rbp-79h] BYREF
  void *Handle; // [rsp+78h] [rbp-71h] BYREF
  __int64 v46; // [rsp+80h] [rbp-69h] BYREF
  unsigned __int64 LowLimit; // [rsp+88h] [rbp-61h] BYREF
  int v48[2]; // [rsp+90h] [rbp-59h]
  __int64 v49; // [rsp+98h] [rbp-51h]
  __int64 v50; // [rsp+A0h] [rbp-49h]
  _QWORD *v51; // [rsp+A8h] [rbp-41h]
  __int64 v52; // [rsp+B0h] [rbp-39h]
  __int128 v53; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-21h]
  __m128i v55; // [rsp+D0h] [rbp-19h] BYREF
  int v56; // [rsp+E0h] [rbp-9h]

  v43 = 0;
  v54 = 0LL;
  v7 = a4;
  *(_QWORD *)v48 = a4;
  v41 = a3;
  v53 = 0LL;
  v9 = 1;
  v39 = 1;
  v50 = gptiCurrent;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v10 = 1;
    v49 = 1LL;
  }
  else
  {
    v10 = 0;
    v49 = 0LL;
  }
  v56 = 0;
  v55 = 0LL;
  if ( v10 )
    UserSetLastError(87LL);
  if ( a1 )
  {
    v11 = a6;
    if ( !a6 && (a2 == 21 || a2 == 26 || a2 == 29 || a2 == 295 || a2 == 794) )
    {
      v11 = 1;
      a6 = 1;
    }
    v52 = BuildHwndList(a1[14]);
    if ( v52 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80
        && a1[3] == (struct tagWND *)grpdeskRitInput
        && ((*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0
         || (unsigned int)CanForceForeground(*(_QWORD *)(gptiCurrent + 424LL))) )
      {
        CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      }
      v15 = 0LL;
      if ( a2 != 537 || v41 != 0x8000 && v41 != 32772 || (v15 = 0LL, *(_DWORD *)(v7 + 4) != 2) )
      {
LABEL_17:
        v51 = (_QWORD *)(v52 + 32);
        v16 = *(_QWORD *)(v52 + 32);
        if ( v16 == 1 )
        {
LABEL_18:
          FreeHwndList(v52);
          return v9;
        }
        while ( 1 )
        {
          v42 = 0;
          LOBYTE(v12) = 1;
          v18 = HMValidateHandleNoSecure(v16, v12);
          v21 = v18;
          if ( !v18 )
            goto LABEL_46;
          v12 = *((unsigned int *)a5 + 1);
          if ( (v12 & 2) != 0 && *(_QWORD *)(*(_QWORD *)(v18 + 16) + 432LL) == *(_QWORD *)(v50 + 432) )
            goto LABEL_46;
          if ( (v12 & 0x400) != 0 )
          {
            v36 = *(_QWORD **)(v18 + 16);
            v40 = 0LL;
            if ( (int)GetProcessLuid(*v36, &v40, v19, v20) < 0 || *((_QWORD *)a5 + 4) != v40 )
              goto LABEL_46;
          }
          if ( v15 )
          {
            v33 = *(_QWORD **)(v21 + 16);
            v46 = 0LL;
            if ( (int)GetProcessLuid(*v33, &v46, v19, v20) < 0 )
              goto LABEL_46;
            if ( __PAIR64__(luidSystem[1], luidSystem[0]) != v46 )
              v42 = 1;
          }
          v22 = *(_QWORD *)(v21 + 40);
          if ( (*(_WORD *)(v22 + 42) & 0x2FFF) != 0x29C )
          {
            v12 = **(unsigned __int16 **)(*(_QWORD *)(v21 + 136) + 8LL);
            if ( *(_WORD *)(gpsi + 908LL) != (_WORD)v12
              && gaOleMainThreadWndClass != (_WORD)v12
              && (!v49 || (*(_BYTE *)(v22 + 21) & 2) == 0) )
            {
              *(_QWORD *)&v53 = *(_QWORD *)(v50 + 416);
              *(_QWORD *)(v50 + 416) = &v53;
              *((_QWORD *)&v53 + 1) = v21;
              HMLockObject(v21);
              v23 = *((_DWORD *)a5 + 1);
              if ( (v23 & 0x10) != 0 )
              {
                PostTransformableMessageIL((struct tagWND *)v21, a2, v41, v7, v11);
              }
              else if ( (v23 & 0x100) != 0 )
              {
                xxxSendNotifyMessage(v21, a2, v41, v7, v11);
              }
              else if ( (v23 & 0x20000000) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v21, a2, v41, v7, v11, 1);
              }
              else
              {
                LowLimit = 0LL;
                InputBuffer = 0LL;
                v24 = v23 & 8;
                LODWORD(Handle) = v23 & 0x20;
                v25 = a2 == 536 && v41 == 4;
                if ( (v23 & 8) != 0 )
                  v26 = v25 ? 2000 : 5000;
                else
                  v26 = 0;
                if ( v25 )
                {
                  InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v21 + 16));
                  ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                  v23 = *((_DWORD *)a5 + 1);
                }
                v27 = &v55;
                v28 = v24 != 0;
                v11 = a6;
                v29 = (v23 >> 3) & 8;
                if ( !v42 )
                  LODWORD(v27) = v48[0];
                if ( xxxSendTransformableMessageTimeout(
                       v21,
                       a2,
                       v41,
                       (int)v27,
                       v29 | (v28 ? 2 : 0),
                       v26,
                       (unsigned __int64)&LowLimit,
                       a6,
                       1) )
                {
                  if ( (*((_DWORD *)a5 + 1) & 1) == 0 )
                  {
                    v9 = v39;
                    goto LABEL_41;
                  }
                  v9 = 0;
                  if ( a2 == 17 )
                    v37 = LowLimit == 0;
                  else
                    v37 = LowLimit == 1112363332;
                  LOBYTE(v9) = !v37;
                }
                else
                {
                  v9 = (unsigned int)Handle;
                }
                v39 = v9;
LABEL_41:
                if ( v25 )
                {
                  v35 = *(PETHREAD **)(v21 + 16);
                  InputBuffer = 0LL;
                  InputBuffer = PsGetThreadProcessId(*v35);
                  ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                }
                if ( !v9 )
                {
                  v37 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                  *((_QWORD *)a5 + 3) = *(_QWORD *)v21;
                  if ( !v37 )
                  {
                    v31 = *(void **)(v21 + 24);
                    v38 = 0LL;
                    Handle = 0LL;
                    if ( v31 )
                    {
                      ObOpenObjectByPointer(v31, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                      v38 = Handle;
                    }
                    *((_QWORD *)a5 + 2) = v38;
                  }
                  v43 = 1;
                }
                v7 = *(_QWORD *)v48;
              }
              ThreadUnlock1(v31, v30, v32);
              if ( v43 )
                goto LABEL_18;
            }
          }
LABEL_46:
          v16 = *++v51;
          if ( *v51 == 1LL )
            goto LABEL_18;
        }
      }
      if ( (*(_DWORD *)(v7 + 12) & 0x40000000) == 0 )
      {
        v34 = *(__m128i *)v7;
        v56 = *(_DWORD *)(v7 + 16);
        v55 = v34;
        v37 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v55.m128i_i32[3] = _mm_srli_si128(v34, 8).m128i_i32[1] | 0x40000000;
        if ( v37 )
        {
          v40 = 0LL;
          GetProcessLuid(0LL, &v40, v13, v14);
          v15 = v40 == __PAIR64__(luidSystem[1], luidSystem[0]);
        }
        goto LABEL_17;
      }
    }
  }
  return 0LL;
}
