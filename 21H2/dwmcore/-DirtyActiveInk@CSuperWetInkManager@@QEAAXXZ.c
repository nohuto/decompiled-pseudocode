/*
 * XREFs of ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x1800DCC08
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1802414D4 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 */

void __fastcall CSuperWetInkManager::DirtyActiveInk(CSuperWetInkManager *this)
{
  char v2; // cl
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ecx

  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 6);
  v4 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v4 == v3 )
    goto LABEL_2;
  do
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 496LL) - v4[11] < 0xAuLL )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v4 + 72LL))(*v4, 0LL, 0LL);
      v2 = 1;
    }
    v4 += 13;
  }
  while ( v4 != v3 );
  if ( !v2 )
  {
LABEL_2:
    v5 = (__int64 *)*((_QWORD *)this + 2);
    v6 = (__int64 *)*((_QWORD *)this + 3);
    while ( 1 )
    {
      if ( v5 == v6 )
        return;
      v7 = *v5;
      v8 = *(_QWORD *)(*v5 + 256);
      if ( v8
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, 181LL)
        && CSynchronousSuperWetInk::IsSuperWetCompatible(*(CSynchronousSuperWetInk **)(v7 + 256)) )
      {
        if ( *(_DWORD *)(**(_QWORD **)(v9 + 216) + 4LL) <= *(_DWORD *)(v9 + 240) )
        {
          v10 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v9 + 88) + 24LL) + 4LL);
          if ( v10 <= *(_DWORD *)(v9 + 100) )
            goto LABEL_17;
          *(_DWORD *)(v9 + 100) = v10;
        }
        CVisual::PropagateFlags(v7, 5u);
      }
LABEL_17:
      ++v5;
    }
  }
}
