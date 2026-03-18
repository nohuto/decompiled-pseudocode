/*
 * XREFs of ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC
 * Callers:
 *     __DelegateCapturePointers@8 @ 0x15A503 (__DelegateCapturePointers@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?GetPwndFromPointerMsgId@@YGPAUtagWND@@K@Z @ 0x159F20 (-GetPwndFromPointerMsgId@@YGPAUtagWND@@K@Z.c)
 *     _WPP_RECORDER_SF_HL@28 @ 0x15A2BB (_WPP_RECORDER_SF_HL@28.c)
 *     _WPP_RECORDER_SF_L@24 @ 0x15A329 (_WPP_RECORDER_SF_L@24.c)
 *     _WPP_RECORDER_SF_LqLL@36 @ 0x15A481 (_WPP_RECORDER_SF_LqLL@36.c)
 */

void __userpurge DelegateDiscardMessages(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3@<esi>,
        struct tagQ *a4,
        int a5,
        struct tagDELEGATEPOINTERMAP *a6)
{
  int *v8; // esi
  int v9; // eax
  int v10; // ebx
  struct tagWND *v11; // edx
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  char FrameIdFromPointerMsgId; // al
  int v18; // [esp-24h] [ebp-38h]
  int v19; // [esp-20h] [ebp-34h]
  int v20; // [esp-1Ch] [ebp-30h]
  int v21; // [esp-18h] [ebp-2Ch]
  int v22; // [esp-14h] [ebp-28h]
  int v23; // [esp-10h] [ebp-24h]
  unsigned int v24; // [esp-8h] [ebp-1Ch]
  int *v25; // [esp+4h] [ebp-10h]
  _DWORD *v26; // [esp+8h] [ebp-Ch]
  struct tagWND *v27; // [esp+Ch] [ebp-8h]
  int v28; // [esp+10h] [ebp-4h]
  int v29; // [esp+1Ch] [ebp+8h]

  v28 = a2;
  if ( *(_DWORD *)(a2 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_HL(v21, v22, v23, *(_WORD *)a4, *((_DWORD *)a4 + 1));
      a2 = v28;
    }
    v26 = (_DWORD *)(a2 + 12);
    v24 = a3;
    v8 = *(int **)(a2 + 12);
    if ( a1 )
      goto LABEL_15;
    if ( !v8 )
      goto LABEL_13;
    do
    {
      if ( (v8[16] & 0x40) != 0 )
      {
        v9 = v8[3];
        if ( (v9 == 582 || v9 == 585)
          && *((_WORD *)v8 + 8) == *(_WORD *)a4
          && CTouchProcessor::GetFrameIdFromPointerMsgId(_gpTouchProcessor, v8[5]) == *((_DWORD *)a4 + 1) )
        {
          break;
        }
      }
      v8 = (int *)*v8;
    }
    while ( v8 );
    if ( v8 )
    {
LABEL_15:
      v10 = 0;
      v29 = 0;
      if ( v8 )
      {
        while ( !v10 )
        {
          v25 = (int *)*v8;
          if ( IsPointerInputMessage(v8[3]) && (v8[16] & 0x40) != 0 )
          {
            v13 = v8[5];
            if ( *((_WORD *)v8 + 8) == *(_WORD *)a4 )
            {
              if ( v12 == 582 )
              {
                if ( CTouchProcessor::GetFrameIdFromPointerMsgId(_gpTouchProcessor, v8[5]) != *((_DWORD *)a4 + 1) )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(_gpTouchProcessor, v13);
                    WPP_RECORDER_SF_L(v21, v22, v23, FrameIdFromPointerMsgId);
                  }
                  return;
                }
                v11 = 0;
              }
              if ( v8[3] == 581 && (*((_BYTE *)v8 + 18) & 4) == 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_(19, 15, &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids);
                return;
              }
              if ( *((_DWORD *)a4 + 24) == 2 )
                v27 = (struct tagWND *)*((_DWORD *)a4 + 22);
              else
                v27 = v11;
              if ( GetPwndFromPointerMsgId(v24) == v27 )
              {
                v14 = v8[3];
                if ( v14 == 583 )
                {
                  v10 = 1;
                  v29 = 1;
                }
                else
                {
                  v10 = v29;
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_LqLL(v18, v19, v20, v14, v8[2], v8[4], v8[5]);
                DelQEntry(v26, v8, 1);
                v15 = v28;
                v16 = *(_DWORD *)(v28 + 44);
                if ( (int *)v16 == v8 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
                  {
                    LOBYTE(v16) = 5;
                    WPP_RECORDER_SF_qq(
                      v28,
                      v16,
                      0x12u,
                      17,
                      (int)&WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
                      v28,
                      *(_DWORD *)(v28 + 44));
                    v15 = v28;
                  }
                  *(_DWORD *)(v15 + 44) = 0;
                }
              }
              else
              {
                v10 = v29;
              }
            }
            else
            {
              v10 = v29;
            }
          }
          v8 = v25;
          if ( !v25 )
            return;
        }
      }
    }
    else
    {
LABEL_13:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(19, 13, &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids);
    }
  }
}
