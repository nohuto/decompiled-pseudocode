/*
 * XREFs of ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x1C007E284
 * Callers:
 *     ?PresentCancel@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0079F64 (-PresentCancel@FlipManagerObject@@QEAAJ_K@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 */

__int64 __fastcall CFlipManager::PresentCancel(CFlipManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 Pool2; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r8
  CFlipManager *v10; // rcx
  _QWORD *v11; // rax
  CFlipManager **v12; // rdx
  struct DXGGLOBAL *Global; // rax
  CFlipManager::PresentHistory *v14; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v6 = 0;
  Pool2 = ExAllocatePool2(257LL, 40LL, 1668301638LL, a4);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v9 = *((_QWORD *)this + 29);
    v10 = (CFlipManager *)(Pool2 + 8);
    v11 = (_QWORD *)(Pool2 + 8);
    v11[1] = v11;
    *v11 = v11;
    *v8 = &CFlipPresentCancel::`vftable';
    v12 = (CFlipManager **)*((_QWORD *)this + 25);
    v8[3] = v9;
    v8[4] = a2;
    if ( *v12 != (CFlipManager *)((char *)this + 192) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)this + 192;
    v8[2] = v12;
    *v12 = v10;
    *((_QWORD *)this + 25) = v10;
    Global = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)Global + 38073) + 272LL))(*((unsigned int *)this + 82), a2);
    v14 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
    if ( v14 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v14);
      *((_DWORD *)NextEntry + 10) = 10;
      *((_QWORD *)NextEntry + 2) = v8[3];
      *((_QWORD *)NextEntry + 4) = v8[4];
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
