/*
 * XREFs of ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x180027088
 * Callers:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180026F18 (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HamRcLeafInitialize@@YAXPEAU_HAM_RC_TREE_NODE@@PEAU_HAM_RC_TREE_LEAF@@@Z @ 0x1800271E0 (-HamRcLeafInitialize@@YAXPEAU_HAM_RC_TREE_NODE@@PEAU_HAM_RC_TREE_LEAF@@@Z.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

void __fastcall HampAppInitialize(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2, struct _HAM_APPLICATION *a3)
{
  struct _RM_PSM_KEY *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  char IsDynamicKey; // al

  memset_0(a3, 0, 0x270uLL);
  HamRcLeafInitialize(a1, a3);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 11) = a1;
  *((_OWORD *)a3 + 36) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 576);
  *((_DWORD *)a3 + 146) = 0;
  v6 = a2;
  *((_QWORD *)a3 + 75) = (char *)a3 + 592;
  *((_QWORD *)a3 + 74) = (char *)a3 + 592;
  v7 = (_OWORD *)((char *)a3 + 96);
  v8 = 3LL;
  do
  {
    *v7 = *(_OWORD *)v6;
    v7[1] = *((_OWORD *)v6 + 1);
    v7[2] = *((_OWORD *)v6 + 2);
    v7[3] = *((_OWORD *)v6 + 3);
    v7[4] = *((_OWORD *)v6 + 4);
    v7[5] = *((_OWORD *)v6 + 5);
    v7[6] = *((_OWORD *)v6 + 6);
    v7 += 8;
    v9 = *((_OWORD *)v6 + 7);
    v6 = (struct _RM_PSM_KEY *)((char *)v6 + 128);
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *(_OWORD *)v6;
  v7[1] = *((_OWORD *)v6 + 1);
  v7[2] = *((_OWORD *)v6 + 2);
  v7[3] = *((_OWORD *)v6 + 3);
  v7[4] = *((_OWORD *)v6 + 4);
  IsDynamicKey = PsmIsDynamicKey(a2);
  *((_DWORD *)a3 + 152) &= ~0x10000u;
  *((_DWORD *)a3 + 152) |= (IsDynamicKey & 1) << 16;
  *((_DWORD *)a3 + 154) = 128;
  *((_WORD *)a3 + 304) = 0;
}
