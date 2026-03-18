/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800D0788
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  CDataStreamWriter *v1; // rdx
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rcx

  v1 = this;
  if ( *((_QWORD *)this + 6)
    || *((_DWORD *)this + 14)
    || (this = (CDataStreamWriter *)*((_QWORD *)this + 4),
        (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 5)) < 4) )
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147418113, 0x89u);
    return v7;
  }
  v2 = (_DWORD *)((char *)this + *((unsigned int *)this + 5) + 24);
  *((_QWORD *)v1 + 6) = v2;
  *v2 = 0;
  v3 = *((_QWORD *)v1 + 4);
  *((_DWORD *)v1 + 14) = 4;
  v4 = *(_DWORD *)(v3 + 20);
  if ( v4 + 4 < v4 )
  {
    v7 = -2147024362;
    *(_DWORD *)(v3 + 20) = -1;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, -2147024362, 0x247u);
    goto LABEL_10;
  }
  *(_DWORD *)(v3 + 20) = v4 + 4;
  v5 = *((_DWORD *)v1 + 11);
  v6 = v5 + 4;
  if ( (unsigned int)v6 < v5 )
  {
    *((_DWORD *)v1 + 11) = -1;
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024362, 0x248u);
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024362, 0x9Au);
    return v7;
  }
  *((_DWORD *)v1 + 11) = v6;
  return 0;
}
