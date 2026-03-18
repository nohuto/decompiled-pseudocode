/*
 * XREFs of ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1C02FC758
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE1A4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C0227820 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C02FEE30 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 */

void __fastcall BLTENTRY::Cleanup(BLTENTRY *this, char a2)
{
  void *v3; // rcx

  if ( a2 )
  {
    v3 = (void *)*((_QWORD *)this + 5);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( *((_QWORD *)this + 6) )
      BLTENTRY::ReleasePresentDoneEvent(this, 0);
  }
  DXGALLOCATIONREFERENCE::AssignNull((struct _EX_RUNDOWN_REF **)this + 4);
}
