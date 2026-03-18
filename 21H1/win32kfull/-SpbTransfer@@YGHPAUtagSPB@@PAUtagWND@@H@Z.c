/*
 * XREFs of ?SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z @ 0x17E2A7
 * Callers:
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     ?SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z @ 0x17E2A7 (-SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _IntersectWithParents@8 @ 0x35AFC (_IntersectWithParents@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z @ 0x17E205 (-SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z.c)
 *     ?SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z @ 0x17E2A7 (-SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z.c)
 */

int __userpurge SpbTransfer@<eax>(_DWORD *a1@<edx>, int a2@<ecx>, struct tagSPB *a3, struct tagWND *a4, int a5)
{
  unsigned int v6; // edx
  int *v7; // esi
  int i; // esi
  struct tagWND *v10; // [esp+0h] [ebp-34h]
  unsigned int v11; // [esp+4h] [ebp-30h]
  _BYTE v12[8]; // [esp+10h] [ebp-24h] BYREF
  int v13; // [esp+18h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-18h] BYREF
  int v15; // [esp+20h] [ebp-14h]
  int v16; // [esp+24h] [ebp-10h]
  int v17; // [esp+28h] [ebp-Ch]

  v13 = a2;
  v6 = *(_DWORD *)(a1[5] + 92);
  if ( !v6 )
    goto LABEL_8;
  if ( (*(_DWORD *)(*(_DWORD *)(a1[2] + 232) + 464) & 0x400) != 0 )
    return 1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( v6 <= 1 || GreGetRgnBox(v6, &v14) )
  {
    v7 = (int *)(a1[5] + 52);
    v14 = *v7++;
    v15 = *v7++;
    v16 = *v7;
    v17 = v7[1];
  }
  if ( !IntersectWithParents((int)a1, (int)&v14)
    || (UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12),
        xxxInternalInvalidate((int)a1, _ghrgnSPB2, 72),
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12),
        SpbCheckRect2(a1, v13, (struct tagSPB *)&v14, (struct tagRECT *)1, (struct tagRECT *)v10, v11)) )
  {
LABEL_8:
    if ( a3 )
    {
      for ( i = a1[15]; i; i = *(_DWORD *)(i + 48) )
      {
        if ( !SpbTransfer((struct tagSPB *)1, v10, v11) )
          return 0;
      }
    }
    return 1;
  }
  return 0;
}
