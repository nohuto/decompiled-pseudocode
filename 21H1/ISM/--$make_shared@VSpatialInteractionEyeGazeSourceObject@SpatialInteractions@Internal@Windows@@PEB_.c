/*
 * XREFs of ??$make_shared@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@PEB_WPEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@@0@$$QEAPEB_W$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800DB624
 * Callers:
 *     ?StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DCBA0 (-StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Intern.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ??0SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@QEAA@PEB_WPEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800DB6E0 (--0SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@QEAA@PEB_WPEAUISp.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject,wchar_t const *,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
        _QWORD *a1,
        const wchar_t **a2,
        struct Windows::Internal::Holographic::ISpatialObjectDevice **a3,
        struct Windows::Internal::Holographic::ISpatialObject **a4)
{
  _DWORD *v9; // [rsp+40h] [rbp+8h]

  v9 = operator new(0x538uLL);
  v9[2] = 1;
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject>::`vftable';
  Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::SpatialInteractionEyeGazeSourceObject(
    (Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *)(v9 + 4),
    *a2,
    *a3,
    *a4);
  *a1 = v9 + 4;
  a1[1] = v9;
  return a1;
}
