/*
 * XREFs of ReadIoMemRaw @ 0x1C0002F10
 * Callers:
 *     PerfControlCppcRequestMsr @ 0x1C0002380 (PerfControlCppcRequestMsr.c)
 *     ReadGenAddr @ 0x1C0002DA4 (ReadGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0002F98 (ReadIoMemRawEx.c)
 *     WriteGenAddr @ 0x1C0003104 (WriteGenAddr.c)
 *     PerfControlCpcSingleRegister @ 0x1C0004CD0 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRaw(__int64 a1)
{
  unsigned __int8 *v1; // r9
  char v2; // dl
  unsigned __int64 result; // rax

  v1 = *(unsigned __int8 **)(a1 + 4);
  v2 = *(_BYTE *)(a1 + 3);
  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 1 )
    {
      switch ( v2 )
      {
        case 8:
          LOBYTE(result) = __inbyte((unsigned __int16)v1);
          return (unsigned __int8)result;
        case 16:
          LOWORD(result) = __inword((unsigned __int16)v1);
          return (unsigned __int16)result;
        case 32:
          LODWORD(result) = __indword((unsigned __int16)v1);
          return (unsigned int)result;
      }
    }
    else if ( *(_BYTE *)a1 == 127 && v2 == 64 )
    {
      return __readmsr((unsigned int)v1);
    }
    return 0LL;
  }
  if ( v2 == 8 )
    return *v1;
  if ( v2 == 16 )
    return *(unsigned __int16 *)v1;
  if ( v2 != 32 )
    return 0LL;
  return *(unsigned int *)v1;
}
