/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1B2F74 (-GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AAEJPAF@Z @ 0x1B37FF (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AAEJPAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z @ 0x1B38DC (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AAEXPAUtagWND@@@Z @ 0x1B3AC8 (-Reset@InteractiveControlDefaultScroller@@AAEXPAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AAEJXZ @ 0x1B3DBA (-UpdateBallistics@InteractiveControlDefaultScroller@@AAEJXZ.c)
 *     ?UpdateRotation@InteractiveControlDefaultScroller@@AAEJHPAH@Z @ 0x1B3E4B (-UpdateRotation@InteractiveControlDefaultScroller@@AAEJHPAH@Z.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AAEJPAH@Z @ 0x1B3E87 (-UpdateTime@InteractiveControlDefaultScroller@@AAEJPAH@Z.c)
 *     ?UpdateWindow@InteractiveControlDefaultScroller@@AAEJPAPAUtagWND@@@Z @ 0x1B3F0A (-UpdateWindow@InteractiveControlDefaultScroller@@AAEJPAPAUtagWND@@@Z.c)
 */

int __thiscall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *this,
        int a2,
        int a3)
{
  int v4; // eax
  int updated; // esi
  __int16 v7[2]; // [esp+10h] [ebp-10h] BYREF
  int v8; // [esp+14h] [ebp-Ch] BYREF
  int v9; // [esp+18h] [ebp-8h] BYREF
  struct tagWND *v10; // [esp+1Ch] [ebp-4h] BYREF

  v8 = 0;
  v9 = 0;
  *(_DWORD *)v7 = 0;
  v10 = 0;
  v4 = a3;
  *((_DWORD *)this + 14) = a3;
  if ( v4 == 1 || v4 == 2 )
  {
    updated = InteractiveControlDefaultScroller::UpdateWindow(this, &v10);
    if ( updated >= 0 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(this, &v9);
      if ( updated >= 0 )
      {
        if ( v9 )
          InteractiveControlDefaultScroller::Reset(this, v10);
        updated = InteractiveControlDefaultScroller::UpdateRotation(this, *(_DWORD *)(a2 + 24), &v8);
        if ( updated >= 0 )
        {
          if ( v8 )
          {
            InteractiveControlDefaultScroller::Reset(this, v10);
          }
          else
          {
            updated = InteractiveControlDefaultScroller::UpdateBallistics(this);
            if ( updated >= 0 )
            {
              updated = InteractiveControlDefaultScroller::GenerateWheelDelta(this, v7);
              if ( updated >= 0 )
              {
                updated = InteractiveControlDefaultScroller::GenerateWheelMessage(this, v7[0], v10);
                if ( updated < 0 && (unsigned int)dword_2662F8 > 2 )
                  goto LABEL_26;
              }
              else if ( (unsigned int)dword_2662F8 > 2 )
              {
                goto LABEL_26;
              }
            }
            else if ( (unsigned int)dword_2662F8 > 2 )
            {
              goto LABEL_26;
            }
          }
        }
        else if ( (unsigned int)dword_2662F8 > 2 )
        {
          goto LABEL_26;
        }
      }
      else if ( (unsigned int)dword_2662F8 > 2 )
      {
        goto LABEL_26;
      }
    }
    else if ( (unsigned int)dword_2662F8 > 2 )
    {
      goto LABEL_26;
    }
  }
  else
  {
    updated = -1073700861;
    if ( (unsigned int)dword_2662F8 > 2 )
    {
LABEL_26:
      a3 = updated;
      a2 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662F8,
        byte_256AC8,
        (int)this,
        (int)this,
        (const char **)&a2,
        (int)&a3);
    }
  }
  return updated;
}
