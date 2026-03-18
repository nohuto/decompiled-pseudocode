/*
 * XREFs of ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C000B090
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000E3D8 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

void __fastcall CInputSpace::Reset(CInputSpace *this, struct CInputSpace ***a2)
{
  struct CInputSpace *v4; // rbx
  struct CInputSpace *v5; // rax
  struct CInputSpace *v6; // rcx
  struct CInputSpace **v7; // rdx
  struct CInputSpace **v8; // rdx

  memmove(this, a2, 0x5A0uLL);
  v4 = (CInputSpace *)((char *)this + 1424);
  v5 = (struct CInputSpace *)(a2 + 178);
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  v6 = (struct CInputSpace *)a2[178];
  if ( v6 != (struct CInputSpace *)(a2 + 178) )
  {
    if ( *((struct CInputSpace **)v6 + 1) != v5
      || (v7 = a2[179], *v7 != v5)
      || (*v7 = v6,
          *((_QWORD *)v6 + 1) = v7,
          a2[179] = (struct CInputSpace **)(a2 + 178),
          *(_QWORD *)v5 = v5,
          v8 = (struct CInputSpace **)*((_QWORD *)v4 + 1),
          *(struct CInputSpace **)(*(_QWORD *)v4 + 8LL) != v4)
      || *v8 != v4
      || *(struct CInputSpace **)(*(_QWORD *)v6 + 8LL) != v6
      || **((struct CInputSpace ***)v6 + 1) != v6 )
    {
      __fastfail(3u);
    }
    *v8 = v6;
    *((_QWORD *)v4 + 1) = *((_QWORD *)v6 + 1);
    **((_QWORD **)v6 + 1) = v4;
    *((_QWORD *)v6 + 1) = v8;
    *((_DWORD *)a2 + 355) = 0;
  }
}
