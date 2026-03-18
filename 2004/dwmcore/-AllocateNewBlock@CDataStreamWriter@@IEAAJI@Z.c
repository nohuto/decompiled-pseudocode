/*
 * XREFs of ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009F5E4
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18009E3C0 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18009F1E4 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // r14d
  unsigned int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rcx
  CDataStreamWriter *v9; // rcx
  CDataStreamWriter **v11; // rdx

  v2 = *((_DWORD *)this + 10);
  v5 = v2 + a2;
  if ( v2 + a2 < v2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0x20Cu, 0LL);
  }
  else
  {
    v6 = 0;
    v7 = DefaultHeap::Alloc(a2 + 28LL);
    if ( v7 )
    {
      v7[5] = 0;
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)v7 + 1) = 0LL;
      v7[4] = a2;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v9 = (CDataStreamWriter *)*((_QWORD *)this + 4);
      if ( v9 )
      {
        v11 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        if ( *v11 != this )
          __fastfail(3u);
        *(_QWORD *)v9 = this;
        *((_QWORD *)v9 + 1) = v11;
        *v11 = v9;
        *((_QWORD *)this + 1) = v9;
      }
      *((_QWORD *)this + 4) = v7;
      *((_DWORD *)this + 10) = v5;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x210u, 0LL);
    }
  }
  return v6;
}
