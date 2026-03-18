/*
 * XREFs of ?SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z @ 0x17E205
 * Callers:
 *     ?SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z @ 0x17E2A7 (-SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z @ 0x17E08B (-FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 */

int __userpurge SpbCheckRect2@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagSPB *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned int a6)
{
  bool v7; // zf
  struct tagSPB *v9; // [esp+0h] [ebp-20h]
  unsigned int v10; // [esp+4h] [ebp-1Ch]
  int v11[4]; // [esp+Ch] [ebp-14h] BYREF

  v7 = *(_DWORD *)(a2 + 4) == 0;
  v11[0] = *(_DWORD *)a3;
  v11[1] = *((_DWORD *)a3 + 1);
  v11[2] = *((_DWORD *)a3 + 2);
  v11[3] = *((_DWORD *)a3 + 3);
  if ( !v7
    && (!FBitsTouch(v11, a1, (struct tagWND *)a2, a4, v9, v10)
     || (*(_DWORD *)(a2 + 28) || SetOrCreateRectRgnIndirectPublic(a2 + 28, a2 + 12))
     && SetRectRgnIndirect(_ghrgnSCR, v11)
     && GreCombineRgn(*(_DWORD *)(a2 + 28), *(_DWORD *)(a2 + 28), _ghrgnSCR, 4) >= 2u) )
  {
    return 1;
  }
  FreeSpb(a2);
  return 0;
}
