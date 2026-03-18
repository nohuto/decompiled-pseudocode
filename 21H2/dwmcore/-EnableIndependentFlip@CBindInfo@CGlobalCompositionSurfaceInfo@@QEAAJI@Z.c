/*
 * XREFs of ?EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x1800161B0
 * Callers:
 *     ?EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z @ 0x180016160 (-EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x18024956C (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        int a2)
{
  int v3; // ecx
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *((_DWORD *)this + 52);
  v9 = 0;
  v4 = 0;
  v5 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         1LL,
         *((_BYTE *)this + 189) != 0,
         *((_DWORD *)this + 54),
         1 << v3,
         &v10,
         &v9);
  if ( v5 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0xxqqqqq_EventWriteTransfer(
        *((_DWORD *)this + 53),
        v6,
        *(_DWORD *)(*(_QWORD *)this + 40LL),
        *((_QWORD *)this + 3),
        *((_DWORD *)this + 53),
        1,
        *((_BYTE *)this + 189) != 0,
        *((_DWORD *)this + 54),
        v9);
    *((_DWORD *)this + 53) = v10;
    *((_BYTE *)this + 188) = 1;
  }
  else
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v5 | 0x10000000, 0x39Fu, 0LL);
  }
  return v4;
}
