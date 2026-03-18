/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C025A148
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0259EA8 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D8B1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C025A4D0 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C025A5A8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  __int64 v4; // r14
  __int64 v8; // r9
  char *v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // r14
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v15; // r8
  LARGE_INTEGER v16; // r9
  int v18; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+34h] [rbp-4Ch]
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 QuadPart; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+48h] [rbp-38h]
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]

  v3 = *((_DWORD *)this + 14);
  v4 = *((_QWORD *)a3 + 2);
  v24 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3) && (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 424) + 120LL)) != 0 )
    {
      v9 = (char *)(v8 + 40);
      v10 = *(_OWORD *)(*(_QWORD *)v9 + 104LL);
    }
    else
    {
      v9 = (char *)a3 + 40;
      v10 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v22 = v10;
    v18 = v10 + (DWORD2(v10) - (int)v10) / 2;
    v19 = DWORD1(v10) + (HIDWORD(v10) - DWORD1(v10)) / 2;
    LogicalToPhysicalDPIPoint(&v18, &v18, *(unsigned int *)(*(_QWORD *)v9 + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_13;
    v11 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)((char *)&v23 + 2) = 67109120;
    WORD3(v23) = a2;
    if ( (unsigned int)dword_1C0330B30 > 4
      && (qword_1C0330B40 & 0x40) != 0
      && (qword_1C0330B48 & 0x40) == qword_1C0330B48 )
    {
      QuadPart = PerformanceCounter.QuadPart;
      v20 = (__int64)"Dial";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        (__int64)&dword_1C0330B30,
        byte_1C02EFB82,
        v15.QuadPart,
        v16.QuadPart,
        (__int64)&QuadPart,
        (void **)&v20);
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
      (LARGE_INTEGER)v13.QuadPart,
      (LARGE_INTEGER)v12.QuadPart,
      (LARGE_INTEGER)v15.QuadPart);
    HIDWORD(v23) = v18;
    LODWORD(v24) = v19;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))SynthesizeMouseInput)(
      0LL,
      &v23,
      v11,
      (LARGE_INTEGER)PerformanceCounter.QuadPart,
      32864,
      0LL);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    if ( v3 == 2 )
LABEL_13:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
