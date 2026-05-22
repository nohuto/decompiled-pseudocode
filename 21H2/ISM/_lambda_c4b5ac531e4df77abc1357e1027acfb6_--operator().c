/*
 * XREFs of _lambda_c4b5ac531e4df77abc1357e1027acfb6_::operator() @ 0x18009D000
 * Callers:
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x18009D270 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18006600C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

signed int __fastcall lambda_c4b5ac531e4df77abc1357e1027acfb6_::operator()(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  ***(_BYTE ***)a1 = **(_BYTE **)(a1 + 8);
  v1 = NtRIMDeviceIoControl(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL),
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL),
         721298LL,
         0LL,
         0,
         **(_QWORD **)a1,
         **(_DWORD **)(a1 + 24),
         &v3,
         0);
  if ( v1 >= 0 )
    return 0;
  else
    return wil::details::NtStatusToHr((wil::details *)(unsigned int)v1);
}
