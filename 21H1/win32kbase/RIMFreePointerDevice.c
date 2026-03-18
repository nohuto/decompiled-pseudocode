/*
 * XREFs of RIMFreePointerDevice @ 0x1C01662FC
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0038434 (UserDeactivateMITInputProcessing.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0167EC8 (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0167FE0 (RIMRemoveFromActiveDevices.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0186A64 (RIMCmFreePointerDeviceContacts.c)
 *     ApiSetFreePointerDeviceCalData @ 0x1C01D11E0 (ApiSetFreePointerDeviceCalData.c)
 *     ApiSetFreePointerDeviceCalibrationInfo @ 0x1C01D12B4 (ApiSetFreePointerDeviceCalibrationInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v18);
  v5 = *(_QWORD **)(a1 + 432);
  while ( v5 != (_QWORD *)(a1 + 432) )
  {
    v6 = v5 - 108;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 == (_QWORD *)a2 )
    {
      if ( (_QWORD *)v5[1] != v4 || (v17 = (_QWORD *)v4[1], (_QWORD *)*v17 != v4) )
        __fastfail(3u);
      *v17 = v5;
      v5[1] = v17;
      v4[1] = v4;
      *v4 = v4;
      break;
    }
  }
  v7 = *(_QWORD *)(a2 + 968);
  if ( v7 )
  {
    Win32FreePool(v7, (__int64)v5, (__int64)v4);
    *(_QWORD *)(a2 + 968) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 880);
  if ( v8 )
  {
    Win32FreePool(v8, (__int64)v5, (__int64)v4);
    *(_QWORD *)(a2 + 880) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 344);
  if ( v9 )
  {
    ApiSetFreePointerDeviceCalData(v9, v5, v4);
    ApiSetFreePointerDeviceCalibrationInfo(*(_QWORD *)(a2 + 344));
    *(_QWORD *)(a2 + 344) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v5, v4);
  v12 = *(_QWORD *)(a2 + 712);
  if ( v12 )
  {
    if ( *(_QWORD *)(v12 + 24) )
    {
      Win32FreePool(*(_QWORD *)(v12 + 24), v10, v11);
      *(_QWORD *)(*(_QWORD *)(a2 + 712) + 24LL) = 0LL;
      v12 = *(_QWORD *)(a2 + 712);
    }
    if ( *(_QWORD *)(v12 + 16) )
    {
      Win32FreePool(*(_QWORD *)(v12 + 16), v10, v11);
      *(_QWORD *)(*(_QWORD *)(a2 + 712) + 16LL) = 0LL;
      v12 = *(_QWORD *)(a2 + 712);
    }
    Win32FreePool(v12, v10, v11);
    *(_QWORD *)(a2 + 712) = 0LL;
  }
  v13 = *(_QWORD *)(a2 + 328);
  if ( v13 )
  {
    Win32FreePool(v13, v10, v11);
    *(_QWORD *)(a2 + 328) = 0LL;
  }
  v14 = *(_QWORD *)(a2 + 768);
  if ( v14 )
  {
    Win32FreePool(v14, v10, v11);
    *(_QWORD *)(a2 + 768) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 312) & 0x400) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 532);
    v16 = *(unsigned int *)(a2 + 720);
    if ( v15 < (unsigned int)v16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
      v15 = *(_DWORD *)(a1 + 532);
      LODWORD(v16) = *(_DWORD *)(a2 + 720);
    }
    *(_DWORD *)(a1 + 532) = v15 - v16;
  }
  if ( *(_QWORD *)(a2 + 864) != a2 + 864 )
    __int2c();
  Win32FreePool(a2, v10, v11);
}
