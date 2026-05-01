/*
 * XREFs of ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180006A2C
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180006EB8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180017F70 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020CE0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180008C14 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DE3C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DEC4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampActCheckEnterDependencyWorker(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rax
  struct _HAM_DEPENDENCY_GROUP *v3; // rdi
  char v4; // al

  v1 = *((_QWORD *)a1 + 10);
  v3 = *(struct _HAM_DEPENDENCY_GROUP **)(v1 + 688);
  if ( v3 && !*((_QWORD *)a1 + 9) && (*((_BYTE *)a1 + 544) & 2) == 0 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v1 + 688));
    v4 = HampDepGroupTryEnterStateChange(v3, (unsigned __int64 *)(*((_QWORD *)a1 + 10) + 616LL));
    *((_DWORD *)a1 + 136) &= ~2u;
    *((_DWORD *)a1 + 136) |= 2 * (v4 & 1);
    HampDepGroupReleaseLockExclusive(v3);
  }
}
