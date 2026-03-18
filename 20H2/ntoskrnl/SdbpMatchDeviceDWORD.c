/*
 * XREFs of SdbpMatchDeviceDWORD @ 0x14096872C
 * Callers:
 *     SdbpMatchAcpi @ 0x1407CED28 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407CED7C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407CEDD0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407CEE24 (SdbpMatchCpu.c)
 * Callees:
 *     SdbpGetDeviceDWORD @ 0x14096818C (SdbpGetDeviceDWORD.c)
 */

__int64 __fastcall SdbpMatchDeviceDWORD(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned int v9; // ebx
  int DeviceDWORD; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax

  v9 = 0;
  DeviceDWORD = SdbpGetDeviceDWORD(a1, a3, a4);
  if ( DeviceDWORD == -1 )
  {
    v11 = SdbpGetDeviceDWORD(a1, a3, a5);
    if ( v11 == -1 || v11 >= a2 )
    {
      v12 = SdbpGetDeviceDWORD(a1, a3, a6);
      if ( v12 == -1 || v12 <= a2 )
        return 1;
    }
  }
  else if ( DeviceDWORD == a2 )
  {
    return 1;
  }
  return v9;
}
