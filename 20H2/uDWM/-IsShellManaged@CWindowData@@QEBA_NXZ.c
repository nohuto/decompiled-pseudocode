/*
 * XREFs of ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x1800130DC
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001110C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180012FE4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsShellManaged(CWindowData *this)
{
  bool result; // al

  result = *((_BYTE *)this + 613) & 1;
  if ( result )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return result;
}
