/*
 * XREFs of ?SerializeMetaData@@YAJAEAPEAEAEAI@Z @ 0x14004CEE4
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14004CE2C (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     memcpy_s @ 0x1400289E0 (memcpy_s.c)
 */

__int64 __fastcall SerializeMetaData(unsigned __int8 **a1, unsigned int *a2)
{
  __int64 v2; // r14
  unsigned int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  v9 = 16777217;
  v5 = 0;
  if ( memcpy_s(&(*a1)[v2], (unsigned int)(4096 - v2), &v9, 4uLL) )
    return (unsigned int)-2147024774;
  v6 = *a2 + 4;
  *a2 = v6;
  if ( 4096 - v6 < 4 )
    return (unsigned int)-2147024774;
  *a2 = v6 + 4;
  if ( 4092 - v6 < 4 )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    v7 = v6 + 8;
    *a2 = v7;
    *(_DWORD *)&(*a1)[v2 + 8] = v7 - v2;
  }
  return v5;
}
