/*
 * XREFs of ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0019270
 * Callers:
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C0133E60 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1C015EBAC (-DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E468C (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsLeafTarget(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 55) == (DMMVIDEOPRESENTTARGET *)((char *)this + 440)
    && *((DMMVIDEOPRESENTTARGET **)this + 60) == (DMMVIDEOPRESENTTARGET *)((char *)this + 480) )
  {
    return *((_QWORD *)this + 66) == 0LL;
  }
  return v1;
}
