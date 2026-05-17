/*
 * XREFs of _RtlDeactivateActivationContext@8 @ 0x4B2E4A70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlpFreeActivationContextStackFrame@8 @ 0x4B2E4B49 (_RtlpFreeActivationContextStackFrame@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

void __stdcall RtlDeactivateActivationContext(int a1, unsigned int a2)
{
  unsigned int *ActivationContextStackPointer; // eax
  unsigned int v3; // edi
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  unsigned int v8; // ecx
  _DWORD *v9; // eax
  unsigned int *v10; // [esp+Ch] [ebp-5Ch]
  EXCEPTION_RECORD ExceptionRecord; // [esp+10h] [ebp-58h] BYREF

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(51, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", a1);
    goto LABEL_19;
  }
  if ( !a2 )
    return;
  if ( (a2 & 0xF0000000) != 0x10000000 )
  {
    DbgPrintEx(51, 0, "SXS: %s() called with invalid cookie type 0x%08Ix\n", "RtlDeactivateActivationContext", a2);
    goto LABEL_19;
  }
  ActivationContextStackPointer = (unsigned int *)NtCurrentTeb()->ActivationContextStackPointer;
  if ( ((ActivationContextStackPointer[5] ^ HIWORD(a2)) & 0xFFF) != 0 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
      "RtlDeactivateActivationContext",
      a2,
      ActivationContextStackPointer[5] & 0xFFF);
LABEL_19:
    RtlRaiseStatus(-1073741811);
  }
  v3 = *ActivationContextStackPointer;
  v10 = ActivationContextStackPointer;
  if ( *ActivationContextStackPointer )
  {
    if ( (*(_DWORD *)(v3 + 8) & 8) == 0 || *(_DWORD *)((*(_DWORD *)(v3 + 8) & 8) != 0 ? v3 + 0xC : 12) != a2 )
    {
      v7 = *(_DWORD **)v3;
      v8 = 0;
      if ( *(_DWORD *)v3 )
        v9 = (v7[2] & 8) != 0 ? v7 : 0;
      else
        v9 = 0;
      if ( v7 )
      {
        do
        {
          if ( v9 && v9[3] == a2 )
            break;
          v7 = (_DWORD *)*v7;
          ++v8;
          v9 = v7 ? ((v7[2] & 8) != 0 ? v7 : 0) : 0;
        }
        while ( v7 );
        if ( v7 )
        {
          ExceptionRecord.ExceptionRecord = 0;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.NumberParameters = 3;
          ExceptionRecord.ExceptionInformation[0] = v8;
          ExceptionRecord.ExceptionInformation[1] = (unsigned int)v7;
          ExceptionRecord.ExceptionInformation[2] = v3;
          ExceptionRecord.ExceptionCode = -1072365553;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      RtlRaiseStatus(-1072365552);
    }
    v4 = *(_DWORD **)v3;
    do
    {
      v5 = *(_DWORD *)(v3 + 8);
      v6 = *(_DWORD **)v3;
      if ( (v5 & 1) != 0 )
      {
        RtlReleaseActivationContext(*(volatile signed __int32 **)(v3 + 4));
        v5 = *(_DWORD *)(v3 + 8);
      }
      if ( (v5 & 8) != 0 )
        RtlpFreeActivationContextStackFrame(v10, v3);
      v3 = (unsigned int)v6;
    }
    while ( v6 != v4 );
    *v10 = (unsigned int)v4;
  }
}
