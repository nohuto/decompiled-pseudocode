/*
 * XREFs of ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x180091CE0
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180090E10 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18008ED60 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetAdapterDisplayRect(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3,
        struct tagRECT *a4)
{
  DISPLAYCONFIG_PATH_INFO *v6; // rbp
  DISPLAYCONFIG_MODE_INFO *v8; // rbx
  LONG DisplayConfigBufferSizes; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  LONG DisplayConfig; // eax
  __int64 v15; // rcx
  signed int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  LONG v20; // r8d
  LONG v21; // r9d
  int v22; // eax
  UINT32 numModeInfoArrayElements[4]; // [rsp+30h] [rbp-38h] BYREF
  CProjectionBorderManager *numPathArrayElements; // [rsp+70h] [rbp+8h] BYREF

  numPathArrayElements = this;
  v6 = 0LL;
  v8 = 0LL;
  *a4 = 0LL;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(1u, (UINT32 *)&numPathArrayElements, numModeInfoArrayElements);
  v10 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v11 = 72LL * (unsigned int)numPathArrayElements;
    if ( !is_mul_ok((unsigned int)numPathArrayElements, 0x48uLL) )
      v11 = -1LL;
    v6 = (DISPLAYCONFIG_PATH_INFO *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v11);
    v12 = (unsigned __int64)numModeInfoArrayElements[0] << 6;
    if ( !is_mul_ok(numModeInfoArrayElements[0], 0x40uLL) )
      v12 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)(*(__int64 (__fastcall **)(WPF::HeapBase *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 v12);
    v8 = modeInfoArray;
    if ( v6 )
    {
      if ( modeInfoArray )
      {
        DisplayConfig = QueryDisplayConfig(
                          1u,
                          (UINT32 *)&numPathArrayElements,
                          v6,
                          numModeInfoArrayElements,
                          modeInfoArray,
                          0LL);
        v16 = DisplayConfig;
        if ( DisplayConfig > 0 )
          v16 = (unsigned __int16)DisplayConfig | 0x80070000;
        if ( v16 < 0 )
        {
          WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig(v15);
          v10 = v16;
        }
        else
        {
          v17 = 0LL;
          if ( (_DWORD)numPathArrayElements )
          {
            while ( v6[v17].sourceInfo.adapterId.LowPart != a2->LowPart
                 || v6[v17].sourceInfo.adapterId.HighPart != a2->HighPart
                 || v6[v17].sourceInfo.id != a3 )
            {
              v17 = (unsigned int)(v17 + 1);
              if ( (unsigned int)v17 >= (unsigned int)numPathArrayElements )
                goto LABEL_25;
            }
            v18 = v17;
            v19 = (unsigned __int64)v6[v18].sourceInfo.modeInfoIdx << 6;
            v20 = *(LONG *)((char *)&v8->sourceMode.position.x + v19);
            a4->left = v20;
            v21 = *(LONG *)((char *)&v8->sourceMode.position.y + v19);
            a4->top = v21;
            if ( ((v6[v18].targetInfo.rotation - 2) & 0xFFFFFFFD) != 0 )
            {
              a4->right = v20 + *(UINT32 *)((char *)&v8->sourceMode.width + v19);
              v22 = *(LONG *)((char *)&v8->desktopImageInfo.PathSourceSize.y + v19);
            }
            else
            {
              a4->right = v20 + *(UINT32 *)((char *)&v8->sourceMode.height + v19);
              v22 = *(LONG *)((char *)&v8->desktopImageInfo.PathSourceSize.x + v19);
            }
            a4->bottom = v21 + v22;
            v10 = 0;
          }
        }
      }
      else
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x17u);
      }
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x16u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DisplayConfigBufferSizes, 0x12u);
  }
LABEL_25:
  (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v6);
  (*(void (__fastcall **)(WPF::HeapBase *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v8);
  return v10;
}
