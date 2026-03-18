/*
 * XREFs of ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B4898
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800B4180 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180038D54 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x1800B4948 (-IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddBlockData(CDataStreamWriter *this, const void *Src, unsigned int a3)
{
  size_t v4; // rsi
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = a3;
  if ( *((_QWORD *)this + 6) || *((_DWORD *)this + 14) )
  {
    v6 = -2147418113;
    v7 = -2147418113;
    v10 = 304;
  }
  else
  {
    v6 = 0;
    if ( !a3 )
      return v6;
    v8 = CDataStreamWriter::EnsureSize((__int64)this, a3);
    v6 = v8;
    if ( v8 < 0 )
    {
      v10 = 309;
    }
    else
    {
      memcpy_0((void *)(*(unsigned int *)(*((_QWORD *)this + 4) + 20LL) + *((_QWORD *)this + 4) + 24LL), Src, v4);
      v8 = CDataStreamWriter::IncreaseWrittenByteCount(this, v4);
      v6 = v8;
      if ( v8 >= 0 )
        return v6;
      v10 = 313;
    }
    v7 = v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, v10, 0LL);
  return v6;
}
