/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1800509F8
 * Callers:
 *     DbgPrintEx @ 0x180050340 (DbgPrintEx.c)
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 *     DbgPrintReturnControlC @ 0x1800E0C30 (DbgPrintReturnControlC.c)
 *     vDbgPrintEx @ 0x1800E0CF0 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x1800E0D20 (vDbgPrintExWithPrefix.c)
 * Callees:
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _vsnprintf @ 0x18008DBA0 (_vsnprintf.c)
 *     ZwQueryDebugFilterState @ 0x18009F8C0 (ZwQueryDebugFilterState.c)
 *     DbgBreakPointWithStatus @ 0x1800A0BD0 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x1800A0BE0 (DebugPrint.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(_BYTE *a1, ULONG a2, ULONG a3, char *a4, va_list a5, char a6)
{
  _BYTE *v7; // rdx
  struct _TEB *v8; // rsi
  unsigned __int16 SameTebFlags; // ax
  _BYTE *v11; // r15
  int v12; // ebx
  unsigned int v13; // r13d
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  size_t v16; // rbx
  char *v17; // rcx
  size_t v18; // rdx
  unsigned __int64 v19; // r12
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  _BYTE v23[96]; // [rsp+0h] [rbp-80h] BYREF
  int v24; // [rsp+80h] [rbp+0h]
  int v25; // [rsp+84h] [rbp+4h]
  ULONG v26; // [rsp+88h] [rbp+8h]
  ULONG v27; // [rsp+8Ch] [rbp+Ch]
  _BYTE *v28; // [rsp+90h] [rbp+10h]
  void *Src; // [rsp+98h] [rbp+18h]
  struct _TEB *v30; // [rsp+A0h] [rbp+20h]
  int v31; // [rsp+A8h] [rbp+28h]
  va_list ArgList; // [rsp+B0h] [rbp+30h]
  char *Format; // [rsp+B8h] [rbp+38h]
  __int16 v34; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE *v35; // [rsp+C8h] [rbp+48h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+D0h] [rbp+50h] BYREF

  Format = a4;
  v26 = a3;
  v27 = a2;
  v7 = a1;
  Src = a1;
  ArgList = a5;
  v8 = NtCurrentTeb();
  v30 = v8;
  if ( a2 != -1 && (!NtCurrentPeb()->BeingDebugged || a2 != 101) )
  {
    if ( !ZwQueryDebugFilterState(a2, a3) )
      return 0LL;
    v7 = Src;
  }
  SameTebFlags = v8->SameTebFlags;
  if ( (SameTebFlags & 2) != 0 )
    return 0LL;
  v8->SameTebFlags = SameTebFlags | 2;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = -1LL;
  do
  {
    if ( v13 >= 0x200 )
      break;
    v11 = v23;
    v13 += 128;
    v15 = -1LL;
    do
      ++v15;
    while ( v7[v15] );
    v16 = v13 - 1;
    if ( v15 <= v16 )
      v16 = v15;
    memmove(v23, v7, v16);
    v17 = &v23[v16];
    v28 = &v23[v16];
    v18 = v13 - v16;
    v12 = 0;
    if ( v18 - 1 > 0x7FFFFFFE )
      v12 = -1073741811;
    v25 = v12;
    if ( v12 < 0 )
    {
      if ( v18 )
        *v17 = 0;
    }
    else
    {
      v12 = 0;
      v24 = 0;
      v19 = v18 - 1;
      v20 = vsnprintf(v17, v18 - 1, Format, ArgList);
      if ( v20 < 0 || v20 > v19 )
      {
        v28[v19] = 0;
        v12 = -2147483643;
        v24 = -2147483643;
      }
      else if ( v20 == v19 )
      {
        v28[v19] = 0;
      }
      v25 = v12;
    }
    v31 = v12;
    if ( v12 >= 0 )
      break;
    v7 = Src;
  }
  while ( v12 == -2147483643 );
  if ( v12 == -2147483643 )
  {
    v11[v13 - 2] = 10;
    LOWORD(v14) = v13 - 1;
    v11[v13 - 1] = 0;
  }
  else
  {
    do
      ++v14;
    while ( v11[v14] );
  }
  v35 = v11;
  v34 = v14;
  if ( NtCurrentPeb()->FastPebLock && (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) != 3) )
  {
    ExceptionRecord.ExceptionCode = 1073807366;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 2;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int16)v14 + 1LL;
    ExceptionRecord.ExceptionInformation[1] = (unsigned __int64)v11;
    RtlRaiseException(&ExceptionRecord);
    v8->SameTebFlags &= ~2u;
    return 0LL;
  }
  v21 = DebugPrint(&v34, v27, v26);
  v22 = v21;
  if ( a6 == 1 && v21 == -2147483645 )
  {
    DbgBreakPointWithStatus(1u);
    v22 = 0;
  }
  v8->SameTebFlags &= ~2u;
  return v22;
}
