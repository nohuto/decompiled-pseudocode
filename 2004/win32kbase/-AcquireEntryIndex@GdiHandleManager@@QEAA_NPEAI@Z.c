/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0083740
 * Callers:
 *     HmgCreate @ 0x1C00087BC (HmgCreate.c)
 *     HmgAlloc @ 0x1C0081830 (HmgAlloc.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0083BD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C000A678 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C008090C (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B200 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  GdiHandleManager *v2; // rbx
  __int64 v4; // r14
  __int64 v5; // r9
  __int64 v6; // r15
  unsigned int v7; // edx
  __int64 v8; // rdi
  char v9; // r10
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r11
  unsigned int v13; // r8d
  __int64 v14; // rcx
  GdiHandleEntryTable *v15; // r14
  __int64 *v17; // r13
  __int64 v18; // rcx
  unsigned __int64 v19; // r12
  _QWORD *v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // edi
  GdiHandleEntryTable *v23; // rbp
  GdiHandleEntryTable *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rax
  signed __int32 v27[18]; // [rsp+0h] [rbp-48h] BYREF
  GdiHandleManager *v28; // [rsp+50h] [rbp+8h] BYREF

  v28 = this;
  v2 = gpHandleManager;
  while ( *((_DWORD *)v2 + 1) < *((_DWORD *)v2 + 2) )
  {
    v4 = *((_QWORD *)v2 + 2);
    v5 = 0LL;
    if ( *(_BYTE *)v4 )
      return 0;
    v6 = *(_QWORD *)(v4 + 8);
    LODWORD(v28) = 0;
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 < *(_DWORD *)(v6 + 8) )
    {
      v8 = *(unsigned int *)(v6 + 12);
      if ( (_DWORD)v8 != -1 )
      {
        *(_DWORD *)(v6 + 12) = *(_DWORD *)(*(_QWORD *)v6 + 24 * v8);
        goto LABEL_6;
      }
      LODWORD(v8) = *(_DWORD *)(v6 + 20);
      v17 = *(__int64 **)(v6 + 24);
      v18 = *v17;
      v19 = 8 * ((unsigned __int64)(unsigned int)v8 >> 8);
      if ( *(_QWORD *)(*v17 + v19) )
        goto LABEL_23;
      *(_QWORD *)(v19 + *v17) = Win32AllocPool(4096LL, 0x636C6547u);
      v18 = *v17;
      if ( *(_QWORD *)(*v17 + v19) )
      {
        v5 = 0LL;
LABEL_23:
        v20 = (_QWORD *)(*(_QWORD *)(v18 + v19) + 16LL * (unsigned __int8)v8);
        *v20 = 0LL;
        v20[1] = 0LL;
        _InterlockedOr(v27, 0);
        ++*(_DWORD *)(v6 + 20);
        v7 = *(_DWORD *)(v6 + 16);
LABEL_6:
        *(_DWORD *)(v6 + 16) = v7 + 1;
        goto LABEL_7;
      }
      v6 = *(_QWORD *)(v4 + 8);
    }
    if ( *(_DWORD *)(v6 + 16) != *(_DWORD *)(v6 + 8) )
      return 0;
    LOWORD(v21) = *(_WORD *)(v4 + 2);
    v22 = 1;
    if ( (unsigned __int16)v21 <= 1u )
    {
LABEL_32:
      if ( (_WORD)v21 == 256 )
      {
        *(_BYTE *)v4 = 1;
        return 0;
      }
      *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
      v24 = *(GdiHandleEntryTable **)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8);
      if ( !v24 )
        return 0;
      GdiHandleEntryTable::AcquireEntryIndex(v24, (unsigned int *)&v28);
      v22 = *(unsigned __int16 *)(v4 + 2);
      *(_WORD *)(v4 + 2) = v22 + 1;
    }
    else
    {
      while ( 1 )
      {
        v23 = *(GdiHandleEntryTable **)(v4 + 8LL * v22 + 8);
        if ( GdiHandleEntryTable::AcquireEntryIndex(v23, (unsigned int *)&v28) )
          break;
        if ( *((_DWORD *)v23 + 4) != *((_DWORD *)v23 + 2) )
          return 0;
        v21 = *(unsigned __int16 *)(v4 + 2);
        if ( ++v22 >= v21 )
          goto LABEL_32;
      }
    }
    LODWORD(v8) = (_DWORD)v28 + *(_DWORD *)(v4 + 2056) + ((v22 + 0xFFFF) << 16);
    v5 = 0LL;
LABEL_7:
    ++*((_DWORD *)v2 + 1);
    v9 = 0;
    v10 = *((_DWORD *)v2 + 1);
    if ( v10 > *(_DWORD *)v2 )
    {
      *(_DWORD *)v2 = v10;
      v9 = 1;
      gcMaxHmgr = v10;
    }
    v11 = *((_QWORD *)v2 + 2);
    v12 = (unsigned __int16)v8;
    v13 = *(_DWORD *)(v11 + 2056);
    if ( (unsigned __int16)v8 < v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    {
      v14 = (((unsigned __int16)v8 - v13) >> 16) + 1;
      if ( (unsigned __int16)v8 < v13 )
        v14 = 0LL;
      v15 = *(GdiHandleEntryTable **)(v11 + 8 * v14 + 8);
      if ( (_DWORD)v14 )
        v12 = ((1 - (_DWORD)v14) << 16) - v13 + (unsigned __int16)v8;
      if ( (unsigned int)v12 < *((_DWORD *)v15 + 5) || GdiHandleEntryTable::GetEntryObject(v15, v12) )
        v5 = *(_QWORD *)v15 + 24 * v12;
    }
    if ( (unsigned int)v8 < 0x10000 )
    {
      if ( v9 || *(_DWORD *)v2 > 0x10000u )
        *(_BYTE *)(v5 + 13) = 0;
      else
        LODWORD(v8) = ((unsigned __int8)++*(_BYTE *)(v5 + 13) << 16) + v8;
LABEL_20:
      *a2 = v8;
      return 1;
    }
    if ( *(unsigned __int8 *)(v5 + 13) != WORD1(v8) )
      goto LABEL_20;
    v25 = *((_QWORD *)v2 + 3);
    if ( v25 )
      goto LABEL_42;
    v26 = (void *)Win32AllocPool(0x40000LL, 0x636D6847u);
    *((_QWORD *)v2 + 3) = v26;
    if ( v26 )
    {
      memset(v26, 0, 0x40000uLL);
      v25 = *((_QWORD *)v2 + 3);
LABEL_42:
      *(_DWORD *)(v25 + 4LL * (unsigned __int16)v8) = v8;
    }
  }
  return 0;
}
