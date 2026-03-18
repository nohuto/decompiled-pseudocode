/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C0055CC0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsPointerParentNotify @ 0x1C00D7118 (IsPointerParentNotify.c)
 *     DoesMsgNeedDPITransform @ 0x1C0101CDC (DoesMsgNeedDPITransform.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int16 *v6; // rbx
  int v7; // r15d
  unsigned int v8; // r12d
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v20; // ecx
  int v21; // eax
  __int64 v23; // rdi
  unsigned int v24; // esi
  int v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rdi
  unsigned int v30; // esi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v35; // zf
  int v36; // esi
  int v37; // esi
  int v38; // eax
  __int64 v39; // rbx
  _QWORD *v40; // r15
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // [rsp+28h] [rbp-51h] BYREF
  __int64 v46; // [rsp+30h] [rbp-49h] BYREF
  __int16 *v47; // [rsp+38h] [rbp-41h]
  _QWORD *v48; // [rsp+40h] [rbp-39h]
  int v49; // [rsp+48h] [rbp-31h] BYREF
  int v50; // [rsp+4Ch] [rbp-2Dh]
  int v51; // [rsp+50h] [rbp-29h]
  __int64 v52; // [rsp+58h] [rbp-21h] BYREF
  __int128 v53; // [rsp+60h] [rbp-19h] BYREF
  __int128 v54; // [rsp+70h] [rbp-9h] BYREF

  v6 = a4;
  v7 = a2;
  v47 = a4;
  v8 = a1;
  v48 = a3;
  v51 = a2;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( a6 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 18;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
          v35 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
          v6 = v47,
          v35) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v18 = *ThreadWin32Thread;
        if ( !*ThreadWin32Thread )
          goto LABEL_13;
        if ( *(_QWORD *)(v18 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v18 + 340) )
        {
          v11 = *(_DWORD *)(v18 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16, a2, v17);
          if ( CurrentProcessWin32Process )
            v11 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v18 + 328) & 4) != 0 && (v11 & 0xF) == 2 )
        {
          v6 = v47;
          if ( (v11 & 0xF0) == 0x20 )
            v11 |= 0x20000000u;
        }
        else
        {
LABEL_13:
          v6 = v47;
        }
      }
    }
    v7 = v51;
  }
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
  {
    v20 = (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0;
    v21 = (v11 & 0xF) == 2 && (v11 & 0x20000000) != 0;
    if ( v20 == v21 )
      return 0LL;
  }
  v23 = *(_QWORD *)v6;
  if ( !(unsigned int)DoesMsgNeedDPITransform(v8, a2, *(_QWORD *)v6) )
    return 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  if ( !v7 || v8 < 0x220 && v8 >= 0x84 )
    goto LABEL_30;
  if ( v8 == 834 )
    goto LABEL_37;
  if ( v8 > 0x220 )
  {
    if ( v8 == 833 )
    {
LABEL_37:
      v24 = 1;
      goto LABEL_31;
    }
    if ( v8 != 643 )
    {
LABEL_30:
      v24 = 0;
      goto LABEL_31;
    }
    v40 = v48;
    v41 = *v48;
    if ( (unsigned __int64)(*v48 - 7LL) <= 1 )
    {
      v42 = TransformPointBetweenCoordinateSpaces(v23 + 8, v23 + 8, a5, a6);
      v43 = v23 + 16;
    }
    else
    {
      if ( (unsigned __int64)(v41 - 11) > 1 )
      {
        if ( v41 == 16 )
        {
          LODWORD(v45) = (__int16)v23;
          HIDWORD(v45) = v6[1];
          v24 = TransformPointBetweenCoordinateSpaces(&v46, &v45, a5, a6);
          *v6 = v46;
          v6[1] = WORD2(v46);
        }
        else
        {
          v24 = 0;
        }
LABEL_70:
        switch ( v8 )
        {
          case 0x20Au:
          case 0x20Eu:
          case 0x241u:
          case 0x242u:
          case 0x243u:
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x249u:
          case 0x24Au:
          case 0x24Eu:
          case 0x24Fu:
          case 0x251u:
          case 0x252u:
          case 0x2A0u:
          case 0x2F2u:
          case 0x2F3u:
          case 0x2F4u:
            goto LABEL_32;
          case 0x20Bu:
          case 0x20Cu:
          case 0x20Du:
          case 0x2A1u:
            goto LABEL_95;
          case 0x210u:
            goto LABEL_89;
          default:
            return v24;
        }
        return v24;
      }
      v42 = TransformPointBetweenCoordinateSpaces(v23 + 4, v23 + 4, a5, a6);
      v43 = v23 + 12;
    }
    v24 = TransformRectBetweenCoordinateSpaces(v43, v43, a5, a6) | v42;
    goto LABEL_70;
  }
  if ( v8 == 544 )
  {
    *(_QWORD *)&v54 = *(_QWORD *)(v23 + 24);
    DWORD2(v54) = *(_DWORD *)(v23 + 32) + *(_DWORD *)(v23 + 24);
    HIDWORD(v54) = *(_DWORD *)(v23 + 36) + *(_DWORD *)(v23 + 28);
    v24 = TransformRectBetweenCoordinateSpaces(&v53, &v54, a5, a6);
    *(_QWORD *)(v23 + 24) = v53;
    *(_DWORD *)(v23 + 32) = DWORD2(v53) - v53;
    *(_DWORD *)(v23 + 36) = HIDWORD(v53) - DWORD1(v53);
LABEL_69:
    v40 = v48;
    goto LABEL_70;
  }
  if ( v8 < 0x46 )
    goto LABEL_30;
  if ( v8 > 0x47 )
  {
    if ( v8 == 83 )
      return (unsigned int)TransformPointBetweenCoordinateSpaces(v23 + 32, v23 + 32, a5, a6);
    if ( v8 == 131 )
    {
      if ( *v48 )
      {
        v36 = TransformRectBetweenCoordinateSpaces(v23, v23, a5, a6);
        v37 = TransformRectBetweenCoordinateSpaces(v23 + 16, v23 + 16, a5, a6) | v36;
        v38 = TransformRectBetweenCoordinateSpaces(v23 + 32, v23 + 32, a5, a6);
        v39 = *(_QWORD *)(v23 + 48);
        *(_QWORD *)&v54 = *(_QWORD *)(v39 + 16);
        DWORD2(v54) = *(_DWORD *)(v39 + 24) + *(_DWORD *)(v39 + 16);
        HIDWORD(v54) = *(_DWORD *)(v39 + 28) + *(_DWORD *)(v39 + 20);
        v24 = TransformRectBetweenCoordinateSpaces(&v53, &v54, a5, a6) | v38 | v37;
        *(_QWORD *)(v39 + 16) = v53;
        *(_DWORD *)(v39 + 24) = DWORD2(v53) - v53;
        *(_DWORD *)(v39 + 28) = HIDWORD(v53) - DWORD1(v53);
      }
      else
      {
        return (unsigned int)TransformRectBetweenCoordinateSpaces(v23, v23, a5, a6);
      }
      return v24;
    }
    goto LABEL_30;
  }
  *(_QWORD *)&v54 = *(_QWORD *)(v23 + 16);
  DWORD2(v54) = *(_DWORD *)(v23 + 24) + *(_DWORD *)(v23 + 16);
  HIDWORD(v54) = *(_DWORD *)(v23 + 28) + *(_DWORD *)(v23 + 20);
  v24 = TransformRectBetweenCoordinateSpaces(&v53, &v54, a5, a6);
  *(_QWORD *)(v23 + 16) = v53;
  *(_DWORD *)(v23 + 24) = DWORD2(v53) - v53;
  *(_DWORD *)(v23 + 28) = HIDWORD(v53) - DWORD1(v53);
LABEL_31:
  if ( v8 == 132 )
    goto LABEL_32;
  if ( v8 > 0x33F )
    return v24;
  if ( v8 <= 0x209 )
  {
    if ( v8 < 0x200 )
    {
      if ( v8 > 0xA9 )
      {
        if ( v8 < 0xAB )
          return v24;
        if ( v8 > 0xAD )
        {
          if ( v8 != 274 || !v6[1] )
            return v24;
          v40 = v48;
LABEL_89:
          if ( (unsigned int)IsPointerParentNotify(v8, *v40) )
            return v24;
        }
        goto LABEL_32;
      }
      if ( v8 >= 0xA0 )
      {
LABEL_32:
        LODWORD(v45) = *v6;
        HIDWORD(v45) = (__int16)HIWORD(*(_DWORD *)v6);
        v24 = TransformPointBetweenCoordinateSpaces(&v46, &v45, a5, a6);
        v25 = (WORD2(v46) << 16) | (unsigned __int16)v46;
LABEL_33:
        *(_QWORD *)v6 = v25;
        return v24;
      }
      if ( v8 != 3 )
      {
        if ( v8 != 123 )
          return v24;
        goto LABEL_32;
      }
    }
LABEL_95:
    if ( !a5 )
      return v24;
    v44 = *(_QWORD *)(a5 + 40);
    LODWORD(v45) = *v6;
    HIDWORD(v45) = (__int16)HIWORD(*(_DWORD *)v6);
    v52 = 0LL;
    v49 = *(_DWORD *)(v44 + 104);
    v50 = *(_DWORD *)(v44 + 108);
    TransformPointBetweenCoordinateSpaces(&v52, &v49, a6, a5);
    LODWORD(v45) = v52 + v45;
    HIDWORD(v45) += HIDWORD(v52);
    v24 = TransformPointBetweenCoordinateSpaces(&v46, &v45, a5, a6);
    v25 = ((unsigned __int16)(WORD2(v46) - v50) << 16) | (unsigned __int16)(v46 - v49);
    goto LABEL_33;
  }
  if ( v8 <= 0x313 )
  {
    if ( v8 == 787 )
    {
      if ( *(_QWORD *)v6 == 0xFFFFFFFFLL )
        return v24;
      goto LABEL_32;
    }
    goto LABEL_69;
  }
  if ( v8 != 831 )
    return v24;
  if ( !a6 )
    return v24;
  v26 = *(_QWORD *)v6;
  if ( !v26 )
    return v24;
  v27 = TransformRectBetweenCoordinateSpaces(v26 + 4, v26 + 4, a5, a6);
  v28 = v26 + 44;
  v29 = 6LL;
  v30 = v27;
  do
  {
    v30 |= TransformRectBetweenCoordinateSpaces(v28, v28, a5, a6);
    v28 += 16LL;
    --v29;
  }
  while ( v29 );
  return v30;
}
