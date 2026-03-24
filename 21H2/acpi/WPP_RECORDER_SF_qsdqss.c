/*
 * XREFs of WPP_RECORDER_SF_qsdqss @ 0x1C002B5AC
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008F4A0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C008FF00 (ACPIBusIrpQueryId.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C00A0BB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00ABAE0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00ABF30 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v15; // rbp
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // r9
  __int64 v21; // r9
  const char *v22; // r11
  __int64 v23; // r8
  __int64 v24; // r8
  const char *v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rdx
  const char *v28; // rcx
  int v29; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a11;
  v12 = -1LL;
  v13 = (__int64)a10;
  v15 = (__int64)a7;
  v16 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a11[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a11;
    if ( !a11 )
      v22 = "NULL";
    if ( a10 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a10[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a10;
    if ( !a10 )
      v25 = "NULL";
    if ( a7 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a7[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = a7;
    if ( !a7 )
      v28 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      v28,
      v27,
      &a8,
      4LL,
      &a9,
      8LL,
      v25,
      v24,
      v22,
      v21,
      0LL);
  }
  if ( v11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v11 + v17) );
  }
  if ( v13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v13 + v18) );
  }
  if ( v15 )
  {
    do
      ++v12;
    while ( *(_BYTE *)(v12 + v15) );
  }
  LOWORD(v29) = v16;
  return WppAutoLogTrace(a1, 2LL, 5LL, a5, v29, &a6);
}
