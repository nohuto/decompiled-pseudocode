/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002310
 * Callers:
 *     MouseAddDeviceEx @ 0x1C000C720 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000CBA0 (MouCreateClassObject.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rdi
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rsi
  bool v15; // zf
  char *v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  const wchar_t *v20; // rdx
  int v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h]
  __int64 v24; // [rsp+50h] [rbp-18h]
  __int64 v25; // [rsp+58h] [rbp-10h]

  v6 = a6;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = -1LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v14 = 10LL;
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v17 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v17[41] >= a2 )
    {
      if ( a6 )
      {
        v18 = -1LL;
        do
          v15 = a6[++v18] == 0;
        while ( !v15 );
        v19 = 2 * v18 + 2;
      }
      else
      {
        v19 = 10LL;
      }
      v20 = a6;
      if ( !a6 )
        v20 = L"NULL";
      ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v17 + 3),
        43LL,
        &WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids,
        a4,
        v20,
        v19,
        0LL);
    }
  }
  if ( a6 )
  {
    do
      v15 = a6[++v12] == 0;
    while ( !v15 );
    v14 = 2 * v12 + 2;
  }
  else
  {
    v6 = L"NULL";
  }
  LOWORD(v21) = a4;
  return WppAutoLogTrace(
           a1,
           v10,
           a3,
           &WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids,
           v21,
           v6,
           v14,
           0LL,
           v22,
           v23,
           v24,
           v25);
}
