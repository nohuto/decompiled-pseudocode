/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0258898
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0258170 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0251114 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C0258A68 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0258B38 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C0258D68 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C025915C (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C0259204 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // r14d
  unsigned int v7; // ebx
  struct tagWND *v8; // rsi
  int updated; // eax
  int v10; // eax
  int v11; // edx
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+40h] BYREF

  *((_DWORD *)a1 + 14) = a3;
  LODWORD(v13) = 0;
  LOWORD(v14) = 0;
  v6 = 1;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    if ( gpqForeground )
      v8 = *(struct tagWND **)(gpqForeground + 112LL);
    else
      v8 = 0LL;
    v7 = v8 == 0LL ? 0xC0000008 : 0;
    if ( v8 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)&v13);
      v7 = updated;
      if ( updated >= 0 )
      {
        if ( (_DWORD)v13 )
          InteractiveControlDefaultScroller::Reset(a1, v8);
        v10 = *((_DWORD *)a1 + 15);
        v11 = *(_DWORD *)(a2 + 24);
        if ( !v10 || v11 > 0 == v10 > 0 )
          v6 = 0;
        *((_DWORD *)a1 + 15) = v11;
        v7 = 0;
        if ( v6 )
        {
          InteractiveControlDefaultScroller::Reset(a1, v8);
          return v7;
        }
        updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
        v7 = updated;
        if ( updated >= 0 )
        {
          updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, (__int16 *)&v14);
          v7 = updated;
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v14, v8);
            v7 = updated;
            if ( updated >= 0 || (unsigned int)dword_1C032A2F8 <= 2 )
              return v7;
          }
          else if ( (unsigned int)dword_1C032A2F8 <= 2 )
          {
            return v7;
          }
        }
        else if ( (unsigned int)dword_1C032A2F8 <= 2 )
        {
          return v7;
        }
      }
      else if ( (unsigned int)dword_1C032A2F8 <= 2 )
      {
        return v7;
      }
      v14 = updated;
      goto LABEL_29;
    }
    if ( (unsigned int)dword_1C032A2F8 > 2 )
    {
      v14 = v8 == 0LL ? 0xC0000008 : 0;
      goto LABEL_29;
    }
  }
  else
  {
    v7 = -1073700861;
    if ( (unsigned int)dword_1C032A2F8 > 2 )
    {
      v14 = -1073700861;
LABEL_29:
      v13 = (__int64)"Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C032A2F8,
        byte_1C02F1BF0,
        a3,
        a4,
        (void **)&v13,
        (__int64)&v14);
    }
  }
  return v7;
}
