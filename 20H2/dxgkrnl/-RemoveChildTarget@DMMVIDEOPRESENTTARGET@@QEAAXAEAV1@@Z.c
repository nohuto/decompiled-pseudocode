/*
 * XREFs of ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005C13C
 * Callers:
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02E3FF0 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E4B14 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005C1C0 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::RemoveChildTarget(DMMVIDEOPRESENTTARGET *this, struct DMMVIDEOPRESENTTARGET *a2)
{
  struct DMMVIDEOPRESENTTARGET **v3; // r8
  struct DMMVIDEOPRESENTTARGET **v4; // rcx
  struct DMMVIDEOPRESENTTARGET **v5; // rdi

  v3 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 57);
  if ( v3[1] != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 456)
    || (v4 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 58),
        *v4 != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 456)) )
  {
    __fastfail(3u);
  }
  *v4 = (struct DMMVIDEOPRESENTTARGET *)v3;
  v3[1] = (struct DMMVIDEOPRESENTTARGET *)v4;
  *((_QWORD *)a2 + 59) = 0LL;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 55) == (DMMVIDEOPRESENTTARGET *)((char *)this + 440) )
  {
    v5 = (struct DMMVIDEOPRESENTTARGET **)((char *)this + 480);
    while ( 1 )
    {
      a2 = *v5;
      if ( *v5 == (struct DMMVIDEOPRESENTTARGET *)v5 )
        break;
      DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(this, (struct DMMVIDEOPRESENTTARGET *)((char *)a2 - 496));
    }
  }
  ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)this + 64), (__int64)a2);
}
