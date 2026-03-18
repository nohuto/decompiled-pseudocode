/*
 * XREFs of ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C013A01C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0139394 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013A7F8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall LogCddDatabaseAccessPacket(
        int a1,
        int a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        struct _STRING *a4,
        unsigned int a5)
{
  unsigned int v9; // r14d
  char *v10; // rax
  unsigned int v11; // esi
  char *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  unsigned int CurrentProcessSessionId; // eax

  v9 = 144 * *((unsigned __int16 *)a3 + 10) + a4->Length + 73;
  v10 = (char *)operator new[](v9, 0x63644356u, PagedPool);
  v11 = 0;
  v12 = v10;
  if ( v10 )
  {
    memset(v10, 0, v9);
    *(_DWORD *)v12 = 35;
    *((_DWORD *)v12 + 1) = v9;
    *((_DWORD *)v12 + 10) = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *(_OWORD *)(v12 + 8) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_DWORD *)v12 + 13) = a5;
    *((_DWORD *)v12 + 12) = a2;
    *((_DWORD *)v12 + 14) = a1;
    *((_DWORD *)v12 + 15) = *((unsigned __int16 *)a3 + 10);
    LOWORD(v13) = *((_WORD *)a3 + 10);
    if ( (_WORD)v13 )
    {
      do
      {
        v14 = v11++;
        v15 = 18 * v14;
        *(_QWORD *)&v12[8 * v15 + 72] = *((_QWORD *)a3 + 34 * v14 + 6);
        *(_QWORD *)&v12[8 * v15 + 80] = *((_QWORD *)a3 + 34 * v14 + 7);
        *(_QWORD *)&v12[8 * v15 + 88] = *((_QWORD *)a3 + 34 * v14 + 8);
        *(_DWORD *)&v12[8 * v15 + 96] = *((_DWORD *)a3 + 68 * v14 + 18);
        *(_DWORD *)&v12[8 * v15 + 100] = *((_DWORD *)a3 + 68 * v14 + 19);
        *(_QWORD *)&v12[8 * v15 + 104] = *((_QWORD *)a3 + 34 * v14 + 15);
        *(_QWORD *)&v12[8 * v15 + 112] = *(_QWORD *)((char *)a3 + 272 * v14 + 84);
        *(_QWORD *)&v12[8 * v15 + 120] = *(_QWORD *)((char *)a3 + 272 * v14 + 92);
        *(_QWORD *)&v12[8 * v15 + 128] = *(_QWORD *)((char *)a3 + 272 * v14 + 100);
        *(_QWORD *)&v12[8 * v15 + 136] = *(_QWORD *)((char *)a3 + 272 * v14 + 108);
        *(_DWORD *)&v12[8 * v15 + 144] = *((_DWORD *)a3 + 68 * v14 + 20);
        *(_DWORD *)&v12[8 * v15 + 148] = (int)(*((_DWORD *)a3 + 68 * v14 + 32) << 29) >> 29;
        *(_DWORD *)&v12[8 * v15 + 152] = *((_DWORD *)a3 + 68 * v14 + 34);
        *(_DWORD *)&v12[8 * v15 + 156] = *((_DWORD *)a3 + 68 * v14 + 35);
        *(_OWORD *)&v12[8 * v15 + 160] = *((_OWORD *)a3 + 17 * v14 + 9);
        *(_OWORD *)&v12[8 * v15 + 176] = *((_OWORD *)a3 + 17 * v14 + 10);
        *(_DWORD *)&v12[8 * v15 + 192] = *((_DWORD *)a3 + 68 * v14 + 45);
        *(_DWORD *)&v12[8 * v15 + 196] = *((_DWORD *)a3 + 68 * v14 + 46);
        *(_DWORD *)&v12[8 * v15 + 200] = *((_DWORD *)a3 + 68 * v14 + 47);
        *(_QWORD *)&v12[8 * v15 + 204] = *((_QWORD *)a3 + 34 * v14 + 24);
        v13 = *((unsigned __int16 *)a3 + 10);
      }
      while ( v11 < v13 );
    }
    v16 = 144 * (unsigned __int16)v13 + (_DWORD)v12 + 72;
    memmove(&v12[144 * (unsigned __int16)v13 + 72], a4->Buffer, a4->Length);
    *((_DWORD *)v12 + 16) = v16 - (_DWORD)v12;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, CurrentProcessSessionId);
    operator delete[](v12);
  }
}
