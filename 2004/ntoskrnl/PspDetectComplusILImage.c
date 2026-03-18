/*
 * XREFs of PspDetectComplusILImage @ 0x1406FD27C
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 *     RtlQueryImageFileKeyOption @ 0x1406FD590 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspDetectComplusILImage(__int64 a1, _DWORD *a2)
{
  char v2; // al
  __int64 result; // rax
  char v6; // al
  unsigned int v7; // ebx
  void *v8; // rcx
  int ImageFileKeyOption; // eax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+50h] [rbp+18h]

  v2 = *(_BYTE *)(a1 + 99);
  if ( (v2 & 1) == 0 || (v2 & 0x20) != 0 )
    return 0LL;
  v6 = MEMORY[0xFFFFF780000002E0];
  v7 = 0;
  v10 = MEMORY[0xFFFFF780000002E0];
  if ( MEMORY[0xFFFFF780000002E0] != -1 )
    goto LABEL_6;
  result = ZwQuerySystemInformation(59LL, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    v6 = v10;
LABEL_6:
    if ( (v6 & 1) != 0 )
    {
      v8 = *(void **)(a1 + 192);
      if ( v8 )
      {
        v11 = 0;
        ImageFileKeyOption = RtlQueryImageFileKeyOption(v8, 4, 0LL);
        if ( (ImageFileKeyOption < 0 || v11) && ImageFileKeyOption != -1073741772 )
        {
          if ( ImageFileKeyOption < 0 )
            return (unsigned int)ImageFileKeyOption;
          return v7;
        }
      }
      else if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
      {
        return (unsigned int)-1073741823;
      }
      *a2 |= 8u;
    }
    return v7;
  }
  return result;
}
