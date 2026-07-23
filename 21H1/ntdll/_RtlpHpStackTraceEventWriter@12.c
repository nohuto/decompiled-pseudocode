/*
 * XREFs of _RtlpHpStackTraceEventWriter@12 @ 0x4B36E3D0
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHpStackDbLogStackDbEnd@8 @ 0x4B36DCFB (_RtlpHpStackDbLogStackDbEnd@8.c)
 *     _RtlpHpStackDbLogStackDbSnapshot@16 @ 0x4B36DD5E (_RtlpHpStackDbLogStackDbSnapshot@16.c)
 */

int __stdcall RtlpHpStackTraceEventWriter(char *Src, int a2, int *a3)
{
  unsigned int v3; // eax
  void *v4; // edi
  unsigned int v5; // ecx
  bool v6; // zf
  unsigned int v7; // ebx
  size_t v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+Ch] [ebp-4h]

  v3 = a2;
  v10 = a2;
  v4 = a3 + 4;
  if ( a2 )
  {
    do
    {
      v5 = a3[2];
      v6 = v5 == 0x4000;
      if ( v5 < 0x4000 )
      {
        v7 = 0x4000 - v5;
        if ( 0x4000 - v5 >= v3 )
          v7 = v3;
        LODWORD(v9) = v7;
        v4 = a3 + 4;
        memcpy((char *)a3 + v5 + 16, Src, v9);
        a3[2] += v7;
        v3 = v10 - v7;
        a3[3] += v7;
        Src += v7;
        v6 = a3[2] == 0x4000;
        v10 -= v7;
      }
      if ( v6 )
      {
        RtlpHpStackDbLogStackDbSnapshot(*a3, a3[1]++, 0x4000, (int)v4);
        a3[2] = 0;
        LODWORD(v9) = 0x4000;
        memset(v4, 0, v9);
        v3 = v10;
      }
      else
      {
        v4 = a3 + 4;
      }
    }
    while ( v3 );
  }
  if ( !a2 )
  {
    if ( a3[2] )
    {
      RtlpHpStackDbLogStackDbSnapshot(*a3, a3[1]++, a3[2], (int)v4);
      a3[2] = 0;
      LODWORD(v9) = 0x4000;
      memset(v4, 0, v9);
    }
    RtlpHpStackDbLogStackDbEnd(*a3, a3[3]);
  }
  return 0;
}
