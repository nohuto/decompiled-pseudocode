/*
 * XREFs of _SetGrayColorTable @ 0x1C309D
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 *     _GetDstBFInfo @ 0x1BB40C (_GetDstBFInfo.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SetGrayColorTable(int a1, int a2)
{
  int v2; // edi
  unsigned __int8 *v4; // esi
  int v5; // ecx
  int v6; // edx
  unsigned int result; // eax
  int v8; // ecx
  int v9; // eax
  void *v10; // edi

  v2 = *(unsigned __int16 *)(a2 + 2);
  if ( *(_WORD *)(a2 + 2) )
  {
    v4 = *(unsigned __int8 **)(a2 + 52);
    if ( a1 )
    {
      do
      {
        v5 = v4[1];
        v6 = *(_DWORD *)(a1 + 4 * v4[2] + 2048);
        result = *v4;
        v4 += 4;
        *(v4 - 1) = (unsigned __int16)(*(_WORD *)(a1 + 4 * result) + *(_WORD *)(a1 + 4 * v5 + 1024) + v6) >> 8;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      do
      {
        v8 = 38469 * v4[1] + 19595 * v4[2];
        v9 = 7471 * *v4;
        v4 += 4;
        result = (v8 + 0x7FFF + v9) / 0xFFFFu;
        *(v4 - 1) = result;
        --v2;
      }
      while ( v2 );
    }
  }
  else
  {
    result = *(_DWORD *)(a2 + 4);
    if ( a1 != result )
    {
      v10 = (void *)(result + (*(unsigned __int8 *)(a2 + 44) << 10));
      result = 256;
      qmemcpy(v10, (const void *)a1, 0x400u);
      qmemcpy((void *)(*(_DWORD *)(a2 + 4) + (*(unsigned __int8 *)(a2 + 43) << 10)), (const void *)(a1 + 1024), 0x400u);
      qmemcpy((void *)(*(_DWORD *)(a2 + 4) + (*(unsigned __int8 *)(a2 + 42) << 10)), (const void *)(a1 + 2048), 0x400u);
    }
  }
  return result;
}
