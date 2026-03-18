/*
 * XREFs of _NtGdiGetMonitorID@12 @ 0x1D1907
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, volatile void *Address)
{
  int v3; // edi
  _DWORD *v5; // esi
  int v6; // eax
  size_t v7; // esi
  _DWORD v8[3]; // [esp+10h] [ebp-37Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-370h] BYREF
  char v10; // [esp+27h] [ebp-365h] BYREF
  _DWORD v11[211]; // [esp+28h] [ebp-364h] BYREF
  CPPEH_RECORD ms_exc; // [esp+374h] [ebp-18h]

  v3 = 0;
  memset(v11, 0, 0x348u);
  if ( UserSessionSwitchEnterCrit() )
    return 0;
  v8[1] = 0;
  v8[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v5 = *(_DWORD **)(v8[0] + 36);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    if ( ((unsigned int)&loc_20000 & v5[6]) != 0 )
      v6 = *(_DWORD *)(*(_DWORD *)(v5[277] + 20) + 1832);
    else
      v6 = v5[458];
    if ( v6 )
    {
      *(_DWORD *)&DestinationString.Length = 0;
      DestinationString.Buffer = 0;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v6 + 64));
      v11[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0, 0, v11, 0, 0) >= 0 )
        v3 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  if ( v3 )
  {
    v7 = 2 * wcslen((const unsigned __int16 *)&v11[82]) + 2;
    if ( v7 > Length )
    {
      v3 = 0;
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      ProbeForWrite(Address, Length, 1u);
      memcpy((void *)Address, &v11[82], v7);
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
