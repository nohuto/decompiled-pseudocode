/*
 * XREFs of ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x18002A888
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18002A584 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A79C (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180009080 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::UpdateCapturedButton(CTopLevelWindow *this, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  CButton *v8; // rcx
  CBaseObject *v9; // rcx
  volatile signed __int32 *v10; // rcx

  LODWORD(v2) = 4;
  v4 = 4LL;
  v5 = a2 - 8;
  if ( !v5 )
  {
    v2 = 1LL;
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v4 = 2LL;
    LODWORD(v2) = 2;
    goto LABEL_6;
  }
  v7 = v6 - 11;
  if ( !v7 )
  {
    v2 = 3LL;
LABEL_14:
    v4 = v2;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    LODWORD(v2) = 0;
    v4 = 0LL;
  }
LABEL_6:
  v8 = (CButton *)*((_QWORD *)this + 93);
  if ( v8 )
  {
    CButton::SetMouseCapture(v8, 0);
    v9 = (CBaseObject *)*((_QWORD *)this + 93);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *((_QWORD *)this + 93) = 0LL;
    }
  }
  if ( (_DWORD)v2 != 4 )
  {
    v10 = (volatile signed __int32 *)*((_QWORD *)this + v4 + 61);
    if ( v10 )
    {
      *((_QWORD *)this + 93) = v10;
      _InterlockedIncrement(v10 + 2);
      CButton::SetMouseCapture((CButton *)v10, 1);
    }
  }
}
