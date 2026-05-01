/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x180080350
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1800DAB10 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1800DAB20 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1800DAB30 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1800DAB40 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x1800DAB50 (-Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WII@EAAKXZ @ 0x1800DAB60 (-Release@CLaunchActivatedEventArgs@@WII@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WJA@EAAKXZ @ 0x1800DAB70 (-Release@CLaunchActivatedEventArgs@@WJA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WMA@EAAKXZ @ 0x1800DAB80 (-Release@CLaunchActivatedEventArgs@@WMA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x1800DAB90 (-Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x1800DABA0 (-Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ @ 0x1800DABB0 (-Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ @ 0x1800DABC0 (-Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::Release(this);
}
