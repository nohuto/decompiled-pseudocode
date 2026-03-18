/*
 * XREFs of WPP_RECORDER_SF_DDDssDssqq @ 0x1C000F518
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDDssDssqq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r10
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // r9
  __int64 v17; // r9
  const char *v18; // r13
  __int64 v19; // r8
  __int64 v20; // r8
  const char *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // r11
  __int64 v25; // rcx
  const char *v26; // rax
  int v27; // [rsp+28h] [rbp-A9h]
  __int64 v29; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va; // [rsp+130h] [rbp+5Fh]
  __int64 v31; // [rsp+138h] [rbp+67h] BYREF
  va_list va1; // [rsp+138h] [rbp+67h]
  __int64 v33; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+6Fh]
  const char *v35; // [rsp+148h] [rbp+77h]
  const char *v36; // [rsp+150h] [rbp+7Fh]
  __int64 v37; // [rsp+158h] [rbp+87h] BYREF
  va_list va3; // [rsp+158h] [rbp+87h]
  const char *v39; // [rsp+160h] [rbp+8Fh]
  const char *v40; // [rsp+168h] [rbp+97h]
  __int64 v41; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+9Fh]
  va_list va5; // [rsp+178h] [rbp+A7h] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  v35 = va_arg(va3, const char *);
  v36 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v37 = va_arg(va4, _QWORD);
  v39 = va_arg(va4, const char *);
  v40 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v41 = va_arg(va5, _QWORD);
  v5 = (__int64)v40;
  v6 = -1LL;
  v7 = (__int64)v39;
  v8 = (__int64)v36;
  v9 = a1;
  v10 = (__int64)v35;
  v11 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v40 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v40[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = v40;
    if ( !v40 )
      v18 = "NULL";
    if ( v39 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v39[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = v39;
    if ( !v39 )
      v21 = "NULL";
    if ( v36 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v36[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = v36;
    if ( !v36 )
      v24 = "NULL";
    if ( v35 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v35[v25] );
      v11 = v25 + 1;
    }
    v26 = v35;
    if ( !v35 )
      v26 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v26,
      v11,
      v24,
      v23,
      (__int64 *)va3,
      4LL,
      v21,
      v20,
      v18,
      v17,
      (__int64 *)va4,
      8LL,
      va5,
      8LL,
      0LL);
    v9 = a1;
    v5 = (__int64)v40;
  }
  if ( v5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(v5 + v12) );
  }
  if ( v7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v7 + v13) );
  }
  if ( v8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v8 + v14) );
  }
  if ( v10 )
  {
    do
      ++v6;
    while ( *(_BYTE *)(v10 + v6) );
  }
  LOWORD(v27) = 16;
  return WppAutoLogTrace(
           v9,
           4LL,
           20LL,
           &WPP_4412200d597a3c4f07f109e3f649cee5_Traceguids,
           v27,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
