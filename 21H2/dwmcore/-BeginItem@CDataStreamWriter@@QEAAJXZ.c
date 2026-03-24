/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800C0218
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18005D71C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  CDataStreamWriter *v1; // r9
  int v2; // r10d
  _DWORD *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax

  v1 = this;
  if ( *((_QWORD *)this + 6)
    || *((_DWORD *)this + 14)
    || (this = (CDataStreamWriter *)*((_QWORD *)this + 4),
        (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 5)) < 4) )
  {
    v8 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0x89u, 0LL);
  }
  else
  {
    v2 = -1;
    v3 = (_DWORD *)((char *)this + *((unsigned int *)this + 5) + 24);
    v4 = -1;
    *((_QWORD *)v1 + 6) = v3;
    *v3 = 0;
    v5 = *((_QWORD *)v1 + 4);
    *((_DWORD *)v1 + 14) = 4;
    v6 = *(_DWORD *)(v5 + 20);
    v7 = v6 + 4;
    if ( (unsigned int)v7 >= v6 )
      v4 = v6 + 4;
    v8 = (unsigned int)v7 < v6 ? 0x80070216 : 0;
    *(_DWORD *)(v5 + 20) = v4;
    if ( (unsigned int)v7 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v8, 0x232u, 0LL);
    }
    else
    {
      v9 = *((unsigned int *)v1 + 11);
      v10 = v9 + 4;
      if ( (int)v9 + 4 >= (unsigned int)v9 )
        v2 = v9 + 4;
      v8 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
      *((_DWORD *)v1 + 11) = v2;
      if ( v10 < (unsigned int)v9 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x233u, 0LL);
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Au, 0LL);
  }
  return (unsigned int)v8;
}
