/*
 * XREFs of _GreSelectFontInternal@12 @ 0xF7EBA
 * Callers:
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _NtGdiSelectFont@8 @ 0xA8E58 (_NtGdiSelectFont@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreSelectFontInternal(HDC a1, int a2, int a3)
{
  int v3; // esi
  int v5; // edx
  int v6; // eax
  int *v7; // eax
  struct LFONT *v8; // eax
  struct LFONT *v9; // edi
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  v3 = 0;
  v11[1] = 0;
  v11[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  v6 = v11[0];
  if ( v11[0] )
  {
    if ( !a3 )
    {
      if ( (*(_DWORD *)(HmgPentryFromPobj(v11[0]) + 4) & 0xFFFFFFFE) == 0 )
      {
LABEL_13:
        XDCOBJ::vUnlockFast((XDCOBJ *)v11);
        return v3;
      }
      v6 = v11[0];
    }
    v7 = *(int **)(v6 + 100);
    if ( v7 )
      v3 = *v7;
    if ( a2 == v3 )
      goto LABEL_13;
    LOBYTE(v5) = 10;
    v8 = (struct LFONT *)HmgShareLockCheck(a2, v5);
    v9 = v8;
    if ( v8 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v8) + 11) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v11[0] + 100));
        *(_DWORD *)(v11[0] + 100) = v9;
        *(_DWORD *)(*(_DWORD *)(v11[0] + 1020) + 300) = a2;
        *(_DWORD *)(v11[0] + 1552) = 0;
        *(_DWORD *)(*(_DWORD *)(v11[0] + 1020) + 184) |= 0x10u;
        *(_DWORD *)(*(_DWORD *)(v11[0] + 1020) + 184) &= ~0x20u;
        goto LABEL_13;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v9);
    }
    v3 = 0;
    goto LABEL_13;
  }
  return v3;
}
