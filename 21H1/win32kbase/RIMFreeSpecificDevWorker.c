/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C0059C4C
 * Callers:
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1F8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C005CEEC (RawInputManagerObjectDelete.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMFreeHidTLCInfo @ 0x1C0056E40 (RIMFreeHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C0056EE0 (RIMFreeHidDesc.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C0059D5C (RIMIDEFreeInjectedInfo.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     RIMHidTLCActive @ 0x1C00A307C (RIMHidTLCActive.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0167EC8 (RIMReleasePointerDeviceInfo.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01766E4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  RIMDeadzone **v12; // rdi
  __int64 v13; // rsi
  RIMDeadzone *v14; // rcx
  RIMDeadzone *v15; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_QWORD *)(a2 + 104) != a2 + 104 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = *(_QWORD *)(a2 + 216);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a2 + 320);
  if ( v5 )
    Win32FreePool(v5);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v6 = *(_QWORD *)(a2 + 472);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_QWORD *)(a2 + 472)) )
        RIMFreeHidTLCInfo(*(__int64 **)(a2 + 472));
    }
    v7 = *(_QWORD *)(a2 + 464);
    if ( v7 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 456) )
        {
          v12 = (RIMDeadzone **)(a2 + 416);
          v13 = 5LL;
          do
          {
            v14 = *v12;
            if ( *v12 )
            {
              RIMDeadzone::Release(v14);
              v15 = *v12;
              if ( *((_DWORD *)*v12 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
                v15 = *v12;
              }
              Win32FreePool(v15);
              *v12 = 0LL;
              --*(_DWORD *)(a2 + 456);
            }
            ++v12;
            --v13;
          }
          while ( v13 );
          if ( *(_DWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
        v7 = *(_QWORD *)(a2 + 464);
      }
      RIMFreeHidDesc(v7);
      *(_QWORD *)(a2 + 464) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 472) )
  {
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464));
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 352);
  if ( v8 )
    Win32FreePool(v8);
  v9 = *(_QWORD *)(a2 + 376);
  if ( v9 )
    Win32FreePool(v9);
  return RIMIDEFreeInjectedInfo(a2);
}
