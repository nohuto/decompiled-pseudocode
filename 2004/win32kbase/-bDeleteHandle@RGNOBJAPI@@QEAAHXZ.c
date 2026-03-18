/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00919A4
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0092CA0 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C008D640 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
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
