/*
 * XREFs of ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C6F4
 * Callers:
 *     ?SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180129CB0 (-SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ.c)
 *     ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x18012C748 (-Store@SpatialAudioStateIO@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioIO::SetPropertyValue(
        SpatialAudioIO *this,
        struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  __int64 v3; // r10

  v3 = *((_QWORD *)this + 67);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v3 + 96LL))(
             v3,
             (char *)this + 8,
             0LL,
             a2,
             a3);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *, struct _tagpropertykey *))(**((_QWORD **)this + 66) + 48LL))(
             *((_QWORD *)this + 66),
             a2,
             a3,
             a2);
}
