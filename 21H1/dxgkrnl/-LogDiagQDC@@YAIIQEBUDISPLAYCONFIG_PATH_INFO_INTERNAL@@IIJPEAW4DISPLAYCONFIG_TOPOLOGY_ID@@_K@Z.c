/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00E361C
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E3424 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall LogDiagQDC(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6,
        unsigned __int64 a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // esi
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdi
  char *v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v23; // ebx
  unsigned int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // rax

  v10 = a1;
  if ( (a3 & 7) == 1 )
  {
    v25 = 0;
    if ( a1 )
    {
      v26 = (__int64 *)a2;
      do
      {
        if ( *v26 >= 0 )
          break;
        ++v25;
        v26 += 25;
      }
      while ( v25 < v10 );
    }
    v10 = v25;
  }
  v11 = 192 * v10 + 88;
  v12 = (char *)operator new[](v11, 0x43434451u, PagedPool);
  v17 = v12;
  if ( v12 )
  {
    memset(v12, 0, v11);
    *((_DWORD *)v17 + 10) = 0;
    *((_QWORD *)v17 + 4) = 0LL;
    *(_DWORD *)v17 = 39;
    *((_DWORD *)v17 + 1) = v11;
    *(_OWORD *)(v17 + 8) = 0LL;
    *((_QWORD *)v17 + 3) = 0LL;
    *((_DWORD *)v17 + 14) = 0;
    *((_DWORD *)v17 + 13) = v10;
    *((_DWORD *)v17 + 15) = a5;
    *((_DWORD *)v17 + 16) = a4 | a3;
    if ( a6 )
      *((_DWORD *)v17 + 17) = *(_DWORD *)a6;
    *((_DWORD *)v17 + 18) = 192;
    v18 = (char *)((a6 != 0LL ? 4 : 0) | (a2 == 0LL) | 2u);
    *((_QWORD *)v17 + 10) = a7;
    *((_DWORD *)v17 + 12) = (_DWORD)v18;
    if ( a2 && v10 )
    {
      v18 = v17 + 104;
      v19 = v10;
      v20 = (_QWORD *)((char *)a2 + 16);
      do
      {
        *((_QWORD *)v18 - 2) = *(v20 - 2);
        *((_QWORD *)v18 - 1) = *(v20 - 1);
        v21 = *v20;
        v20 += 25;
        *(_QWORD *)v18 = v21;
        *((_DWORD *)v18 + 2) = *((_DWORD *)v20 - 48);
        *((_DWORD *)v18 + 3) = *((_DWORD *)v20 - 47);
        *((_OWORD *)v18 + 1) = *(_OWORD *)(v20 - 23);
        *((_OWORD *)v18 + 2) = *(_OWORD *)(v20 - 21);
        *((_OWORD *)v18 + 3) = *(_OWORD *)(v20 - 19);
        *((_DWORD *)v18 + 16) = *((_DWORD *)v20 - 34);
        *((_DWORD *)v18 + 17) = *((_DWORD *)v20 - 33);
        *((_QWORD *)v18 + 9) = *(v20 - 16);
        *((_DWORD *)v18 + 20) = *((_DWORD *)v20 - 30);
        v18[84] = *((_BYTE *)v20 - 116);
        v18[85] = *((_BYTE *)v20 - 115);
        *((_DWORD *)v18 + 22) = *((_DWORD *)v20 - 28);
        *((_DWORD *)v18 + 23) = *((_DWORD *)v20 - 27);
        *((_DWORD *)v18 + 24) = *((_DWORD *)v20 - 26);
        *(_QWORD *)(v18 + 100) = *(_QWORD *)((char *)v20 - 100);
        *(_QWORD *)(v18 + 108) = *(_QWORD *)((char *)v20 - 92);
        *(_QWORD *)(v18 + 116) = *(_QWORD *)((char *)v20 - 84);
        *(_OWORD *)(v18 + 124) = *(_OWORD *)((char *)v20 - 76);
        *((_DWORD *)v18 + 35) = *((_DWORD *)v20 - 15);
        *((_DWORD *)v18 + 36) = *((_DWORD *)v20 - 14);
        *((_DWORD *)v18 + 37) = *((_DWORD *)v20 - 13);
        *((_QWORD *)v18 + 19) = *(v20 - 6);
        *((_QWORD *)v18 + 20) = *(v20 - 5);
        *((_DWORD *)v18 + 42) = *((_DWORD *)v20 - 8);
        v18 += 192;
        --v19;
      }
      while ( v19 );
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17, CurrentProcessSessionId);
    v23 = *((_DWORD *)v17 + 10);
    operator delete[](v17);
    return v23;
  }
  else
  {
    v27 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v27 + 24) = v11;
    WdLogEvent5_WdLowResource(v27);
    DxgkLogCodePointPacket(0xAu, a3, a5, 0, 0LL);
    return 0xFFFFFFFFLL;
  }
}
