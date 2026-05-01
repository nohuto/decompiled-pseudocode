/*
 * XREFs of ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803463FC
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034E4B0 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180346B4C (--0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &>(
        _QWORD *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  _DWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0xB0uLL);
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj<KBViewInfo>::`vftable';
  KBViewInfo::KBViewInfo((KBViewInfo *)(v5 + 4), *a2);
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
