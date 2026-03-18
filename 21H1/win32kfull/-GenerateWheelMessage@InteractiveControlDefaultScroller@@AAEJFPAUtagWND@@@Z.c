/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z @ 0x1B38DC
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@@Z @ 0x146888 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AAEHF@Z @ 0x1B3BFA (-SendZoomHotkey@InteractiveControlDefaultScroller@@AAEHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CGXEH@Z @ 0x1B3C82 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CGXEH@Z.c)
 */

int __thiscall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v4; // edi
  int v5; // ecx
  char *v6; // ecx
  int *v7; // esi
  int *v8; // esi
  __int16 v9; // si
  int v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int64 v13; // kr08_8
  LARGE_INTEGER PerformanceCounter; // kr10_8
  int v15; // ecx
  int v16; // esi
  unsigned __int8 v18; // [esp+0h] [ebp-68h]
  int v19; // [esp+4h] [ebp-64h]
  _DWORD v20[3]; // [esp+10h] [ebp-58h] BYREF
  int v21; // [esp+1Ch] [ebp-4Ch]
  int v22; // [esp+20h] [ebp-48h]
  int v23; // [esp+24h] [ebp-44h]
  int v24; // [esp+28h] [ebp-40h]
  int v25; // [esp+2Ch] [ebp-3Ch] BYREF
  int v26; // [esp+30h] [ebp-38h] BYREF
  int v27; // [esp+34h] [ebp-34h] BYREF
  int v28; // [esp+38h] [ebp-30h]
  int v29; // [esp+3Ch] [ebp-2Ch]
  InteractiveControlDefaultScroller *HighPart; // [esp+40h] [ebp-28h]
  int v31; // [esp+44h] [ebp-24h]
  int LowPart; // [esp+48h] [ebp-20h]
  _DWORD v33[6]; // [esp+4Ch] [ebp-1Ch] BYREF

  HighPart = this;
  memset(v33, 0, sizeof(v33));
  v4 = *((_DWORD *)a3 + 2);
  v29 = *((_DWORD *)this + 14);
  if ( a2 )
  {
    if ( IsCompositionInputWindow() && (v5 = *(_DWORD *)(*(_DWORD *)(v4 + 236) + 64)) != 0 )
    {
      v6 = (char *)(v5 + 20);
      v7 = (int *)(*(_DWORD *)v6 + 68);
    }
    else
    {
      v6 = (char *)a3 + 20;
      v7 = (int *)(*((_DWORD *)a3 + 5) + 52);
    }
    v21 = *v7;
    v8 = v7 + 1;
    v22 = *v8++;
    v23 = *v8;
    v24 = v8[1];
    v27 = v21 + (v23 - v21) / 2;
    v28 = v22 + (v24 - v22) / 2;
    LogicalToPhysicalDPIPoint(&v27, &v27, *(_DWORD *)(*(_DWORD *)v6 + 184), 0);
    v9 = a2;
    if ( v29 == 2 && !InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_16;
    v10 = MEMORY[0xFFDF0004];
    LowPart = MEMORY[0xFFDF0004];
    v11 = MEMORY[0xFFDF0324];
    v12 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v11 = MEMORY[0xFFDF0324];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v12 = MEMORY[0xFFDF0320];
      v9 = a2;
      v10 = LowPart;
    }
    v13 = (((unsigned int)LowPart * (unsigned __int64)v12) >> 24) + (((unsigned int)v10 * (unsigned __int64)v11) << 8);
    v31 = HIDWORD(v13);
    PerformanceCounter = KeQueryPerformanceCounter(0);
    HighPart = (InteractiveControlDefaultScroller *)PerformanceCounter.HighPart;
    LowPart = PerformanceCounter.LowPart;
    *(_DWORD *)((char *)v33 + 2) = 67109120;
    HIWORD(v33[1]) = v9;
    if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 64LL) )
    {
      v16 = LowPart;
      v20[1] = HighPart;
      v25 = (int)v20;
      v20[0] = LowPart;
      v26 = (int)"Dial";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>>(
        (int)&dword_2689E8,
        byte_25406A,
        v15,
        v15,
        &v25,
        (const char **)&v26);
    }
    else
    {
      v16 = LowPart;
    }
    UserSessionSwitchLeaveCrit();
    v33[3] = v27;
    v33[4] = v28;
    SynthesizeMouseInput(0, v33, v13, v31, v16, HighPart, 32864, 0);
    ProcessMouseEvent();
    EnterCrit(0, 1);
    if ( v29 == 2 )
LABEL_16:
      InteractiveControlDefaultScroller::SendZoomModifiers(v18, v19);
  }
  return 0;
}
