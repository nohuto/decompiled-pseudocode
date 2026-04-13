/*
 * XREFs of _CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML_::_1_::dtor$7 @ 0x1800D65F9
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180034868 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 72));
  }
}
