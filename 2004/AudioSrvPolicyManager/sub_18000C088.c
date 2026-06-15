/*
 * XREFs of sub_18000C088 @ 0x18000C088
 * Callers:
 *     sub_18000DC80 @ 0x18000DC80 (sub_18000DC80.c)
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 *     sub_18000F01C @ 0x18000F01C (sub_18000F01C.c)
 */

__int64 __fastcall sub_18000C088(__int64 a1, const wchar_t *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  SIZE_T v7; // r15
  HANDLE ProcessHeap; // rax
  ATL::CAtlException *v9; // rax
  ATL::CAtlException *v10; // rbx
  HANDLE v11; // rax
  ATL::CAtlException *v13[4]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v14; // [rsp+40h] [rbp-28h]
  ATL::CAtlException *v15; // [rsp+70h] [rbp+8h]

  v3 = a1 + 72;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v4 = *(_QWORD *)(v3 + 48);
  LeaveCriticalSection((LPCRITICAL_SECTION)v3);
  if ( v4 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Eu, &MessageGuid, a2);
    }
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    v6 = 2 * v5 + 2;
    v7 = 2 * v5 + 74;
    ProcessHeap = GetProcessHeap();
    v9 = (ATL::CAtlException *)HeapAlloc(ProcessHeap, 0, v7);
    v10 = v9;
    v15 = v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v7;
      *((_DWORD *)v9 + 1) = 512;
      *((_DWORD *)v9 + 6) = v6;
      *((_BYTE *)v9 + 60) = 0;
      *((_DWORD *)v9 + 14) = 0;
      sub_18000F01C((char *)v9 + 72, v6, a2);
      try
      {
        v13[1] = (ATL::CAtlException *)off_18003ED70;
        v13[2] = v10;
        v13[3] = 0LL;
        v14 = 0;
        sub_18000C840((LPCRITICAL_SECTION)v3);
      }
      catch ( ATL::CAtlException *v13 )
      {
        if ( *(_DWORD *)v13[0] == -1073741571 )
          o__resetstkoflw();
        v10 = v15;
      }
    }
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  return 0LL;
}
