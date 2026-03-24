/*
 * XREFs of ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x18022F1E4
 * Callers:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x18022F2F0 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        int a5)
{
  unsigned int v6; // ebx
  char v7; // si
  __int64 v8; // rcx
  __int128 pvParam; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v6 = 0;
  v7 = a2;
  *((_BYTE *)a1 + 148) = (2 * a3) | *((_BYTE *)a1 + 148) & 0xFD | 1;
  *((_DWORD *)a1 + 38) = a5;
  v8 = *a1;
  if ( v8 )
  {
    if ( a4 )
    {
      LOBYTE(a2) = a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, a2);
    }
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
    }
    else
    {
      v11 = 0LL;
      pvParam = 0LL;
      if ( SystemParametersInfoW(0xAEu, 0x18u, &pvParam, 0) )
      {
        *((_BYTE *)a1 + 148) &= ~4u;
        *((_BYTE *)a1 + 148) = ((unsigned __int16)(WORD6(pvParam) & 0x100) >> 5) | (*((_BYTE *)a1 + 148) | ((unsigned __int8)(BYTE12(pvParam) & 0x80) >> 5)) & 0xF7;
      }
    }
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v6;
}
