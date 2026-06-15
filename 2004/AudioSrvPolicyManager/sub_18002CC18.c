/*
 * XREFs of sub_18002CC18 @ 0x18002CC18
 * Callers:
 *     PbmAllowMediaPlaybackForApp @ 0x1800232A0 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18002CD44 @ 0x18002CD44 (sub_18002CD44.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_18002CC18(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // edi

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 0LL;
    *v9 = off_18003F430;
    *((_DWORD *)v9 + 2) = a1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( a2 )
    {
      v11 = sub_18002CD44(v10, a2, a3);
      if ( v11 >= 0 )
      {
        *a4 = v10;
        v10 = 0LL;
      }
    }
    else
    {
      v11 = -2147467261;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v10 )
  {
    *v10 = &off_18003EAC8;
    sub_180039D98(v10);
  }
  if ( v11 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Du, &stru_180045198, v11);
    }
    sub_180005724("CTransportControlRouterWorkItem::CreateInstance", 789, v11);
  }
  return (unsigned int)v11;
}
