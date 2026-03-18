/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x14059C6E4
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140358340 (SmKmStoreHelperWorker.c)
 * Callees:
 *     SmFpFree @ 0x1402580A4 (SmFpFree.c)
 *     SmKmStoreHelperCommandProcess @ 0x140358420 (SmKmStoreHelperCommandProcess.c)
 *     SmKmUnlockMdl @ 0x1403592D0 (SmKmUnlockMdl.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall SmKmStoreHelperCommandCleanup(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v5 = a2 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          (*(void (__fastcall **)(__int64, _QWORD, __int64))a3)(a1, *(_QWORD *)(a3 + 8), 1LL);
      }
      else if ( *(int *)(a3 + 40) >= 0 )
      {
        SmKmUnlockMdl(*(PMDL *)(a3 + 24), *(_QWORD *)(a1 + 120), a1);
        SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, *(struct _MDL **)(a3 + 24));
      }
    }
  }
  else if ( *(int *)(a3 + 40) >= 0 )
  {
    v8 = *(_DWORD *)(a3 + 32);
    v9[0] = *(_QWORD *)(a3 + 24);
    v9[1] = *(_QWORD *)(a3 + 8);
    LODWORD(v10) = ((unsigned __int8)v10 ^ (unsigned __int8)v8) & 1 ^ v10;
    SmKmStoreHelperCommandProcess(a1, 3, (__int64)v9);
  }
}
