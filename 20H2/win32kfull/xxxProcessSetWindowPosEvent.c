/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C011B490
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     ??9?$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z @ 0x1C0013EE0 (--9-$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x1C004B3E8 (InternalBeginDeferWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rdi
  int i; // ebp
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r9

  v2 = InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(*(void **)(v2 + 40), *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v3 = *(_DWORD *)(a1 + 28);
    v4 = *(_QWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 28) = v3;
    for ( i = v3 - 1; i >= 0; --i )
    {
      if ( (*(_DWORD *)(v4 + 156) & 0x20) != 0 )
      {
        if ( *(_QWORD *)v4 )
        {
          v6 = HMValidateHandleNoSecure(*(_QWORD *)v4, 1);
          if ( v6 )
          {
            if ( tagWND::RedirectedFieldhMonitor<HMONITOR__ *>::operator!=(v6 + 215, (_QWORD *)(v4 + 128)) )
              *v7 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 256LL);
          }
        }
      }
      v4 += 168LL;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0);
  }
  return Win32FreePool(a1);
}
