/*
 * XREFs of sub_1800B5B00 @ 0x1800B5B00
 * Callers:
 *     sub_180045DC0 @ 0x180045DC0 (sub_180045DC0.c)
 * Callees:
 *     sub_180065874 @ 0x180065874 (sub_180065874.c)
 *     sub_1800B5788 @ 0x1800B5788 (sub_1800B5788.c)
 */

int __fastcall sub_1800B5B00(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  _WORD *v3; // r8
  int v5; // edi
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  volatile signed __int32 *v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_WORD **)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 16);
  if ( v3 )
    goto LABEL_18;
  if ( v5 )
  {
    v2 = (_UNKNOWN **)sub_180065874(8u, 0x190uLL);
    *(_QWORD *)(a1 + 24) = v2;
    v3 = v2;
    if ( v2 )
    {
      v2 += 50;
      *(_DWORD *)(a1 + 32) = 5;
      if ( v3 != (_WORD *)v2 )
      {
        do
        {
          *v3 = 80;
          v3 += 40;
        }
        while ( v3 != (_WORD *)v2 );
        v3 = *(_WORD **)(a1 + 24);
      }
      if ( v3 )
      {
LABEL_18:
        if ( !v5 || (v7 = &v3[40 * *(unsigned __int16 *)(a1 + 32)], v3 == (_WORD *)v7) )
        {
LABEL_14:
          v9 = *(volatile signed __int32 **)(a1 + 8);
          *(_WORD *)(a1 + 34) = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
          LODWORD(v2) = sub_1800B5788(
                          *(_QWORD *)(a1 + 24) + 80LL * *(unsigned __int16 *)(a1 + 34),
                          a2,
                          _InterlockedIncrement(v9));
        }
        else
        {
          v8 = v3 + 4;
          while ( 1 )
          {
            if ( *(v8 - 1) > *(_DWORD *)(a1 + 16) )
            {
              LODWORD(v2) = *(_DWORD *)(a2 + 4);
              if ( *v8 == (_DWORD)v2 )
                break;
            }
            v8 += 20;
            if ( v8 - 2 == v7 )
              goto LABEL_14;
          }
        }
      }
    }
  }
  return (int)v2;
}
