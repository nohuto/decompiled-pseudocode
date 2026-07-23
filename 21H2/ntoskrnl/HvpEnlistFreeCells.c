/*
 * XREFs of HvpEnlistFreeCells @ 0x140720EE0
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x140720D7C (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407B209C (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvpEnlistFreeCell @ 0x14071F6C8 (HvpEnlistFreeCell.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 */

__int64 __fastcall HvpEnlistFreeCells(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, int a4)
{
  char v4; // r13
  unsigned int v5; // r10d
  unsigned int v6; // edi
  unsigned int *v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int64 v14; // [rsp+70h] [rbp+8h]
  int v15; // [rsp+88h] [rbp+20h]

  v15 = a4;
  *(_DWORD *)(BugCheckParameter2 + 144) += 32;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 32;
  v14 = *(_QWORD *)(BugCheckParameter2 + 56);
  if ( v5 <= 0x20 )
    return 0LL;
  do
  {
    v10 = (unsigned int *)(a2 + v6);
    v11 = *v10;
    if ( (*v10 & 0x80000000) != 0 )
      v11 = -v11;
    if ( v11 + v6 < v6 || v11 + v6 > v5 || (v11 & 7) != 0 || !v11 )
    {
      if ( (a4 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v14, 0, 26, 0xC000014C, 0);
        return 3221225804LL;
      }
      v12 = v6 + a3;
      v11 = v5 - v6;
      if ( !HvpMarkDirty(BugCheckParameter2, v6 + a3, v5 - v6, 0) )
      {
        SetFailureLocation(v14, 0, 26, 0xC000009A, 0x10u);
        return 3221225626LL;
      }
      memset((void *)(a2 + v6), 0, v11);
      *v10 = v11;
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      SetFailureLocation(v14, 1, 26, 0x40000009u, 0x20u);
    }
    else
    {
      v12 = v6 + a3;
      if ( (*v10 & 0x80000000) != 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 152) += v11;
        goto LABEL_10;
      }
    }
    *(_DWORD *)(BugCheckParameter2 + 148) += v11;
    HvpEnlistFreeCell(BugCheckParameter2, v12, v11, 0);
    a4 = v15;
LABEL_10:
    v5 = *(_DWORD *)(a2 + 8);
    v6 += v11;
  }
  while ( v6 < v5 );
  if ( !v4 )
    return 0LL;
  return 1073741833LL;
}
