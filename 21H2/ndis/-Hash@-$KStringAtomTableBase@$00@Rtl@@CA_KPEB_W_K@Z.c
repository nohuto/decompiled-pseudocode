/*
 * XREFs of ?Hash@?$KStringAtomTableBase@$00@Rtl@@CA_KPEB_W_K@Z @ 0x1C0123E10
 * Callers:
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AA0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Rtl::KStringAtomTableBase<1>::Hash(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d

  v2 = 2 * a2;
  v4 = 314159LL;
  if ( v2 >= 8 )
  {
    v5 = (unsigned __int64)v2 >> 3;
    v2 -= 8 * ((unsigned __int64)v2 >> 3);
    do
    {
      v6 = a1[6] + 37 * (a1[5] + 37 * (a1[4] + 37 * (a1[3] + 37 * (a1[2] + 37 * (a1[1] + 37 * (*a1 + 37 * v4))))));
      v7 = a1[7];
      a1 += 8;
      v4 = v7 + 37 * v6;
      --v5;
    }
    while ( v5 );
  }
  if ( v2 >= 1 && v2 <= 7 )
  {
    v8 = v2 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 != 1 )
                  goto LABEL_20;
                v4 = *a1++ + 37 * v4;
              }
              v4 = *a1++ + 37 * v4;
            }
            v4 = *a1++ + 37 * v4;
          }
          v4 = *a1++ + 37 * v4;
        }
        v4 = *a1++ + 37 * v4;
      }
      v4 = *a1++ + 37 * v4;
    }
    v4 = *a1 + 37 * v4;
  }
LABEL_20:
  if ( !v4 )
    return 1LL;
  return v4;
}
