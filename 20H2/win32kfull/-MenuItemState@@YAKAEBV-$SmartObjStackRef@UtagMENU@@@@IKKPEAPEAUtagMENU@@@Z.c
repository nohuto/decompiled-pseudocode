/*
 * XREFs of ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C0036CD4
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     _CheckMenuItem @ 0x1C015065C (_CheckMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C005C3E0 (MNLookUpItem.c)
 */

__int64 __fastcall MenuItemState(__int64 **a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 result; // rax

  v7 = a1[2];
  if ( !v7 )
    v7 = (__int64 *)**a1;
  v9 = MNLookUpItem(v7, a2, a3 & 0x400, a5);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)v9;
  v11 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
  result = a4 & v11;
  *(_DWORD *)(v10 + 4) = v11 ^ a4 & (a3 ^ result);
  return result;
}
