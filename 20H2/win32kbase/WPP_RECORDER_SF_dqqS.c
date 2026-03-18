/*
 * XREFs of WPP_RECORDER_SF_dqqS @ 0x1C016D14C
 * Callers:
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  struct RECORDER_LOG__ *v9; // r14
  const wchar_t *v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  bool v16; // zf
  int v18; // [rsp+20h] [rbp-68h]

  v9 = gRimLog;
  v10 = a9;
  v11 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a9[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a9;
    if ( !a9 )
      v15 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v15,
      v14,
      0LL);
  }
  v16 = v10 == 0LL;
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v16 = v10 == 0LL;
  }
  if ( v16 )
    v10 = L"NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(
           v9,
           4LL,
           1LL,
           &WPP_a75f261dfb463415346bb11edf387329_Traceguids,
           v18,
           &a6,
           4LL,
           &a7,
           8LL,
           &a8,
           8LL,
           v10);
}
