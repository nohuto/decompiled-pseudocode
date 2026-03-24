/*
 * XREFs of ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C3C58
 * Callers:
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180195914 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180156394 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x1801C3B58 (-EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z.c)
 *     SendRemotingMetaData @ 0x1801C3E44 (SendRemotingMetaData.c)
 */

__int64 __fastcall CSuperWetSource::SendMessageToHostForCreation(CSuperWetSource *this, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // [rsp+28h] [rbp-49h]
  __m256i v12; // [rsp+48h] [rbp-29h]
  __int64 v13; // [rsp+68h] [rbp-9h]
  _OWORD v14[2]; // [rsp+78h] [rbp+7h] BYREF
  __m256i v15; // [rsp+98h] [rbp+27h]
  __int64 v16; // [rsp+B8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v4 = CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue(this);
  if ( v4 < 0 )
  {
    v5 = 85LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 1);
  *(_QWORD *)&v11 = 8LL;
  *((_QWORD *)&v11 + 1) = a2;
  v12.m256i_i64[0] = v7[4];
  v8 = v7[3];
  v14[1] = *(_OWORD *)(v7[2] + 80LL);
  v12.m256i_i32[2] = *(_DWORD *)(v8 + 8);
  v12.m256i_i32[7] = *((_DWORD *)this + 10);
  *(_OWORD *)((char *)&v12.m256i_u64[1] + 4) = *(_OWORD *)(*((_QWORD *)this + 2) + 80LL);
  LODWORD(v13) = *((_DWORD *)this + 11);
  v9 = *((_QWORD *)this + 3);
  v14[0] = v11;
  HIDWORD(v13) = *(_DWORD *)(v9 + 8);
  v15 = v12;
  v16 = v13;
  v4 = SendRemotingMetaData(v14);
  if ( v4 < 0 )
  {
    v5 = 99LL;
    goto LABEL_3;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xx_EventWriteTransfer(v10, &EVTDESC_REGISTER_VAIL_STROKE_ON_HOST, this, a2);
  return 0LL;
}
