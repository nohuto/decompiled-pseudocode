/*
 * XREFs of _ForceDisplayAffinity@4 @ 0x1A5967
 * Callers:
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 */

int __thiscall ForceDisplayAffinity(_DWORD *this)
{
  if ( (*(_BYTE *)(this[5] + 19) & 0x20) == 0 )
    ComposeWindowIfNeeded((int)this, 1);
  return ChangeWindowTreeProtection((int)this, 1);
}
