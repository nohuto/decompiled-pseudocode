/*
 * XREFs of DbgUiConvertStateChangeStructureWorker @ 0x1800CC840
 * Callers:
 *     DbgUiConvertStateChangeStructure @ 0x1800CC820 (DbgUiConvertStateChangeStructure.c)
 *     DbgUiConvertStateChangeStructureEx @ 0x1800CC830 (DbgUiConvertStateChangeStructureEx.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 */

__int64 __fastcall DbgUiConvertStateChangeStructureWorker(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v4; // rax
  __int16 v5; // r8
  __int16 v6; // ax
  int v7; // eax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  NTSTATUS InformationThread; // eax
  __int64 v12; // rcx
  _BYTE ThreadInformation[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]

  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 16);
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      *(_DWORD *)a2 = 2;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 40);
      InformationThread = ZwQueryInformationThread(
                            *(HANDLE *)(a1 + 24),
                            ThreadBasicInformation,
                            ThreadInformation,
                            0x30u,
                            0LL);
      v12 = v14;
      if ( InformationThread < 0 )
        v12 = 0LL;
      *(_QWORD *)(a2 + 24) = v12;
      return 0LL;
    case 3:
      *(_DWORD *)a2 = 3;
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 56);
      *(_DWORD *)(a2 + 48) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a2 + 52) = *(_DWORD *)(a1 + 68);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 80);
      v9 = ZwQueryInformationThread(*(HANDLE *)(a1 + 32), ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
      v10 = v14;
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_WORD *)(a2 + 80) = 1;
      if ( v9 < 0 )
        v10 = 0LL;
      *(_QWORD *)(a2 + 56) = v10;
      return 0LL;
    case 4:
      *(_DWORD *)a2 = 4;
      goto LABEL_24;
    case 5:
      *(_DWORD *)a2 = 5;
LABEL_24:
      v7 = *(_DWORD *)(a1 + 24);
      goto LABEL_25;
  }
  if ( *(int *)a1 <= 5 )
    return 3221225473LL;
  if ( *(int *)a1 <= 8 )
  {
    v4 = (_DWORD *)(a1 + 24);
    if ( *(_DWORD *)(a1 + 24) == 1073807370 )
    {
      *(_DWORD *)a2 = 8;
      if ( a3 )
      {
        v5 = 1;
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
        v6 = 2 * *(_WORD *)(a1 + 56);
      }
      else
      {
        v5 = 0;
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 80);
        v6 = *(_WORD *)(a1 + 72);
      }
      *(_WORD *)(a2 + 26) = v6;
      *(_WORD *)(a2 + 24) = v5;
      return 0LL;
    }
    if ( *v4 == 1073807366 )
    {
      *(_DWORD *)a2 = 8;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
      *(_WORD *)(a2 + 26) = *(_WORD *)(a1 + 56);
      *(_WORD *)(a2 + 24) = 0;
      return 0LL;
    }
    if ( *v4 != 1073807367 )
    {
      *(_DWORD *)a2 = 1;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)v4;
      *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 104);
      *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 120);
      *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 136);
      *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 152);
      *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 168);
      *(_DWORD *)(a2 + 168) = *(_DWORD *)(a1 + 176);
      return 0LL;
    }
    *(_DWORD *)a2 = 9;
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 64);
    v7 = *(_DWORD *)(a1 + 56);
LABEL_25:
    *(_DWORD *)(a2 + 16) = v7;
    return 0LL;
  }
  if ( *(_DWORD *)a1 == 9 )
  {
    *(_DWORD *)a2 = 6;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48);
    *(_WORD *)(a2 + 48) = 1;
    return 0LL;
  }
  if ( *(_DWORD *)a1 != 10 )
    return 3221225473LL;
  *(_DWORD *)a2 = 7;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 24);
  return 0LL;
}
