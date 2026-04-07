/*
 * XREFs of ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B646C
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002BA70 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800B6568 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B664C (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B66B8 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B6F68 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnail::FreezeDesktopThumbnail(struct CWindowData *a1, bool a2)
{
  int DesktopThumbnail; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  CDesktopThumbnail *v7; // rdi
  CDesktopThumbnailBase *v8; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  CBaseObject *v11; // rdi
  int v12; // eax
  struct tagRECT v14; // [rsp+30h] [rbp-28h] BYREF
  CDesktopThumbnail *v15; // [rsp+70h] [rbp+18h] BYREF
  CBaseObject *v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
  v5 = DesktopThumbnail;
  if ( DesktopThumbnail >= 0 )
  {
    v6 = *((_QWORD *)a1 + 15);
    v7 = v15;
    v8 = v15;
    *((_QWORD *)v15 + 34) = v6;
    updated = CDesktopThumbnailBase::UpdateWindowClones(v8);
    v5 = updated;
    if ( updated >= 0 )
    {
      v14 = 0LL;
      PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v7, &v14, &v16);
      v11 = v16;
      v5 = PerMonitorDesktopThumbnail;
      if ( PerMonitorDesktopThumbnail >= 0 )
      {
        v12 = CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(v16, a2);
        v5 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xE7u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0xE6u);
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xE4u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopThumbnail, 0xE3u);
  }
  return v5;
}
