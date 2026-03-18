/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800BD6D0
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180042B58 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180070B48 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  CDataStreamWriter *v2; // rbx
  unsigned int v3; // ebp
  _DWORD *v4; // rcx
  unsigned int v5; // esi
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // r8d
  CDataStreamWriter **v10; // rax
  CDataStreamWriter *v11; // rax
  CDataStreamWriter **v12; // rdx
  int v13; // eax
  int NewBlock; // eax
  __int64 v15; // rcx
  CDataStreamWriter **v16; // rdx
  unsigned int v17; // [rsp+20h] [rbp-18h]

  v2 = this;
  v3 = (a2 + 3) & 0xFFFFFFFC;
  if ( v3 < a2 )
  {
    v17 = 402;
    goto LABEL_27;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 4);
  v5 = v3 < a2 ? 0x80070216 : 0;
  if ( v4 )
  {
    if ( v4[4] - v4[5] >= v3 )
      return v5;
    if ( !v4[5] )
    {
      DefaultHeap::Free(v4);
      *((_QWORD *)v2 + 4) = 0LL;
    }
  }
  for ( this = (CDataStreamWriter *)*((_QWORD *)v2 + 2);
        this != (CDataStreamWriter *)((char *)v2 + 16);
        this = *(CDataStreamWriter **)this )
  {
    v7 = *((_DWORD *)this + 4);
    if ( v7 >= v3 )
    {
      v8 = *((_DWORD *)v2 + 10);
      v9 = v7 + v8;
      if ( v7 + v8 < v8 )
      {
        *((_DWORD *)v2 + 10) = -1;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0x1B5u);
        return (unsigned int)-2147024362;
      }
      v10 = (CDataStreamWriter **)*((_QWORD *)v2 + 4);
      v5 = 0;
      *((_DWORD *)v2 + 10) = v9;
      if ( v10 )
      {
        v16 = (CDataStreamWriter **)*((_QWORD *)v2 + 1);
        if ( *v16 == v2 )
        {
          *v10 = v2;
          v10[1] = (CDataStreamWriter *)v16;
          *v16 = (CDataStreamWriter *)v10;
          *((_QWORD *)v2 + 1) = v10;
          goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v11 = *(CDataStreamWriter **)this;
        if ( *(CDataStreamWriter **)(*(_QWORD *)this + 8LL) == this )
        {
          v12 = (CDataStreamWriter **)*((_QWORD *)this + 1);
          if ( *v12 == this )
          {
            *v12 = v11;
            *((_QWORD *)v11 + 1) = v12;
            *((_DWORD *)this + 5) = 0;
            *((_QWORD *)v2 + 4) = this;
            return v5;
          }
        }
      }
      __fastfail(3u);
    }
  }
  v13 = 0x4000;
  if ( *((_DWORD *)v2 + 10) < 0x4000u )
    v13 = *((_DWORD *)v2 + 10);
  if ( v13 + v3 < v3 )
  {
    v17 = 501;
LABEL_27:
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, v17);
    return v5;
  }
  NewBlock = CDataStreamWriter::AllocateNewBlock(v2, v13 + v3);
  v5 = NewBlock;
  if ( NewBlock < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, NewBlock, 0x1F7u);
  return v5;
}
