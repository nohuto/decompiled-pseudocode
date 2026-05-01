/*
 * XREFs of ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x1803AD448
 * Callers:
 *     ?_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18039B634 (-_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18039B68C (-_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

__int64 ElementHelpers::GetModifierKeyState()
{
  unsigned int v0; // edi
  int *v1; // rbx

  v0 = 0;
  v1 = (int *)&unk_180541BA0;
  do
  {
    if ( GetKeyState(*v1) < 0 )
      v0 |= v1[1];
    v1 += 2;
  }
  while ( v1 != (int *)&unk_180541BC8 );
  return v0;
}
