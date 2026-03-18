/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EFD44
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01F0934 (_DelegateCapturePointers.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01EFFE4 (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01F0498 (WPP_RECORDER_SF_HL.c)
 *     WPP_RECORDER_SF_L @ 0x1C01F0574 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LqLL @ 0x1C01F0818 (WPP_RECORDER_SF_LqLL.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3, int a4)
{
  struct tagWND *v4; // r15
  int v6; // esi
  __int64 *v8; // rbx
  int v9; // eax
  int v10; // r9d
  int v11; // r12d
  __int64 *v12; // r13
  unsigned __int64 v13; // r14
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  int v18; // edx
  __int64 *v19; // rcx
  char FrameIdFromPointerMsgId; // al
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+20h] [rbp-58h]

  v4 = 0LL;
  v6 = a2;
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_HL((_DWORD)a1, a2, (_DWORD)a3, a4);
    v8 = (__int64 *)*((_QWORD *)a1 + 3);
    if ( v6 )
      goto LABEL_15;
    if ( !v8 )
      goto LABEL_13;
    do
    {
      if ( (*((_DWORD *)v8 + 25) & 0x40) != 0 )
      {
        v9 = *((_DWORD *)v8 + 6);
        if ( (v9 == 582 || v9 == 585)
          && *((_WORD *)v8 + 16) == *(_WORD *)a3
          && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v8[5]) == *((_DWORD *)a3 + 1) )
        {
          break;
        }
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 );
    if ( v8 )
    {
LABEL_15:
      v11 = 0;
      if ( v8 )
      {
        while ( !v11 )
        {
          v12 = (__int64 *)*v8;
          if ( IsPointerInputMessage(*((_DWORD *)v8 + 6)) && (*((_DWORD *)v8 + 25) & 0x40) != 0 )
          {
            v13 = v8[5];
            if ( *((_WORD *)v8 + 16) == *(_WORD *)a3 )
            {
              if ( (_DWORD)a1 == 582
                && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v8[5]) != *((_DWORD *)a3 + 1) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v13);
                  WPP_RECORDER_SF_L(v22, v21, v23, v24, v25, FrameIdFromPointerMsgId);
                }
                return;
              }
              if ( *((_DWORD *)v8 + 6) == 581 && (*((_BYTE *)v8 + 34) & 4) == 0 )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return;
                v10 = 15;
                goto LABEL_43;
              }
              if ( *((_DWORD *)a3 + 25) == 2 )
                v4 = (struct tagWND *)*((_QWORD *)a3 + 11);
              if ( GetPwndFromPointerMsgId(v13) != v4 )
                goto LABEL_36;
              v17 = *((_DWORD *)v8 + 6);
              if ( v17 == 583 )
                v11 = 1;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_LqLL(v17, v14, v15, v16, v25, v17, v8[2], *((_DWORD *)v8 + 8), *((_DWORD *)v8 + 10));
              DelQEntry((unsigned int **)a1 + 3, (unsigned int *)v8, 1);
              v19 = (__int64 *)*((_QWORD *)a1 + 10);
              if ( v19 == v8 )
              {
                v4 = 0LL;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LOBYTE(v18) = 5;
                    WPP_RECORDER_SF_qq(
                      (_DWORD)v19,
                      v18,
                      18,
                      17,
                      (__int64)&WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
                      (char)a1,
                      *((_QWORD *)a1 + 10));
                  }
                }
                *((_QWORD *)a1 + 10) = 0LL;
              }
              else
              {
LABEL_36:
                v4 = 0LL;
              }
            }
          }
          v8 = v12;
          if ( !v12 )
            return;
        }
      }
    }
    else
    {
LABEL_13:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 13;
LABEL_43:
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_((_DWORD)a1, a2, 19, v10, (__int64)&WPP_b43beeb5a22232e36856aa8311da4939_Traceguids);
      }
    }
  }
}
