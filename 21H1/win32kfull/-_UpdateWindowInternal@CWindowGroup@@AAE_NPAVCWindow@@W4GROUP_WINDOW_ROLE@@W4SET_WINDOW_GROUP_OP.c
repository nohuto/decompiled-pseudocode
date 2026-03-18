/*
 * XREFs of ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7
 * Callers:
 *     _lambda_655a86602886d83fc43ea49307b7a19b_::operator() @ 0x19EA6C (_lambda_655a86602886d83fc43ea49307b7a19b_--operator().c)
 *     ?AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19EB05 (-AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?CanTransferForeground@CWindow@@QBE_NXZ @ 0x19ED3A (-CanTransferForeground@CWindow@@QBE_NXZ.c)
 *     ?ForceForeground@CWindow@@QAE_NXZ @ 0x19F061 (-ForceForeground@CWindow@@QAE_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F6D5 (-_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x19F7A9 (-_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AAE?AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F8AF (-_UpdateWindowRole@CWindowGroup@@AAE-AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

char __thiscall CWindowGroup::_UpdateWindowInternal(_DWORD *this, unsigned int *a2, int a3, unsigned int a4)
{
  char v5; // bl
  int v6; // esi
  CWindow *WindowFromRole; // eax
  unsigned int *v8; // edi
  int updated; // eax
  _BYTE v11[8]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v13 = 0;
  v12 = this;
  v5 = 1;
  v6 = (a4 >> 1) & 2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  WindowFromRole = (CWindow *)CWindowGroup::_GetWindowFromRole(this, 1);
  v8 = (unsigned int *)WindowFromRole;
  if ( (a4 & 2) == 0 )
  {
    if ( WindowFromRole && a3 == 1 && WindowFromRole != (CWindow *)a2 && CWindow::CanTransferForeground(WindowFromRole) )
    {
      LOBYTE(v13) = 1;
    }
    else
    {
      LOBYTE(v6) = v6 | 1;
      v13 = 0;
    }
  }
  if ( !v8 || (a4 & 1) == 0 || (v5 = CWindowGroup::_TemplateWindow(a2, v8, v6)) != 0 )
  {
    if ( a3 )
    {
      updated = CWindowGroup::_UpdateWindowRole(v12, a2, a3);
      LOBYTE(v13) = updated == 0 ? v13 : 0;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  if ( v5 && (_BYTE)v13 )
    return CWindow::ForceForeground((CWindow *)a2);
  return v5;
}
