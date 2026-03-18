/*
 * XREFs of ?bPushMergeScrScan@STACKOBJ@@QAEHXZ @ 0x21FBAB
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QAEHAAVSTACKOBJ@@0JPAE1@Z @ 0x21F71A (-bExtendScanline@FLOODBM@@QAEHAAVSTACKOBJ@@0JPAE1@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?bExpand@STACKOBJ@@QAEHK@Z @ 0x21F627 (-bExpand@STACKOBJ@@QAEHK@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QAEHKK@Z @ 0x21F6AA (-bExpandScanline@STACKOBJ@@QAEHKK@Z.c)
 *     ?vMergeSpans@@YGXPAU_SPAN@@0000@Z @ 0x220021 (-vMergeSpans@@YGXPAU_SPAN@@0000@Z.c)
 */

int __thiscall STACKOBJ::bPushMergeScrScan(STACKOBJ *this)
{
  _DWORD *v2; // esi
  int v3; // ebx
  size_t v4; // ebx
  unsigned int v5; // eax
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  struct _SPAN *v10; // [esp+0h] [ebp-14h]
  struct _SPAN *v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+Ch] [ebp-8h]
  size_t v13; // [esp+10h] [ebp-4h]

  v2 = (_DWORD *)*((_DWORD *)this + 3);
  v3 = v2[1];
  if ( v3 )
  {
    v4 = 8 * v3 + 16;
    v5 = v4 + *((_DWORD *)this + 1);
    v13 = v4;
    if ( v5 > *(_DWORD *)this && !STACKOBJ::bExpand(this, v5) )
      return 0;
    v2[3] = *((_DWORD *)this + 2);
    v6 = *((_DWORD *)this + 1);
    v12 = v6;
    if ( v6 )
    {
      v7 = (_DWORD *)*((_DWORD *)this + 2);
      v8 = v7[2];
      if ( *v7 == **((_DWORD **)this + 3) )
      {
        v13 = v4 - 16;
        v4 += v8 - 16;
        if ( v4 > *(_DWORD *)(*((_DWORD *)this + 4) + 8) && !STACKOBJ::bExpandScanline(this, v4, 1u) )
          return 0;
        **((_DWORD **)this + 4) = **((_DWORD **)this + 3);
        *(_DWORD *)(*((_DWORD *)this + 4) + 12) = *(_DWORD *)(*((_DWORD *)this + 2) + 12);
        *(_DWORD *)(*((_DWORD *)this + 4) + 4) = *(_DWORD *)(*((_DWORD *)this + 3) + 4)
                                               + *(_DWORD *)(*((_DWORD *)this + 2) + 4);
        vMergeSpans(
          (struct _SPAN *)(*((_DWORD *)this + 3) + 16),
          (struct _SPAN *)(*((_DWORD *)this + 3) + 8 * (*(_DWORD *)(*((_DWORD *)this + 3) + 4) + 2)),
          (struct _SPAN *)(*((_DWORD *)this + 4) + 16),
          v10,
          v11);
        v2 = (_DWORD *)*((_DWORD *)this + 4);
        v6 = *((_DWORD *)this + 1);
      }
      else
      {
        *((_DWORD *)this + 2) = (char *)v7 + v8;
        v6 = v12;
      }
    }
    *((_DWORD *)this + 1) = v6 + v13;
    v2[2] = v4;
    memcpy(*((void **)this + 2), v2, v4);
  }
  return 1;
}
