/*
 * XREFs of ?AddChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005C194
 * Callers:
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E564C (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ?Feature_Servicing_33388776__private_IsEnabled@@YAHXZ @ 0x1C0026E70 (-Feature_Servicing_33388776__private_IsEnabled@@YAHXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::AddChildTarget(DMMVIDEOPRESENTTARGET *this, struct DMMVIDEOPRESENTTARGET *a2)
{
  char *v4; // rcx
  char *v5; // rax
  char **v6; // rdx

  _InterlockedIncrement((volatile signed __int32 *)this + 18);
  v4 = (char *)this + 440;
  v5 = (char *)a2 + 456;
  v6 = (char **)*((_QWORD *)v4 + 1);
  if ( *v6 != v4 )
    __fastfail(3u);
  *(_QWORD *)v5 = v4;
  *((_QWORD *)v5 + 1) = v6;
  *v6 = v5;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)a2 + 59) = this;
  if ( (unsigned int)Feature_Servicing_33388776__private_IsEnabled() )
    *((_DWORD *)a2 + 30) = *((_DWORD *)this + 30);
}
