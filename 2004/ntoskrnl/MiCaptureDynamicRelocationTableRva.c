/*
 * XREFs of MiCaptureDynamicRelocationTableRva @ 0x1406D6BEC
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14078E730 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiApplyDynamicRelocations @ 0x140A48C34 (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140224AC0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall MiCaptureDynamicRelocationTableRva(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v7; // r10d
  unsigned __int16 v8; // bx
  int v9; // esi
  __int64 v10; // r11
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  int v14; // r11d
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  v15 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  *a7 = 0;
  if ( a4 == 523 )
  {
    if ( a6 >= 0xE6 )
    {
      v8 = *(_WORD *)(a5 + 228);
      v9 = *(_DWORD *)(a5 + 224);
    }
    if ( a6 >= 0xC8 )
      v10 = *(_QWORD *)(a5 + 192);
  }
  else
  {
    if ( a6 >= 0x8E )
    {
      v8 = *(_WORD *)(a5 + 140);
      v9 = *(_DWORD *)(a5 + 136);
    }
    if ( a6 >= 0x7C )
      v10 = *(unsigned int *)(a5 + 120);
  }
  if ( v8 )
  {
    v12 = a2 + a1;
    v7 = RtlImageNtHeaderEx(0, a1, a2, &v15);
    if ( v7 >= 0 )
    {
      if ( v8 > *(_WORD *)(v15 + 6) )
      {
        return (unsigned int)-1073741701;
      }
      else
      {
        v13 = *(unsigned __int16 *)(v15 + 20) + v15 + 8 * (5LL * v8 - 2);
        if ( v12 <= v13 || v12 < v13 + 40 )
          return (unsigned int)-1073741701;
        else
          *a7 = v9 + *(_DWORD *)(v13 + 12);
      }
    }
  }
  else if ( v10 )
  {
    if ( a3 )
      v14 = v10 - a3;
    else
      v14 = v10 - a1;
    *a7 = v14;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
