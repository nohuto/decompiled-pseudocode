/*
 * XREFs of GreDxDwmShutdown @ 0x1C0278A10
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C000E180 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0050C74 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void GreDxDwmShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 HDEV; // rax
  __int64 i; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    gDxgkInterface[15]((_QWORD *)-1LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11, v0, v1, v2);
    HDEV = UserGetHDEV();
    GreLockVisRgn(HDEV);
    for ( i = 0LL; ; i = v8 )
    {
      v7 = hdevEnumerate(i);
      v8 = v7;
      if ( !v7 )
        break;
      v5 = *(_DWORD *)(v7 + 40);
      v11 = v8;
      if ( (v5 & 1) != 0
        && (v5 & 0x400) == 0
        && (v5 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11) )
      {
        GreLockDisplayDevice(v8);
        if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))gDxgkInterface[36])(
               *(_QWORD *)(*(_QWORD *)(v8 + 2576) + 240LL),
               *(unsigned int *)(*(_QWORD *)(v8 + 2576) + 256LL)) )
        {
          if ( *(_QWORD *)(v8 + 2728) )
          {
            LOBYTE(v6) = 1;
            DrvDxgkDisplayOnOff(v8, v6, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v8 + 2728))(*(_QWORD *)(v8 + 1800), 1LL);
          }
        }
        GreUnlockDisplayDevice(v8);
      }
    }
    v9 = UserGetHDEV();
    GreUnlockVisRgn(v9);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  }
}
