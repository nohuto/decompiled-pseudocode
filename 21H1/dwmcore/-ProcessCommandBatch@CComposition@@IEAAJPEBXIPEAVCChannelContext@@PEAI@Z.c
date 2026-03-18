/*
 * XREFs of ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x180080A10
 * Callers:
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18007EC90 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18007F530 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x18007E5AC (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800CF69C (-IsOOM@@YA_NJ@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180159A30 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180218324 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180218580 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CComposition::ProcessCommandBatch(
        CComposition *this,
        _DWORD *a2,
        unsigned int a3,
        unsigned int **a4,
        unsigned int *a5)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  char *v9; // r15
  unsigned int v10; // r13d
  struct CChannelContext *v11; // rdi
  unsigned int *v12; // rax
  unsigned int *v13; // r14
  int v14; // ebx
  unsigned __int64 v15; // rax
  CComposition *v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // edi
  char *v20; // rax
  unsigned int v21; // eax
  bool v22; // sf
  CAnimationLoggingManager *v23; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // ecx
  void *StackCaptureRootFailureAddress; // rax
  unsigned int v29[2]; // [rsp+20h] [rbp-48h]
  unsigned int v31; // [rsp+80h] [rbp+18h]
  unsigned int *v33; // [rsp+90h] [rbp+28h]

  v7 = 0LL;
  v8 = a3;
  v9 = 0LL;
  v31 = 0;
  v10 = 0;
  v11 = (struct CChannelContext *)a4;
  *a5 = 0;
  ++*((_DWORD *)a4 + 20);
  v12 = a4[3];
  *((_QWORD *)this + 60) = a2;
  *((_DWORD *)this + 122) = a3;
  v33 = v12;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0x_EventWriteTransfer(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, a3);
    v12 = v33;
    v7 = 0LL;
  }
  v13 = a2;
  v14 = -2147467259;
  if ( !v8 )
  {
    v14 = 1;
    goto LABEL_11;
  }
  if ( v8 >= 8 )
  {
    v15 = (unsigned int)*a2;
    if ( (unsigned int)v15 >= 8 && (v15 & 3) == 0 && v15 <= v8 )
    {
      v7 = (unsigned int)a2[1];
      v9 = (char *)(a2 + 1);
      v31 = a2[1];
      v10 = v15 - 4;
      v13 = (_DWORD *)((char *)a2 + v15);
      v14 = 0;
    }
    v12 = v33;
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v14, 0x1DBu, 0LL);
    v16 = this;
LABEL_35:
    if ( !IsOOM(v14) )
    {
      MilUnexpectedError(v27, L"batch processing error");
      StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v14);
      CComposition::FailFastOnMalformedPacket(v16, (unsigned int)v14, StackCaptureRootFailureAddress);
    }
    return (unsigned int)v14;
  }
LABEL_11:
  while ( v14 != 1 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMMAND_PROCESSED_ONBEHALF,
        *((unsigned int *)v11 + 5),
        (unsigned int)v7);
      v7 = v31;
      v12 = v33;
    }
    *(_QWORD *)v29 = v11;
    v16 = this;
    v17 = CComposition::ProcessMessage(this, v7, v9, v10, *(_QWORD *)v29, v12);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1F5u, 0LL);
      goto LABEL_28;
    }
    v19 = -2147467259;
    v20 = (char *)a2 + v8 - (_QWORD)v13;
    if ( v20 )
    {
      if ( (unsigned __int64)v20 >= 8 )
      {
        v18 = *v13;
        if ( (unsigned int)v18 >= 8 && (v18 & 3) == 0 && v18 <= (unsigned __int64)v20 )
        {
          v21 = v13[1];
          v9 = (char *)(v13 + 1);
          v13 = (unsigned int *)((char *)v13 + v18);
          v31 = v21;
          v19 = 0;
          v10 = v18 - 4;
        }
      }
      v14 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0x1FFu, 0LL);
    }
    else
    {
      v9 = 0LL;
      v19 = 1;
      v10 = 0;
      v14 = 1;
    }
    ++*a5;
    v7 = v31;
    v22 = v19 < 0;
    v11 = (struct CChannelContext *)a4;
    v12 = v33;
    if ( v22 )
    {
      v16 = this;
      goto LABEL_35;
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 34) + 416LL) |= 2u;
  v23 = (CAnimationLoggingManager *)*((_QWORD *)v11 + 7);
  if ( v23 && (v25 = CAnimationLoggingManager::LogDebugPropertyUpdates(v23, *((_QWORD *)this + 44)), v14 = v25, v25 < 0) )
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x132u, 0LL);
  else
    v14 = 0;
  v16 = this;
LABEL_28:
  if ( v14 < 0 )
    goto LABEL_35;
  return (unsigned int)v14;
}
