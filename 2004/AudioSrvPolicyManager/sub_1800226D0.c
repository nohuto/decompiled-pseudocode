/*
 * XREFs of sub_1800226D0 @ 0x1800226D0
 * Callers:
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 */

__int64 __fastcall sub_1800226D0(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  unsigned int v4; // ebx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = 0;
  if ( v3 )
  {
    v3[2] = 1;
    *(_QWORD *)v3 = &off_18003F328;
    *((_QWORD *)v3 + 2) = off_18003F2C0;
    v3[6] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = v3;
  }
  else
  {
    v4 = -2147024882;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_180044908, -2147024882);
    }
    sub_180005724("CPlaybackManager::CreateInstance", 59, -2147024882);
  }
  return v4;
}
