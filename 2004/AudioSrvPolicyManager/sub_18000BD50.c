/*
 * XREFs of sub_18000BD50 @ 0x18000BD50
 * Callers:
 *     sub_18000DC80 @ 0x18000DC80 (sub_18000DC80.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 *     sub_18000F01C @ 0x18000F01C (sub_18000F01C.c)
 */

__int64 __fastcall sub_18000BD50(__int64 a1, const wchar_t *a2)
{
  int v3; // esi
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rbx
  HANDLE v11; // rax
  int *v13; // rbx
  ATL::CAtlException *v14[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v15; // [rsp+40h] [rbp-38h]
  _DWORD *v16; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v4 = a1 + 72;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v5 = *(_QWORD *)(v4 + 48);
  LeaveCriticalSection((LPCRITICAL_SECTION)v4);
  if ( v5 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Bu, &MessageGuid, a2);
    }
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = 2 * v6 + 2;
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, v7 + 72);
    v16 = v9;
    if ( v9 )
    {
      *v9 = v7 + 72;
      v9[1] = 512;
      v9[6] = v7;
      *((_BYTE *)v9 + 60) = 0;
      v9[14] = 0;
      sub_18000F01C(v9 + 18, v7, a2);
      try
      {
        v14[1] = (ATL::CAtlException *)off_18003ED70;
        v14[2] = (ATL::CAtlException *)v9;
        v14[3] = 0LL;
        v15 = 256;
        sub_18000C840((LPCRITICAL_SECTION)v4);
      }
      catch ( ATL::CAtlException *v14 )
      {
        v13 = (int *)v14[0];
        if ( *(_DWORD *)v14[0] == -1073741571 )
          o__resetstkoflw();
        v3 = *v13;
        v9 = v16;
      }
    }
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v9);
    if ( v3 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Cu, &MessageGuid, v3);
      }
      sub_180005724("CDuckingManager::NotifyFilteredClientsAutoUnduck", 761, v3);
    }
  }
  return 0LL;
}
