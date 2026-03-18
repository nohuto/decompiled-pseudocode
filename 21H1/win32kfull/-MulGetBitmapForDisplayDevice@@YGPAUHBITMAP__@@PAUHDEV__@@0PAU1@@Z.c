/*
 * XREFs of ?MulGetBitmapForDisplayDevice@@YGPAUHBITMAP__@@PAUHDEV__@@0PAU1@@Z @ 0x2036FB
 * Callers:
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 * Callees:
 *     <none>
 */

HDEV __userpurge MulGetBitmapForDisplayDevice@<eax>(int a1@<edx>, int a2@<ecx>, HDEV a3, HDEV a4, HBITMAP a5)
{
  HDEV v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // edx
  int v10; // ecx

  v5 = a3;
  v6 = a1;
  if ( a2 )
  {
    if ( ((unsigned int)&loc_20000 & *(_DWORD *)(a2 + 24)) != 0 )
    {
      if ( a1 )
      {
        LOBYTE(a1) = 5;
        v7 = HmgShareLockCheck(a3, a1);
        if ( v7 )
        {
          if ( (*(_BYTE *)(v7 + 76) & 1) != 0 )
          {
            v8 = *(_DWORD *)(v7 + 24);
            v9 = *(_DWORD **)v8;
            v10 = *(_DWORD *)(v8 + 8);
            while ( v9[9] != v6 )
            {
              v9 = (_DWORD *)*v9;
              if ( !--v10 )
                goto LABEL_11;
            }
            v5 = *(HDEV *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 16) + 4) + 4 * v9[2]) + 4);
          }
LABEL_11:
          DEC_SHARE_REF_CNT(v7);
        }
      }
    }
  }
  return v5;
}
