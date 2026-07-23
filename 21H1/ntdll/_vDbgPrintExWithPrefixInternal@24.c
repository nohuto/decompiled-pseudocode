/*
 * XREFs of _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1
 * Callers:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _DbgPrintReturnControlC @ 0x4B33EE30 (_DbgPrintReturnControlC.c)
 *     _vDbgPrintEx@16 @ 0x4B33EEC0 (_vDbgPrintEx@16.c)
 *     _vDbgPrintExWithPrefix@20 @ 0x4B33EEF0 (_vDbgPrintExWithPrefix@20.c)
 * Callees:
 *     _NtQueryDebugFilterState@8 @ 0x4B2F3D90 (_NtQueryDebugFilterState@8.c)
 *     _NtWow64DebuggerCall@20 @ 0x4B2F4790 (_NtWow64DebuggerCall@20.c)
 *     _DbgBreakPointWithStatus@4 @ 0x4B2F4CC0 (_DbgBreakPointWithStatus@4.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     __vsnprintf @ 0x4B2F7800 (__vsnprintf.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

int __fastcall vDbgPrintExWithPrefixInternal(void *a1, ULONG a2, ULONG Level, int a4, char *a5, char a6)
{
  unsigned __int16 SameTebFlags; // ax
  const char *v8; // edi
  int v9; // esi
  unsigned int v10; // ebx
  void *v11; // esp
  unsigned int v12; // esi
  char *v13; // ecx
  bool v14; // zf
  unsigned int v15; // eax
  int v16; // ecx
  unsigned __int16 v17; // cx
  int v18; // eax
  int v19; // ecx
  size_t v20; // [esp-8Ch] [ebp-13Ch]
  size_t v21[18]; // [esp-84h] [ebp-134h] BYREF
  int v22; // [esp+10h] [ebp-A0h]
  ULONG v23; // [esp+14h] [ebp-9Ch]
  int v24; // [esp+1Ch] [ebp-94h]
  int v25; // [esp+20h] [ebp-90h]
  int v26; // [esp+24h] [ebp-8Ch]
  char *Format; // [esp+28h] [ebp-88h]
  void *Src; // [esp+2Ch] [ebp-84h]
  char *v29; // [esp+30h] [ebp-80h]
  unsigned int v30; // [esp+34h] [ebp-7Ch]
  struct _TEB *v31; // [esp+38h] [ebp-78h]
  EXCEPTION_RECORD ExceptionRecord; // [esp+3Ch] [ebp-74h] BYREF
  CPPEH_RECORD ms_exc; // [esp+98h] [ebp-18h]

  v23 = a2;
  Src = a1;
  v26 = a4;
  Format = a5;
  v31 = NtCurrentTeb();
  if ( a2 != -1 && (!NtCurrentPeb()->BeingDebugged || a2 != 101) && !NtQueryDebugFilterState(a2, Level) )
    return 0;
  SameTebFlags = v31->SameTebFlags;
  if ( (SameTebFlags & 2) != 0 )
    return 0;
  v31->SameTebFlags = SameTebFlags | 2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( v10 < 0x200 )
  {
    v11 = alloca(128);
    ms_exc.old_esp = (DWORD)v21 + 4;
    v8 = (char *)v21 + 4;
    v10 += 128;
    ms_exc.registration.TryLevel = 0;
    v12 = strlen((const char *)Src);
    if ( v12 > v10 - 1 )
      v12 = v10 - 1;
    LODWORD(v21[0]) = v12;
    memcpy((char *)v21 + 4, Src, v21[0]);
    v13 = (char *)v21 + v12 + 4;
    v29 = (char *)v21 + v12 + 4;
    v15 = v10 - v12;
    v14 = v10 == v12;
    v9 = 0;
    if ( v14 || v15 > 0x7FFFFFFF )
      v9 = -1073741811;
    v24 = v9;
    if ( v9 < 0 )
    {
      if ( v15 )
        *v13 = 0;
      goto LABEL_24;
    }
    v9 = 0;
    v25 = 0;
    v30 = v15 - 1;
    HIDWORD(v20) = v26;
    LODWORD(v20) = v15 - 1;
    v16 = _vsnprintf(v13, v20, Format, (va_list)HIDWORD(v21[0]));
    if ( v16 < 0 || v16 > v30 )
    {
      v9 = -2147483643;
      v25 = -2147483643;
    }
    else if ( v16 != v30 )
    {
      goto LABEL_21;
    }
    v29[v30] = 0;
LABEL_21:
    v24 = v9;
LABEL_24:
    v22 = v9;
    ms_exc.registration.TryLevel = -2;
    if ( v9 >= 0 )
      goto LABEL_28;
    if ( v9 != -2147483643 )
      break;
  }
  if ( v9 == -2147483643 )
  {
    *(_WORD *)&v8[v10 - 2] = 10;
    v17 = v10 - 1;
    goto LABEL_29;
  }
LABEL_28:
  v17 = strlen(v8);
LABEL_29:
  if ( NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) != 3 )
  {
    ExceptionRecord.ExceptionCode = 1073807366;
    ExceptionRecord.ExceptionRecord = 0;
    ExceptionRecord.NumberParameters = 2;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionInformation[0] = v17 + 1;
    ExceptionRecord.ExceptionInformation[1] = (unsigned int)v8;
    ms_exc.registration.TryLevel = 1;
    RtlRaiseException(&ExceptionRecord);
  }
  v18 = NtWow64DebuggerCall(1, v8, v17, v23, Level);
  v19 = v18;
  if ( a6 == 1 && v18 == -2147483645 )
  {
    DbgBreakPointWithStatus(1u);
    v19 = 0;
  }
  v31->SameTebFlags &= ~2u;
  return v19;
}
