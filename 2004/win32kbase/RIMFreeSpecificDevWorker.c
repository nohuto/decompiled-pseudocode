/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C0063E6C
 * Callers:
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C005CD68 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C00657A4 (RawInputManagerObjectDelete.c)
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0153148 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C0019CAC (RIMHidTLCActive.c)
 *     RIMFreeHidDesc @ 0x1C003E960 (RIMFreeHidDesc.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00591F0 (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0062160 (RIMFreeHidTLCInfo.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Feature_Servicing_2108c_32183379__private_IsEnabled @ 0x1C00D1108 (Feature_Servicing_2108c_32183379__private_IsEnabled.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0161B78 (RIMReleasePointerDeviceInfo.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01703B4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rcx
  RIMDeadzone **v11; // rdi
  __int64 v12; // rsi
  RIMDeadzone *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  RIMDeadzone *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_QWORD *)(a2 + 104) != a2 + 104 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *(_QWORD *)(a2 + 216);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a2 + 320);
  if ( v7 )
    Win32FreePool(v7);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v8 = *(_QWORD *)(a2 + 472);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 472)) )
        RIMFreeHidTLCInfo(*(__int64 **)(a2 + 472));
    }
    v10 = *(_QWORD *)(a2 + 464);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 456) )
        {
          v11 = (RIMDeadzone **)(a2 + 416);
          v12 = 5LL;
          do
          {
            v13 = *v11;
            if ( *v11 )
            {
              RIMDeadzone::Release(v13);
              v17 = *v11;
              if ( *((_DWORD *)*v11 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v15, v16);
                v17 = *v11;
              }
              Win32FreePool(v17);
              *v11 = 0LL;
              --*(_DWORD *)(a2 + 456);
            }
            ++v11;
            --v12;
          }
          while ( v12 );
          if ( *(_DWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, a2, a3, a4);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
        v10 = *(_QWORD *)(a2 + 464);
      }
      RIMFreeHidDesc(v10, a2, a3, a4);
      *(_QWORD *)(a2 + 464) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 472) )
  {
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464), a2, a3, a4);
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  if ( (unsigned int)Feature_Servicing_2108c_32183379__private_IsEnabled() )
  {
    if ( !*(_BYTE *)(a2 + 48) )
    {
      v18 = *(_QWORD *)(a2 + 904);
      if ( v18 )
      {
        Win32FreePool(v18);
        *(_QWORD *)(a2 + 904) = 0LL;
        *(_WORD *)(a2 + 898) = 0;
      }
    }
  }
  v19 = *(_QWORD *)(a2 + 352);
  if ( v19 )
    Win32FreePool(v19);
  v20 = *(_QWORD *)(a2 + 376);
  if ( v20 )
    Win32FreePool(v20);
  return RIMIDEFreeInjectedInfo(a2);
}
