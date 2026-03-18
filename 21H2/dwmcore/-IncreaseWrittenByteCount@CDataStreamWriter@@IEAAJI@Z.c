/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x1800BD694
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180042B58 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800BD47C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v5; // edx

  v2 = *((_QWORD *)this + 4);
  v3 = *(_DWORD *)(v2 + 20);
  if ( v3 + a2 < v3 )
  {
    *(_DWORD *)(v2 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0x247u);
  }
  else
  {
    *(_DWORD *)(v2 + 20) = v3 + a2;
    result = 0LL;
    v5 = *((_DWORD *)this + 11) + a2;
    if ( v5 >= *((_DWORD *)this + 11) )
    {
      *((_DWORD *)this + 11) = v5;
      return result;
    }
    *((_DWORD *)this + 11) = -1;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0x248u);
  }
  return 2147942934LL;
}
