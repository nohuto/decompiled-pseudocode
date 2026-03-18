/*
 * XREFs of NtGdiGetMonitorID @ 0x1C0274ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  _BYTE v17[8]; // [rsp+30h] [rbp-3B8h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-3B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-3A0h] BYREF
  _DWORD v20[212]; // [rsp+60h] [rbp-388h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  memset(v20, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  v18[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v18, a1);
  if ( v18[0] )
  {
    v12 = *(_QWORD *)(v18[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17, v8, v10, v11);
    if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 )
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1800) + 40LL) + 2576LL);
    else
      v13 = *(_QWORD *)(v12 + 2576);
    if ( v13 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v13 + 64));
      v20[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v20, 0, 0) >= 0 )
        v6 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
  }
  if ( v6 )
  {
    v9 = &v20[82];
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)&v20[82] + v15) );
    v16 = 2 * v15 + 2;
    if ( v16 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, &v20[82], v16);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v6;
}
