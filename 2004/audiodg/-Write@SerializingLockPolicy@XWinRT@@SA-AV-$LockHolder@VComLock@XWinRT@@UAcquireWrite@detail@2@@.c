/*
 * XREFs of ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140051B70
 * Callers:
 *     ?Clear@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x14004C670 (-Clear@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Str.c)
 *     ?InsertAtInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceModule@Devices@Media@5@_N@Z @ 0x14004EFB0 (-InsertAtInternal@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredic.c)
 *     ?RemoveAtInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x140050C10 (-RemoveAtInternal@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredic.c)
 *     ?ReplaceAll@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x140050DD0 (-ReplaceAll@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffe.c)
 *     ?SetAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x140051500 (-SetAt@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAud.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall XWinRT::SerializingLockPolicy::Write(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2, _DWORD *a3)
{
  RTL_SRWLOCK *v4; // rcx

  *a1 = a2;
  v4 = a2 + 1;
  if ( LODWORD(a2->Ptr) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v4);
  }
  *a3 = 0;
  return a1;
}
