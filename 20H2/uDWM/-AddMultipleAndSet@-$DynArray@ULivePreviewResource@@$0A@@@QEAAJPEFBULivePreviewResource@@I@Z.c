/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z @ 0x180080E28
 * Callers:
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180084750 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewResource,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  _OWORD *v6; // rdx
  int v7; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x88u, 1, a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + 136 * v2);
      *v6 = *(_OWORD *)a2;
      v6[1] = *(_OWORD *)(a2 + 16);
      v6[2] = *(_OWORD *)(a2 + 32);
      v6[3] = *(_OWORD *)(a2 + 48);
      v6[4] = *(_OWORD *)(a2 + 64);
      v6[5] = *(_OWORD *)(a2 + 80);
      v6[6] = *(_OWORD *)(a2 + 96);
      v6 += 8;
      *(v6 - 1) = *(_OWORD *)(a2 + 112);
      *(_QWORD *)v6 = *(_QWORD *)(a2 + 128);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v5;
}
