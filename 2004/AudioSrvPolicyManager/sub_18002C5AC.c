/*
 * XREFs of sub_18002C5AC @ 0x18002C5AC
 * Callers:
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_18002C5AC(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  HANDLE ProcessHeap; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // r9
  int v15; // eax
  void *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v12 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v12 )
  {
    *v12 = off_18003F490;
    v12[1] = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    *((_DWORD *)v12 + 4) = a3;
    *((_DWORD *)v12 + 5) = a4;
    v14 = -1LL;
    v12[3] = a2;
    do
      ++v14;
    while ( *(_WORD *)(a1 + 2 * v14) );
    v15 = sub_180018844(v11, v10, a1, v14, v18, v12 + 1);
    v13 = v15;
    if ( v15 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x13u, &stru_180045198, v15);
      }
      sub_180005724("CAppStateChangedWorkItem::Initialize", 545, v13);
    }
    if ( v13 >= 0 )
    {
      *a5 = v12;
      v12 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v12 )
  {
    v16 = (void *)v12[1];
    *v12 = off_18003F490;
    if ( v16 )
    {
      CoTaskMemFree(v16);
      v12[1] = 0LL;
    }
    *v12 = &off_18003EAC8;
    sub_180039D98(v12);
  }
  if ( v13 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x12u, &stru_180045198, v13);
    }
    sub_180005724("CAppStateChangedWorkItem::CreateInstance", 525, v13);
  }
  return (unsigned int)v13;
}
