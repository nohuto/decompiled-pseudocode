/*
 * XREFs of ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01705E8
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C016FF74 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01701AC (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01703B4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeLeftHandedDeadzone(RIMDeadzone *this)
{
  _DWORD *v2; // rax
  _DWORD *v4; // rcx

  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  v2 = Win32AllocPoolZInit(0x18uLL, 2053394514LL);
  *((_QWORD *)this + 3) = v2;
  if ( !v2 )
    return 3221225495LL;
  *v2 = 100;
  *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 270;
  *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = Win32AllocPoolZInit(
                                               8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL),
                                               2053394514LL);
  v4 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
  if ( !v4 )
  {
    RIMDeadzone::Release((DeadzonePalmTelemetry **)this);
    return 3221225495LL;
  }
  *v4 = 0;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 14400;
  *(_DWORD *)this = 0;
  return 0LL;
}
