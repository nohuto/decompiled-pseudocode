/*
 * XREFs of ?get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18023AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ApplicationViewBackedViewHostItem_get_Size@AEAIAEAMAEAM@HolographicPositionerTelemetry@@SAXAEAIAEAM1@Z @ 0x1802362D8 (--$ApplicationViewBackedViewHostItem_get_Size@AEAIAEAMAEAM@HolographicPositionerTelemetry@@SAXAE.c)
 *     ?get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x18023A620 (-get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_Size(
        ApplicationViewBackedViewHostItem *this,
        struct Windows::Foundation::Size *a2)
{
  int CompositionId; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 59);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 60);
  CompositionId = ApplicationViewBackedViewHostItem::get_CompositionId(this, &v7);
  v4 = CompositionId;
  if ( CompositionId >= 0 )
  {
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_get_Size<unsigned int &,float &,float &>(
      &v7,
      (int *)a2,
      (int *)a2 + 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)CompositionId);
    return v4;
  }
}
