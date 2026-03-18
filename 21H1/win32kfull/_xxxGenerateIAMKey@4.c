/*
 * XREFs of _xxxGenerateIAMKey@4 @ 0xE10C8
 * Callers:
 *     _xxxSetShellWindow@8 @ 0xE0F54 (_xxxSetShellWindow@8.c)
 * Callees:
 *     ?xxxCallGenerateIAMKey@@YGJPAUtagIAM_KKEY@@@Z @ 0x1416FE (-xxxCallGenerateIAMKey@@YGJPAUtagIAM_KKEY@@@Z.c)
 */

int __thiscall xxxGenerateIAMKey(_DWORD *this)
{
  _DWORD *v1; // esi
  int result; // eax
  struct tagIAM_KKEY *v3; // [esp+0h] [ebp-Ch]
  int v4; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  v1 = this + 40;
  result = SystemPrng(&v4, 8);
  if ( result )
  {
    v1[2] = v4;
    v1[3] = v5;
    goto LABEL_3;
  }
  result = xxxCallGenerateIAMKey(v3);
  if ( result < 0 )
  {
    result = 0;
LABEL_3:
    if ( !result )
      return result;
  }
  *v1 = 1;
  return result;
}
