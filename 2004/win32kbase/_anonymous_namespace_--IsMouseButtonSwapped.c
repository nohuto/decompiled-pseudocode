/*
 * XREFs of _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C0068D1C
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C0068C60 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C01BBC7C (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 * Callees:
 *     WPP_RECORDER_SF_sscc @ 0x1C01BEA88 (WPP_RECORDER_SF_sscc.c)
 */

bool __fastcall anonymous_namespace_::IsMouseButtonSwapped(int a1, unsigned __int8 a2)
{
  int v2; // r11d
  int v4; // ebx
  bool v5; // dl
  char v7; // al
  int v8; // ecx
  char v9; // r10
  int v10; // eax
  const char *v11; // rcx

  v2 = a2;
  if ( (unsigned int)(a1 - 1) > 1 )
    return 0;
  v4 = *((_DWORD *)gpsi + 497);
  v5 = v4 != 0;
  if ( gbSwapMouseButtonsDirty )
  {
    v7 = 16;
    v8 = 0;
    v9 = 4;
    if ( a1 != 1 )
      v7 = 4;
    LOBYTE(v8) = (unsigned __int8)(v7 & gafAsyncKeyState) != 0;
    if ( (v2 ^ 1) == v8 )
    {
      v10 = 0;
      if ( a1 != 1 )
        v9 = 16;
      LOBYTE(v10) = (unsigned __int8)(v9 & gafAsyncKeyState) != 0;
      if ( v2 == v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = "Up";
          if ( !(_BYTE)v2 )
            v11 = "Down";
          WPP_RECORDER_SF_sscc((_DWORD)v11, v4 == 0, a1, v4 != 0);
        }
        v5 = v4 == 0;
      }
    }
    gbSwapMouseButtonsDirty = 0;
  }
  return v5;
}
