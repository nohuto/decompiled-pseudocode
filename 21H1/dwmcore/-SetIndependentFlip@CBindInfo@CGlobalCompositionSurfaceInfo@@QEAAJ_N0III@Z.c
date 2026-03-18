/*
 * XREFs of ?SetIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N0III@Z @ 0x1801FCA70
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18002C75C (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x180069F40 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z.c)
 *     ?SetIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_N0III@Z @ 0x1801FCC60 (-SetIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_N0III@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800AC4AC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801FCF18 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  char v6; // al
  unsigned int v7; // edi
  char v8; // r12
  unsigned int v10; // r15d
  unsigned int v13; // ebp
  int v14; // eax
  __int64 v15; // rcx
  int v16; // edx
  struct CComposition *v17; // rcx
  int v19; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a4;
  v6 = *((_BYTE *)this + 148);
  v7 = 0;
  v8 = *((_BYTE *)this + 149);
  v10 = a6;
  if ( v6 && a2 && *((_DWORD *)this + 41) != a6 )
  {
    v7 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304309, 0x32Cu, 0LL);
  }
  else
  {
    v13 = a5;
    if ( a2 != v6 || v6 && (a3 != v8 || a5 != *((_DWORD *)this + 40)) )
    {
      v19 = 0;
      v14 = NtSetCompositionSurfaceIndependentFlipInfo(
              *(_QWORD *)(*(_QWORD *)this + 32LL),
              (char *)this + 24,
              a2,
              a3,
              a5,
              1 << a6,
              &v20,
              &v19);
      if ( v14 >= 0 )
      {
        v16 = v20;
        *((_DWORD *)this + 39) = v20;
        *((_BYTE *)this + 148) = a2;
        *((_BYTE *)this + 149) = a3;
        *((_DWORD *)this + 40) = v13;
        *((_DWORD *)this + 41) = v10;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xxqqqqq_EventWriteTransfer(
            *(_DWORD *)(*(_QWORD *)this + 40LL),
            v16,
            *(_DWORD *)(*(_QWORD *)this + 40LL),
            *((_QWORD *)this + 3),
            v16,
            a2,
            a3,
            v13,
            v19);
        if ( !a2 && v19 )
        {
          v17 = g_pComposition;
          *((_QWORD *)g_pComposition + 140) = *((_QWORD *)g_pComposition + 44);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v17 + 63) + 96LL))(
            *((_QWORD *)v17 + 63),
            0LL,
            512LL);
        }
        if ( !v8 && (!a2 || *((_BYTE *)this + 149)) )
          CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
      }
      else
      {
        v7 = v14 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14 | 0x10000000, 0x342u, 0LL);
      }
    }
  }
  return v7;
}
