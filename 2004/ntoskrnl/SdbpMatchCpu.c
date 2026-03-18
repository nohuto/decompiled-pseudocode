/*
 * XREFs of SdbpMatchCpu @ 0x1407C0594
 * Callers:
 *     SdbpCheckKObject @ 0x14073F328 (SdbpCheckKObject.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1407447D4 (SdbFindFirstTag.c)
 *     SdbpMatchDeviceDWORD @ 0x14096295C (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x1409629E8 (SdbpMatchDeviceString.c)
 */

__int64 __fastcall SdbpMatchCpu(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi
  int v9; // r9d

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28705);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)a3, FirstTag, 24613LL)
      && (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 32), v7, 16442, 16443, 16444) )
    {
      LOWORD(v9) = 16445;
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 36), v7, v9, 16446, 16447) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
