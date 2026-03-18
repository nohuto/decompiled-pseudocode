/*
 * XREFs of RIMGetDisplayMonitor @ 0x1C016D028
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C00B43F0 (DrvGetWDDMAdapterInfo.c)
 */

__int64 __fastcall RIMGetDisplayMonitor(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned int v5; // r11d
  int v7; // r14d
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r10
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *a2;
  v7 = *(_DWORD *)(a1 + 24);
  v8 = 0;
  v15 = v3;
  if ( v5 )
  {
    v9 = *((_QWORD *)a2 + 1);
    while ( 1 )
    {
      v10 = 200LL * v8;
      if ( *(_DWORD *)(v10 + v9 + 116) == *(_DWORD *)(a1 + 116) && *(_DWORD *)(v10 + v9 + 120) == *(_DWORD *)(a1 + 120) )
        break;
      if ( ++v8 >= v5 )
        goto LABEL_8;
    }
    v3 = *(_QWORD *)(200LL * v8 + v9 + 16);
    v7 = *(_DWORD *)(200LL * v8 + v9 + 24);
    v15 = v3;
  }
LABEL_8:
  v11 = *(_QWORD *)(gpDispInfo + 104);
  if ( v11 )
  {
    v12 = HIDWORD(v15);
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 240);
      v16 = 0LL;
      LODWORD(v15) = 0;
      if ( (unsigned int)DrvGetWDDMAdapterInfo(v13, 1, &v16, &v15) )
      {
        if ( (_DWORD)v15 == v7 && v16 == __PAIR64__(v12, v3) )
          break;
      }
      v11 = *(_QWORD *)(v11 + 56);
      if ( !v11 )
        return v4;
    }
    *a3 = v11;
    return 1;
  }
  return v4;
}
