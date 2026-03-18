/*
 * XREFs of _GetInheritedMonitor@4 @ 0x35826
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _DetectNewMonitor@8 @ 0x150BE3 (_DetectNewMonitor@8.c)
 * Callees:
 *     ?IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z @ 0x359D0 (-IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _IsTitleWindow@8 @ 0xA3D1E (_IsTitleWindow@8.c)
 */

int __thiscall GetInheritedMonitor(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  int Prop; // eax
  int v5; // ebx
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  struct tagWND *v14; // [esp+0h] [ebp-28h]
  struct tagWND *v15; // [esp+4h] [ebp-24h]
  _DWORD v16[6]; // [esp+10h] [ebp-18h] BYREF

  v2 = 0;
  v3 = this[14];
  if ( !v3 )
    return v2;
  if ( v3 != _GetDesktopWindow(this) )
  {
LABEL_6:
    v7 = *(_DWORD *)(v3 + 20);
    return ValidateHmonitorNoRip(*(_DWORD *)(v7 + 164));
  }
  Prop = RealGetProp(this[20], (unsigned __int16)gatomMonitorInheritance, 1);
  if ( Prop )
  {
    if ( *this == Prop )
      return v2;
    v11 = ValidateHwnd(Prop);
    if ( !v11 )
      return v2;
LABEL_33:
    v7 = *(_DWORD *)(v11 + 20);
    return ValidateHmonitorNoRip(*(_DWORD *)(v7 + 164));
  }
  v5 = this[5];
  v16[0] = *(_DWORD *)(v5 + 184);
  if ( (v16[0] & 0xF) == 2
    || IsTitleWindow(this, 0)
    || (*(_BYTE *)(v5 + 12) & 0x40) != 0
    || (*(_DWORD *)(v5 + 144) & 0x8000) != 0 )
  {
    return v2;
  }
  v8 = (_DWORD *)this[16];
  if ( !v8 )
    goto LABEL_12;
  if ( *(_DWORD *)(v8[2] + 232) != *(_DWORD *)(this[2] + 232)
    || (v12 = *(_DWORD *)(v8[5] + 184), (((v12 >> 8) ^ (v16[0] >> 8)) & 0x1FF) == 0)
    && ((v12 & 0xF) != 2 || (v12 & 0x20000000) == 0 ? (v13 = 0) : (v13 = 1), !v13) )
  {
    do
    {
      if ( IsCandidateTransformOwner(v14, v15) )
        break;
      v8 = (_DWORD *)v8[16];
    }
    while ( v8 );
LABEL_12:
    if ( (*(_BYTE *)(*(_DWORD *)(this[19] + 4) + 6) & 1) != 0 && (*(_WORD *)(this[5] + 30) & 0x3FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(*(_DWORD *)(this[41] + 4));
      if ( *(_DWORD *)v16[0] )
      {
        memset(&v16[2], 0, 16);
        if ( v8 || (v8 = *(_DWORD **)(*(_DWORD *)v16[0] + 4)) != 0 )
          v8 = IntersectRect(v8[5] + 52) != 0 ? v8 : 0;
        v2 = 0;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
    }
    if ( !v8 || (v2 = ValidateHmonitorNoRip(*(_DWORD *)(v8[5] + 164))) == 0 )
    {
      v9 = this[13];
      v3 = this[12];
      v16[0] = v9;
      while ( 1 )
      {
        if ( v9 )
        {
          v10 = IsCandidateTransformOwner(v14, v15) == 0;
          v11 = v16[0];
          if ( !v10 )
            goto LABEL_33;
          v9 = *(_DWORD *)(v16[0] + 52);
          v16[0] = v9;
        }
        else if ( !v3 )
        {
          return v2;
        }
        if ( v3 )
        {
          if ( IsCandidateTransformOwner(v14, v15) )
            goto LABEL_6;
          v3 = *(_DWORD *)(v3 + 48);
          v9 = v16[0];
        }
      }
    }
    return v2;
  }
  return 0;
}
