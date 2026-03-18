/*
 * XREFs of ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01BDC68
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C01BEDCC (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPButtonWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  __int64 v3; // rax
  unsigned int v4; // r11d
  unsigned int v5; // edx

  if ( (*((_DWORD *)this + 55) & 0x200) == 0 )
    return 1LL;
  v3 = *((_QWORD *)a2 + 6);
  v5 = *((_DWORD *)this + 79) * *((_DWORD *)this + 79);
  if ( SHIDWORD(v3) < a3.y )
    v5 = *((_DWORD *)this + 80) * *((_DWORD *)this + 80);
  v4 = *((_DWORD *)this + 78) * *((_DWORD *)this + 78);
  return v5 * (__int64)(((int)v3 - a3.x) * ((int)v3 - a3.x))
       + (unsigned __int64)v4 * (HIDWORD(v3) - a3.y) * (HIDWORD(v3) - a3.y) >= v5 * (unsigned __int64)v4;
}
