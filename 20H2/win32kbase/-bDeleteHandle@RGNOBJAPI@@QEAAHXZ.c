/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C004B9B4
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*((_QWORD *)this + 1);
  if ( v2 == (struct HOBJ__ *)hrgnDefault || HmgRemoveObjectImpl(v2, 1, 0, 0, 4, 0LL) != *(_QWORD *)this )
    return 0LL;
  *((_QWORD *)this + 1) = 0LL;
  return 1LL;
}
