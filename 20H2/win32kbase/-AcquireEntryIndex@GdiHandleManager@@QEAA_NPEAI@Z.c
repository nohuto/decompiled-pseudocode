/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0040C10
 * Callers:
 *     HmgAlloc @ 0x1C003D700 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgCreate @ 0x1C007227C (HmgCreate.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ?AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z @ 0x1C0040D3C (-AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045770 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  GdiHandleManager *v2; // rbx
  GdiHandleEntryDirectory *v4; // rcx
  char v5; // bp
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // r11
  unsigned int v10; // r10d
  unsigned int v11; // edx
  __int64 v12; // rcx
  GdiHandleEntryTable *v13; // r11
  __int64 v14; // r9
  __int64 v16; // rdx
  void *v17; // rax
  GdiHandleManager *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = this;
  v2 = gpHandleManager;
  if ( *((_DWORD *)gpHandleManager + 1) < *((_DWORD *)gpHandleManager + 2) )
  {
    while ( 1 )
    {
      v4 = (GdiHandleEntryDirectory *)*((_QWORD *)v2 + 2);
      LODWORD(v18) = 0;
      if ( !GdiHandleEntryDirectory::AcquireEntryIndex(v4, (unsigned int *)&v18) )
        return 0;
      ++*((_DWORD *)v2 + 1);
      v5 = 0;
      v6 = *((_DWORD *)v2 + 1);
      if ( v6 > *(_DWORD *)v2 )
      {
        *(_DWORD *)v2 = v6;
        v5 = 1;
        gcMaxHmgr = v6;
      }
      v7 = (unsigned int)v18;
      v8 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)v18);
      v9 = *((_QWORD *)v2 + 2);
      v10 = v8;
      v11 = *(_DWORD *)(v9 + 2056);
      if ( v8 >= v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        v12 = ((v8 - v11) >> 16) + 1;
        if ( v8 < v11 )
          v12 = 0LL;
        v13 = *(GdiHandleEntryTable **)(v9 + 8 * v12 + 8);
        if ( (_DWORD)v12 )
          v10 = ((1 - (_DWORD)v12) << 16) - v11 + v8;
        if ( v10 < *((_DWORD *)v13 + 5) || GdiHandleEntryTable::GetEntryObject(v13, v10) )
          v14 = *(_QWORD *)v13 + 24LL * v10;
      }
      if ( v7 < 0x10000 )
      {
        if ( v5 || *(_DWORD *)v2 > 0x10000u )
          *(_BYTE *)(v14 + 13) = 0;
        else
          v7 += (unsigned __int8)++*(_BYTE *)(v14 + 13) << 16;
LABEL_16:
        *a2 = v7;
        return 1;
      }
      if ( *(unsigned __int8 *)(v14 + 13) != HIWORD(v7) )
        goto LABEL_16;
      v16 = *((_QWORD *)v2 + 3);
      if ( v16 )
        goto LABEL_26;
      v17 = (void *)Win32AllocPool(0x40000LL, 0x636D6847u);
      *((_QWORD *)v2 + 3) = v17;
      if ( v17 )
        break;
LABEL_27:
      if ( *((_DWORD *)v2 + 1) >= *((_DWORD *)v2 + 2) )
        return 0;
    }
    memset(v17, 0, 0x40000uLL);
    v16 = *((_QWORD *)v2 + 3);
LABEL_26:
    *(_DWORD *)(v16 + 4LL * (unsigned __int16)v7) = v7;
    goto LABEL_27;
  }
  return 0;
}
