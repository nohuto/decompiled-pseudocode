/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C007FA98
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C007F600 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084130 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0084160 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 */

void __fastcall GdiHandleEntryDirectory::ReleaseLockAndEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  GdiHandleEntryTable *v5; // r9
  unsigned __int64 v6; // r10
  GdiHandleEntryTable *v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(this, a2, &v7, &v8) )
  {
    v5 = v7;
    v6 = v8;
    if ( a3 || GdiHandleEntryTable::GetEntryObject(v7, v8) )
    {
      if ( (unsigned int)v6 < *((_DWORD *)v5 + 5) )
        *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v5 + 3) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8) = 0LL;
      *(_QWORD *)(*(_QWORD *)v5 + 24 * v6) = *((unsigned int *)v5 + 3);
      --*((_DWORD *)v5 + 4);
      *((_DWORD *)v5 + 3) = v6;
    }
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v5 + 3) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6, 0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)this = 0;
  }
}
