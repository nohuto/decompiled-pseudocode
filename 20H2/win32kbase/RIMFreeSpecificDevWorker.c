/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C00C2D7C
 * Callers:
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     RawInputManagerObjectDelete @ 0x1C0029244 (RawInputManagerObjectDelete.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00BD338 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C0028A94 (RIMHidTLCActive.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     RIMFreeHidDesc @ 0x1C006E19C (RIMFreeHidDesc.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00B8EB0 (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00BE500 (RIMFreeHidTLCInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F618 (RIMReleasePointerDeviceInfo.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C016DF84 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx

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
        RIMFreeHidTLCInfo(*(_QWORD *)(a2 + 472));
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
              v17 = (__int64)*v11;
              if ( *((_DWORD *)*v11 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v15, v16);
                v17 = (__int64)*v11;
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
  v18 = *(_BYTE *)(a2 + 48);
  if ( v18 == 3 )
  {
    if ( !*(_QWORD *)(a2 + 472) )
      goto LABEL_33;
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464), a2, a3, a4);
    v18 = *(_BYTE *)(a2 + 48);
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  if ( !v18 )
  {
    v19 = *(_QWORD *)(a2 + 904);
    if ( v19 )
    {
      Win32FreePool(v19);
      *(_QWORD *)(a2 + 904) = 0LL;
      *(_WORD *)(a2 + 898) = 0;
    }
  }
LABEL_33:
  v20 = *(_QWORD *)(a2 + 352);
  if ( v20 )
    Win32FreePool(v20);
  v21 = *(_QWORD *)(a2 + 376);
  if ( v21 )
    Win32FreePool(v21);
  RIMIDEFreeInjectedInfo(a2);
}
