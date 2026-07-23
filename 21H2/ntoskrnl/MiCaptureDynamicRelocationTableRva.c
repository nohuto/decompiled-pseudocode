/*
 * XREFs of MiCaptureDynamicRelocationTableRva @ 0x1406C219C
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5590 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiApplyDynamicRelocations @ 0x140A505D8 (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1403276D0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall MiCaptureDynamicRelocationTableRva(
        char *BaseOfImage,
        ULONG64 Size,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  NTSTATUS v7; // r10d
  unsigned __int16 v8; // bx
  int v9; // esi
  __int64 v10; // r11
  char *v12; // rdi
  char *v13; // r8
  int v14; // r11d
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF

  OutHeaders = 0LL;
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
    v12 = &BaseOfImage[(unsigned int)Size];
    v7 = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
    if ( v7 >= 0 )
    {
      if ( v8 > OutHeaders->FileHeader.NumberOfSections )
      {
        return (unsigned int)-1073741701;
      }
      else
      {
        v13 = (char *)OutHeaders + 40 * v8 + OutHeaders->FileHeader.SizeOfOptionalHeader - 16;
        if ( v12 <= v13 || v12 < v13 + 40 )
          return (unsigned int)-1073741701;
        else
          *a7 = v9 + *((_DWORD *)v13 + 3);
      }
    }
  }
  else if ( v10 )
  {
    if ( a3 )
      v14 = v10 - a3;
    else
      v14 = v10 - (_DWORD)BaseOfImage;
    *a7 = v14;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
