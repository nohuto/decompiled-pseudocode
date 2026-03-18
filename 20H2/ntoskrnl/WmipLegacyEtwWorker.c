/*
 * XREFs of WmipLegacyEtwWorker @ 0x1407C0C90
 * Callers:
 *     WmipAddDataSource @ 0x14074FAD8 (WmipAddDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     WmipUnreferenceEntry @ 0x140647C78 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140648190 (WmipReferenceEntry.c)
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C0DF0 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwCallback @ 0x140935F60 (WmipProcessLegacyEtwCallback.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipLegacyEtwWorker(ULONG_PTR a1)
{
  __int64 v2; // rdx
  void **v3; // rsi
  void ***v4; // rbx
  void **v5; // rax
  int v6; // ecx
  int v8; // ecx
  REGHANDLE v9; // rbp

  WmipReferenceEntry(a1);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = (void **)(v2 + 24);
  if ( !v2 )
    v3 = (void **)(a1 + 136);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
      break;
    if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    KeReleaseMutex(&WmipSMMutex, 0);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          WmipProcessLegacyEtwCallback(v4, a1);
      }
      else
      {
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        v9 = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 104) = 0LL;
        KeReleaseMutex(&WmipSMMutex, 0);
        if ( v9 )
          EtwUnregister(v9);
      }
    }
    else
    {
      WmipProcessLegacyEtwRegister(a1, v4);
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
    ExFreePoolWithTag(v4, 0x70696D57u);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  *(_QWORD *)(a1 + 128) = 0LL;
  KeReleaseMutex(&WmipSMMutex, 0);
  return WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
}
