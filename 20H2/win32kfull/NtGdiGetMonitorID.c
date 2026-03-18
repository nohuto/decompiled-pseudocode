/*
 * XREFs of NtGdiGetMonitorID @ 0x1C0273900
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ @ 0x1C015D478 (-Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  _DWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi
  _BYTE v14[8]; // [rsp+50h] [rbp-3B8h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-3B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-3A0h] BYREF
  _DWORD v17[212]; // [rsp+80h] [rbp-388h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  memset(v17, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  v15[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v15, a1);
  if ( v15[0] )
  {
    v9 = *(_QWORD *)(v15[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
    if ( (*(_DWORD *)(v9 + 40) & 0x20000) != 0 )
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1800) + 40LL) + 2576LL);
    else
      v10 = *(_QWORD *)(v9 + 2576);
    if ( (unsigned int)Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled() && v10 == -4 )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 46LL);
      v10 = 0LL;
    }
    if ( v10 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v10 + 64));
      v17[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v17, 0, 0) >= 0 )
        v6 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  }
  if ( v6 )
  {
    v8 = &v17[82];
    v12 = -1LL;
    do
      ++v12;
    while ( *((_WORD *)&v17[82] + v12) );
    v13 = 2 * v12 + 2;
    if ( v13 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, &v17[82], v13);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
