/*
 * XREFs of ?Close@HANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@SA_NPEAX@Z @ 0x18009295C
 * Callers:
 *     ?InternalClose@?$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x180093BD0 (-InternalClose@-$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Mi.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close(void *a1)
{
  return CloseHandle(a1);
}
