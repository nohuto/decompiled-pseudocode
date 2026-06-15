/*
 * XREFs of ?_Free@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@CAXPEAUEventRegistrationToken@@I@Z @ 0x140028234
 * Callers:
 *     ?Clear@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1400222F0 (-Clear@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Win.c)
 *     ?_EraseAll@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAUEventRegistrationToken@@PEAI@Z @ 0x1400281A4 (-_EraseAll@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::_Free(
        void *a1)
{
  if ( a1 )
    free(a1);
}
