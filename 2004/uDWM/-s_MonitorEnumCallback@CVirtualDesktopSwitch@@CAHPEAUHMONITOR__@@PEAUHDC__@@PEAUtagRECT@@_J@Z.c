/*
 * XREFs of ?s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800B53A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

_BOOL8 __fastcall CVirtualDesktopSwitch::s_MonitorEnumCallback(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax

  v4 = (_QWORD *)(a4 + 152);
  v5 = *(_DWORD *)(a4 + 176);
  v6 = v5 + 1;
  if ( v5 + 1 >= v5 )
  {
    v7 = 0;
    if ( v6 > *(_DWORD *)(a4 + 172) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 0x10u, 1, a3);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      *(struct tagRECT *)(*v4 + 16LL * *(unsigned int *)(a4 + 176)) = *a3;
      *(_DWORD *)(a4 + 176) = v6;
    }
  }
  else
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v7 >= 0;
}
