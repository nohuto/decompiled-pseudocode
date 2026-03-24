/*
 * XREFs of VidSchiCheckGPUTimeout @ 0x1C00CFA20
 * Callers:
 *     VidSchiReportHwHang @ 0x1C003D0B4 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiCheckNodeTimeout @ 0x1C0080D90 (VidSchiCheckNodeTimeout.c)
 */

__int64 __fastcall VidSchiCheckGPUTimeout(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  struct _VIDSCH_NODE **v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rcx

  *a3 = 0LL;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 72) )
    return 0LL;
  while ( 1 )
  {
    v7 = *(struct _VIDSCH_NODE ***)(a1 + 624);
    if ( (unsigned int)v3 < *(_DWORD *)(a1 + 696) )
      v7 += v3;
    if ( (unsigned int)VidSchiCheckNodeTimeout(*v7, a2) )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 72) )
      return 0LL;
  }
  v9 = *(_QWORD **)(a1 + 624);
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 696) )
    v9 += v3;
  result = 1LL;
  *a3 = *v9;
  return result;
}
