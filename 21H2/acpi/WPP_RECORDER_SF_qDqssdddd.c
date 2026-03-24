/*
 * XREFs of WPP_RECORDER_SF_qDqssdddd @ 0x1C00121FC
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0012510 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qDqssdddd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // rax
  int v18; // [rsp+28h] [rbp-99h]
  __int64 v19; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va; // [rsp+110h] [rbp+4Fh]
  __int64 v21; // [rsp+118h] [rbp+57h] BYREF
  va_list va1; // [rsp+118h] [rbp+57h]
  __int64 v23; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+5Fh]
  const char *v25; // [rsp+128h] [rbp+67h]
  const char *v26; // [rsp+130h] [rbp+6Fh]
  __int64 v27; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  __int64 v29; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+7Fh]
  __int64 v31; // [rsp+148h] [rbp+87h] BYREF
  va_list va5; // [rsp+148h] [rbp+87h]
  va_list va6; // [rsp+150h] [rbp+8Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v25 = va_arg(va3, const char *);
  v26 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v31 = va_arg(va6, _QWORD);
  v5 = (__int64)v26;
  v6 = (__int64)v25;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v26 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v26[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = v26;
    if ( !v26 )
      v14 = "NULL";
    if ( v25 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v25[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v25;
    if ( !v25 )
      v17 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_18eab87a8b67317afec152b8fbe84dda_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      v17,
      v16,
      v14,
      v13,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      va6,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v5 + v10) );
  }
  if ( v6 )
  {
    do
      ++v7;
    while ( *(_BYTE *)(v6 + v7) );
  }
  LOWORD(v18) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_18eab87a8b67317afec152b8fbe84dda_Traceguids,
           v18,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
