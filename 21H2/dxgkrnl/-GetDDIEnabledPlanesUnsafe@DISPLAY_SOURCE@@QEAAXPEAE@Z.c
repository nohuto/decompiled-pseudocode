/*
 * XREFs of ?GetDDIEnabledPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAE@Z @ 0x1C0212D90
 * Callers:
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1C0212D20 (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C00E07E8 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::GetDDIEnabledPlanesUnsafe(DISPLAY_SOURCE *this, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rsi
  __int64 v4; // rax
  unsigned int i; // ebx
  bool v6; // di
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  v2 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 544LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 9318LL;
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = 0;
    if ( i < *((_DWORD *)this + 934) )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
      if ( LatestPlaneConfigInternal )
        v6 = (*((_BYTE *)LatestPlaneConfigInternal + 8) & 2) != 0;
    }
    *v2++ = v6;
  }
}
