/*
 * XREFs of _GreExtEscape@24 @ 0x1D8C5F
 * Callers:
 *     _NtGdiExtEscape@32 @ 0x8B698 (_NtGdiExtEscape@32.c)
 *     ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909 (-GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 */

int __fastcall GreExtEscape(HDC a1, int a2, struct DCOBJ *a3, int *a4, unsigned int a5, char *a6)
{
  int v7; // esi
  int v9; // eax
  int v11; // [esp+0h] [ebp-38h]
  char *v12; // [esp+4h] [ebp-34h]
  _DWORD v13[3]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD v14[3]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v15[16]; // [esp+24h] [ebp-14h] BYREF
  int v16; // [esp+34h] [ebp-4h]

  v7 = 0;
  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v7 = GreExtEscapeInternal(a2, (struct XDCOBJ *)v13, a3, a4, a5, a6, v11, v12);
  }
  else
  {
    v14[1] = 0;
    v14[0] = 0;
    v14[2] = 1;
    v16 = 0;
    v9 = PushThreadGuardedObject(v15, v14, XFERDCOBJ::ThreadCleanup);
    v16 = v9;
    if ( v9 )
    {
      XDCOBJ::vLock((XDCOBJ *)v14, a1);
      v9 = v16;
    }
    if ( v14[0] )
    {
      v7 = GreExtEscapeInternal(a2, (struct XDCOBJ *)v14, a3, a4, a5, a6, v11, v12);
      v9 = v16;
    }
    if ( v9 )
      PopThreadGuardedObject(v15);
    if ( v14[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v7;
}
