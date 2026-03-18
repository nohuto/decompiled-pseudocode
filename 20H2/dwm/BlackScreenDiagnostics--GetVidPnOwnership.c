/*
 * XREFs of BlackScreenDiagnostics::GetVidPnOwnership @ 0x140008E1C
 * Callers:
 *     ?GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x140008D88 (-GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x1400086A4 (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x140008710 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x14000980C (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x140009848 (-_Tidy@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEA.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetVidPnOwnership(_DWORD *a1)
{
  int DisplayConfigBufferSizes; // ebx
  DISPLAYCONFIG_PATH_INFO *v3; // rsi
  DISPLAYCONFIG_MODE_INFO *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-19h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+34h] [rbp-15h] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-11h] BYREF
  DISPLAYCONFIG_MODE_INFO *modeInfoArray[3]; // [rsp+40h] [rbp-9h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray[3]; // [rsp+58h] [rbp+Fh] BYREF
  LUID adapterId; // [rsp+70h] [rbp+27h] BYREF
  int v15; // [rsp+78h] [rbp+2Fh]

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    if ( !numPathArrayElements )
    {
      *a1 = 4;
      return (unsigned int)DisplayConfigBufferSizes;
    }
    std::vector<DISPLAYCONFIG_PATH_INFO>::vector<DISPLAYCONFIG_PATH_INFO>((__int64 *)pathArray, numPathArrayElements);
    std::vector<DISPLAYCONFIG_MODE_INFO>::vector<DISPLAYCONFIG_MODE_INFO>(
      (void **)modeInfoArray,
      numModeInfoArrayElements);
    v3 = pathArray[0];
    v4 = modeInfoArray[0];
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 pathArray[0],
                                 &numModeInfoArrayElements,
                                 modeInfoArray[0],
                                 0LL);
    if ( DisplayConfigBufferSizes < 0 )
    {
      *a1 = 5;
      goto LABEL_22;
    }
    v5 = 0LL;
    if ( numPathArrayElements )
    {
      while ( *(_QWORD *)&v4[(unsigned __int64)v3[v5].sourceInfo.modeInfoIdx].desktopImageInfo.DesktopImageRegion.top )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= numPathArrayElements )
          goto LABEL_22;
      }
      v15 = 0;
      v6 = v5;
      adapterId = v3[v5].sourceInfo.adapterId;
      v7 = D3DKMTOpenAdapterFromLuid(&adapterId);
      if ( v7 < 0 )
      {
        *a1 = 6;
        goto LABEL_20;
      }
      v11[0] = v15;
      v11[1] = v3[v6].sourceInfo.id;
      v7 = D3DKMTCheckVidPnExclusiveOwnership(v11);
      if ( v7 == -1071775738 )
      {
        *a1 = 2;
      }
      else if ( v7 == -1071775732 )
      {
        *a1 = 3;
      }
      else
      {
        if ( v7 )
        {
          *a1 = 7;
LABEL_20:
          DisplayConfigBufferSizes = RtlNtStatusToDosError(v7);
          goto LABEL_22;
        }
        *a1 = 1;
      }
      DisplayConfigBufferSizes = 0;
    }
LABEL_22:
    std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(modeInfoArray);
    std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy(pathArray);
  }
  return (unsigned int)DisplayConfigBufferSizes;
}
