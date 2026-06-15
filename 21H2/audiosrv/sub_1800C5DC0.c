/*
 * XREFs of sub_1800C5DC0 @ 0x1800C5DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800C50AC @ 0x1800C50AC (sub_1800C50AC.c)
 *     sub_1800C5A78 @ 0x1800C5A78 (sub_1800C5A78.c)
 */

__int64 __fastcall sub_1800C5DC0(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        __int64 *a6,
        _QWORD *a7)
{
  _QWORD *v8; // rdi
  char v11; // bp
  __int64 *v12; // rax
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v17; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  struct _RTL_CRITICAL_SECTION v22; // [rsp+30h] [rbp-58h] BYREF

  v8 = 0LL;
  v22.DebugInfo = 0LL;
  v11 = 0;
  v12 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(
    (struct _TP_TIMER **)&v22.LockCount,
    (struct _TP_TIMER *)v12[1],
    v13,
    (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher");
  v14 = CoInitializeEx(0LL, 0);
  if ( v14 >= 0 )
  {
    v11 = 1;
    v8 = sub_18006A18C(8uLL);
    if ( v8 )
    {
      if ( a3 > 0xB )
      {
        v14 = -2147024809;
      }
      else
      {
        v14 = sub_1800C50AC(v15, a2, a3, a4, &v22);
        if ( v14 < 0 )
        {
          DebugInfo = v22.DebugInfo;
        }
        else
        {
          v17 = v22.DebugInfo;
          DebugInfo = 0LL;
          *v8 = v22.DebugInfo;
          *a5 = *(_OWORD *)&v17->CriticalSection;
          v16 = *(_QWORD *)&v17[1].CreatorBackTraceIndexHigh;
          *a6 = v16;
          *a7 = v8;
          v8 = 0LL;
          v14 = 0;
        }
        if ( DebugInfo )
          sub_1800C5A78(v16, DebugInfo);
      }
    }
    else
    {
      v14 = -2147024882;
    }
  }
  sub_18006A148(v8);
  if ( v11 )
    CoUninitialize();
  sub_18000F690((__int64)&v22.LockCount, v19, v20);
  return (unsigned int)v14;
}
