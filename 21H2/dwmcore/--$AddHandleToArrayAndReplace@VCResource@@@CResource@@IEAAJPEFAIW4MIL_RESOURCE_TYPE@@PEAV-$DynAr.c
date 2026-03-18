/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x180044D44
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180044A1C (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r8
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // esi
  unsigned int v20; // ecx
  struct CResource *v21; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v7 = (unsigned int)*a2;
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v21 = Resource;
    if ( !Resource )
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024890, 0x268u, 0LL);
      return v6;
    }
    v12 = CResource::RegisterNotifier(this, Resource);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x26Cu, 0LL);
      return v6;
    }
    v14 = *(_DWORD *)(a4 + 24);
    v15 = v14 + 1;
    if ( (unsigned int)v15 < v14 )
    {
      v6 = -2147024362;
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( (unsigned int)v15 <= *(_DWORD *)(a4 + 20) )
      {
        v6 = 0;
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * v14) = v21;
        *(_DWORD *)(a4 + 24) = v15;
LABEL_7:
        *a2 = *(_DWORD *)(a4 + 24) - 1;
        return v6;
      }
      v17 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8u, v15, &v21);
      v19 = v17;
      v6 = v17;
      if ( v17 >= 0 )
        goto LABEL_7;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x272u, 0LL);
    CResource::UnRegisterNotifierInternal(this, v21);
  }
  return v6;
}
