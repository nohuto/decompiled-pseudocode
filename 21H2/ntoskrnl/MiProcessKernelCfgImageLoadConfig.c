/*
 * XREFs of MiProcessKernelCfgImageLoadConfig @ 0x14075C330
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x14075C2E0 (MiProcessLoadConfigForDriver.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiSetImageProtection @ 0x14027E128 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x1405B52C0 (MiCheckForDiscardableLongJumpTable.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14096C6C4 (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiProcessKernelCfgImageLoadConfig(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  void (__fastcall **v7)(uintptr_t); // r14
  _QWORD *v8; // r14
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v2 = a2;
  if ( (MiFlags & 0x40000) == 0 )
    return 0LL;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 10, (int)&v9);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  if ( *(_DWORD *)v5 < 0x78u || (v7 = *(void (__fastcall ***)(uintptr_t))(v5 + 112)) == 0LL )
  {
LABEL_14:
    if ( *(_DWORD *)v6 >= 0x80u )
    {
      v8 = *(_QWORD **)(v6 + 120);
      if ( v8 )
      {
        if ( v2 && !(unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v6 + 120), 8, 4LL) )
        {
          MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
          dword_140C4F3D0 = 104;
          return 3221225595LL;
        }
        *v8 = &guard_dispatch_icall;
        if ( v2 && *(_QWORD *)(v2 + 16) )
          MiSetImageProtection(a1, (unsigned __int64)v8, 8, 256LL);
      }
    }
    if ( *(_DWORD *)v6 >= 0xC0u && (*(_DWORD *)(v6 + 144) & 0x10000) != 0 )
    {
      if ( *(_QWORD *)(v6 + 184) )
        MiCheckForDiscardableLongJumpTable(a1, v6);
    }
    return 0LL;
  }
  if ( !v2 || (unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v5 + 112), 8, 4LL) )
  {
    *v7 = guard_check_icall;
    if ( v2 && *(_QWORD *)(v2 + 16) )
      MiSetImageProtection(a1, (unsigned __int64)v7, 8, 256LL);
    goto LABEL_14;
  }
  MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
  dword_140C4F3D0 = 103;
  return 3221225595LL;
}
