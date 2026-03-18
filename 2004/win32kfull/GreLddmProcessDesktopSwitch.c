/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1C0050B78
 * Callers:
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0050C74 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreLddmProcessDesktopSwitch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int IsRemoteConnection; // edi
  __int64 i; // rcx
  __int64 v6; // rax
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10, a2, a3, a4);
  IsRemoteConnection = UserIsRemoteConnection();
  for ( i = 0LL; ; i = v8 )
  {
    v6 = hdevEnumerate(i);
    v8 = v6;
    if ( !v6 )
      break;
    v9 = *(_DWORD *)(v6 + 40);
    v10 = v6;
    if ( (v9 & 1) != 0
      && (v9 & 0x400) == 0
      && (v9 & 0x20000) == 0
      && ((unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) || IsRemoteConnection) )
    {
      GreLockVisRgn(v8);
      GreLockDisplayDevice(v8);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))gDxgkInterface[51])(
        *(_QWORD *)(*(_QWORD *)(v8 + 2576) + 240LL),
        *(unsigned int *)(*(_QWORD *)(v8 + 2576) + 256LL),
        IsRemoteConnection);
      GreUnlockDisplayDevice(v8);
      GreUnlockVisRgn(v8);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
}
