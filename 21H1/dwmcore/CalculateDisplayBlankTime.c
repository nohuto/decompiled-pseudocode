/*
 * XREFs of CalculateDisplayBlankTime @ 0x1801A8178
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A8914 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A7B4C (--$_Resize@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A7C0C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801A9110 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CalculateDisplayBlankTime(__int64 a1, int a2, float *a3)
{
  DISPLAYCONFIG_MODE_INFO *v3; // rbx
  __int64 v4; // r14
  DISPLAYCONFIG_MODE_INFO *v5; // rdi
  DISPLAYCONFIG_PATH_INFO *v7; // rsi
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v10; // r8d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // rax
  unsigned int modeInfoArray; // [rsp+20h] [rbp-50h]
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-40h] BYREF
  DISPLAYCONFIG_MODE_INFO *v24[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h]
  DISPLAYCONFIG_PATH_INFO *pathArray[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  UINT32 numModeInfoArrayElements; // [rsp+C8h] [rbp+58h] BYREF

  v27 = 0LL;
  *(_OWORD *)v24 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  *(_OWORD *)pathArray = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  do
  {
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
    if ( DisplayConfigBufferSizes )
    {
      v13 = 36LL;
      goto LABEL_26;
    }
    std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize<std::_Value_init_tag>((__int64 *)pathArray, numPathArrayElements);
    v11 = v3 - v5;
    if ( numModeInfoArrayElements >= v11 )
    {
      if ( numModeInfoArrayElements <= v11 )
        goto LABEL_11;
      if ( numModeInfoArrayElements > (unsigned __int64)((v4 - (__int64)v5) >> 6) )
      {
        std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
          (__int64)v24,
          numModeInfoArrayElements);
        v4 = v25;
        v3 = v24[1];
        v5 = v24[0];
        goto LABEL_11;
      }
      v12 = numModeInfoArrayElements - v11;
      if ( v12 )
      {
        memset_0(v3, 0, v12 << 6);
        v3 += v12;
      }
    }
    else
    {
      v3 = &v5[(unsigned __int64)numModeInfoArrayElements];
    }
    v24[1] = v3;
LABEL_11:
    v7 = pathArray[0];
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 pathArray[0],
                                 &numModeInfoArrayElements,
                                 v5,
                                 0LL);
  }
  while ( DisplayConfigBufferSizes == 122 );
  if ( DisplayConfigBufferSizes )
  {
    v13 = 49LL;
LABEL_26:
    v16 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v13,
            v10,
            (const char *)DisplayConfigBufferSizes,
            modeInfoArray);
    goto LABEL_27;
  }
  v14 = 0;
  if ( numModeInfoArrayElements )
  {
    while ( 1 )
    {
      v15 = (unsigned __int64)v14 << 6;
      if ( *(DISPLAYCONFIG_MODE_INFO_TYPE *)((char *)&v5->infoType + v15) == DISPLAYCONFIG_MODE_INFO_TYPE_TARGET
        && (*(unsigned int *)((char *)&v5->adapterId.LowPart + v15) | (unsigned __int64)((__int64)(int)HIDWORD(*(unsigned __int64 *)((char *)&v5->adapterId + v15)) << 32)) == a1
        && *(UINT32 *)((char *)&v5->id + v15) == a2 )
      {
        break;
      }
      if ( ++v14 >= numModeInfoArrayElements )
        goto LABEL_19;
    }
    v17 = (unsigned __int64)v14 << 6;
    v18 = *(UINT64 *)((char *)&v5->targetMode.targetVideoSignalInfo.pixelRate + v17);
    if ( v18 < 0 )
    {
      v20 = *(UINT64 *)((_BYTE *)&v5->targetMode.targetVideoSignalInfo.pixelRate + v17) & 1 | (*(UINT64 *)((char *)&v5->targetMode.targetVideoSignalInfo.pixelRate + v17) >> 1);
      v19 = (float)(int)v20 + (float)(int)v20;
    }
    else
    {
      v19 = (float)(int)v18;
    }
    *a3 = (float)(*(UINT32 *)((char *)&v5->targetMode.targetVideoSignalInfo.totalSize.cx + v17)
                * (*(UINT32 *)((char *)&v5->targetMode.targetVideoSignalInfo.totalSize.cy + v17)
                 - *(UINT32 *)((char *)&v5->targetMode.targetVideoSignalInfo.activeSize.cy + v17)))
        / v19;
  }
  else
  {
LABEL_19:
    *a3 = 0.001;
  }
  v16 = 0;
LABEL_27:
  if ( v5 )
    std::_Deallocate<16,0>(v5, (v4 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFC0uLL);
  if ( v7 )
    std::_Deallocate<16,0>(v7, 72 * ((v27 - (__int64)v7) / 72));
  return v16;
}
