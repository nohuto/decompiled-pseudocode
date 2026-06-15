/*
 * XREFs of sub_18000BF18 @ 0x18000BF18
 * Callers:
 *     sub_18000DF10 @ 0x18000DF10 (sub_18000DF10.c)
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 *     sub_18000F01C @ 0x18000F01C (sub_18000F01C.c)
 */

__int64 __fastcall sub_18000BF18(__int64 a1, const wchar_t *a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  SIZE_T v9; // r15
  HANDLE ProcessHeap; // rax
  ATL::CAtlException *v11; // rax
  ATL::CAtlException *v12; // rbx
  HANDLE v13; // rax
  ATL::CAtlException *v15[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v16; // [rsp+40h] [rbp-38h]
  ATL::CAtlException *v17; // [rsp+80h] [rbp+8h]

  v5 = a1 + 72;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v6 = *(_QWORD *)(v5 + 48);
  LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  if ( v6 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Du, &MessageGuid, a2);
    }
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    v8 = 2 * v7 + 2;
    v9 = 2 * v7 + 74;
    ProcessHeap = GetProcessHeap();
    v11 = (ATL::CAtlException *)HeapAlloc(ProcessHeap, 0, v9);
    v12 = v11;
    v17 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v9;
      *((_DWORD *)v11 + 1) = 512;
      *((_DWORD *)v11 + 6) = v8;
      *((_BYTE *)v11 + 60) = 1;
      *((_DWORD *)v11 + 14) = a3;
      sub_18000F01C((char *)v11 + 72, v8, a2);
      try
      {
        v15[1] = (ATL::CAtlException *)off_18003ED70;
        v15[2] = v12;
        v15[3] = 0LL;
        v16 = 1;
        sub_18000C840((LPCRITICAL_SECTION)v5);
      }
      catch ( ATL::CAtlException *v15 )
      {
        if ( *(_DWORD *)v15[0] == -1073741571 )
          o__resetstkoflw();
        v12 = v17;
      }
    }
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v12);
  }
  return 0LL;
}
