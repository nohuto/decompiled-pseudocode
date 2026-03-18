/*
 * XREFs of ?UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z @ 0x17ECA6
 * Callers:
 *     _xxxDDETrackWindowDying@8 @ 0x180709 (_xxxDDETrackWindowDying@8.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

struct tagDDECONV *__thiscall UnlinkConv(_DWORD *this)
{
  int v2; // ecx
  int Prop; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // esi

  this[10] |= 0x1000u;
  v2 = this[5];
  if ( !v2 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(v2, 4, 0xEu, 11, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, (char)this);
    v2 = this[5];
  }
  Prop = _GetProp(v2, (unsigned __int16)atomDDETrack, 1);
  if ( !Prop )
    return 0;
  v5 = 0;
  while ( (_DWORD *)Prop != this )
  {
    v5 = Prop;
    Prop = *(_DWORD *)(Prop + 12);
    if ( !Prop )
      return 0;
  }
  v6 = this[3];
  if ( v5 )
  {
    HMAssignmentLock(v4, v5 + 12);
  }
  else
  {
    v7 = this[5];
    if ( v6 )
      InternalSetProp(v7, (unsigned __int16)atomDDETrack, v6, 1);
    else
      InternalRemoveProp(v7, atomDDETrack, 1);
  }
  v8 = HMAssignmentUnlock(this + 3);
  HMUnlockObject(this);
  return (struct tagDDECONV *)v8;
}
