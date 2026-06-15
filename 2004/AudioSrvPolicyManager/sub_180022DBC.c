/*
 * XREFs of sub_180022DBC @ 0x180022DBC
 * Callers:
 *     PbmReportAppClosing @ 0x180023230 (PbmReportAppClosing.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180022DBC(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  int v12; // ebx
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-28h]

  v5 = 0LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v11 )
  {
    v11[1] = 0LL;
    *v11 = off_18003F418;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = a4;
    v12 = 0;
    v11[3] = a3;
    if ( a2 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(a2 + 2 * v13) );
      v14 = sub_180018844(v10, v9, a2, v13, v16, v11 + 1);
      v12 = v14;
      if ( v14 < 0 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x21u, &stru_180045198, v14);
        }
        sub_180005724("CAppClosedWorkItem::Initialize", 890, v12);
      }
    }
    if ( v12 >= 0 )
    {
      v5 = v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 8LL))(v11, 1LL);
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    if ( v12 >= 0 )
      v5 = 0LL;
  }
  else
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x20u, &stru_180045198, v12);
    }
    sub_180005724("CAppClosedWorkItem::CreateInstance", 865, v12);
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  if ( v12 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xEu, &stru_180044908, v12);
    }
    sub_180005724("CPlaybackManager::OnAppClosed", 265, v12);
  }
  return (unsigned int)v12;
}
