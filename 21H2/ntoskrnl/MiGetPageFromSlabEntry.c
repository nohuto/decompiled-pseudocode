/*
 * XREFs of MiGetPageFromSlabEntry @ 0x140379AC4
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x140299420 (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x140256400 (RtlInterlockedSetClearRun.c)
 */

__int64 __fastcall MiGetPageFromSlabEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // r13d
  unsigned int v8; // r9d
  unsigned int v9; // edx
  int v10; // r10d
  __int64 v11; // rbx
  unsigned int v12; // r11d
  unsigned int v13; // ecx
  __int64 *v14; // rdx
  __int64 i; // r8
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx

  if ( *(_DWORD *)(a1 + 132) )
  {
    v4 = *(_DWORD *)(a1 + 128) & (unsigned int)-(*(_DWORD *)(a1 + 128) < 0x200u);
    if ( !_bittest64(*(const signed __int64 **)(a1 + 56), v4)
      && (unsigned int)RtlInterlockedSetClearRun(a1 + 48, v4, 1u) )
    {
LABEL_4:
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 32));
      *(_DWORD *)(a1 + 128) = v4 + 1;
      return *(_QWORD *)(a1 + 24) + (unsigned int)v4;
    }
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 48);
      v7 = v4 + 1;
      v8 = v7 < v6 ? v7 : 0;
      v9 = v6 - 1;
      v10 = (*(_DWORD *)(a1 + 56) & 4) != 0LL ? 0x20 : 0;
      v11 = *(_QWORD *)(a1 + 56) - ((*(_QWORD *)(a1 + 56) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v12 = v10 + v9;
        v13 = v10 + v8;
        if ( v9 - v8 == -1 )
          goto LABEL_19;
        v14 = (__int64 *)(v11 + 8 * ((unsigned __int64)v13 >> 6));
        for ( i = *v14 | ((1LL << (v13 & 0x3F)) - 1); i == -1; i = *v14 )
        {
          if ( (unsigned __int64)++v14 > v11 + 8 * ((unsigned __int64)v12 >> 6) )
            goto LABEL_19;
        }
        _BitScanForward64(&v16, ~i);
        v17 = v16 + ((unsigned int)(((__int64)v14 - v11) >> 3) << 6);
        if ( v17 > v12 )
        {
LABEL_19:
          v17 = -1;
        }
        else if ( v17 != -1 )
        {
          break;
        }
        if ( !v8 )
          break;
        v19 = v7 + 1;
        if ( v7 + 1 > v6 )
          v19 = *(_DWORD *)(a1 + 48);
        v9 = v19 - 1;
        v8 = 0;
      }
      v18 = v17 - v10;
      if ( v17 == -1 )
        v18 = -1;
      LODWORD(v4) = v18;
      if ( v18 == -1 )
        break;
      if ( (unsigned int)RtlInterlockedSetClearRun(a1 + 48, v18, 1u) )
        goto LABEL_4;
    }
  }
  return -1LL;
}
