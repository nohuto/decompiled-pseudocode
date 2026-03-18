/*
 * XREFs of ?ResetEdgyDataFrames@Edgy@@YGXQAX@Z @ 0x16E1FC
 * Callers:
 *     _EditionEdgyResetDataFrames@4 @ 0x16F13E (_EditionEdgyResetDataFrames@4.c)
 * Callees:
 *     <none>
 */

void __thiscall Edgy::ResetEdgyDataFrames(void *ecx0)
{
  int v1; // eax
  int v2; // eax

  if ( _grpdeskRitInput )
  {
    v1 = *(_DWORD *)(_grpdeskRitInput + 140);
    if ( v1 )
    {
      if ( *(void **)(v1 + 200) == ecx0 )
        *(_DWORD *)(v1 + 200) = 0;
      v2 = *(_DWORD *)(_grpdeskRitInput + 140);
      if ( *(void **)(v2 + 204) == ecx0 )
        *(_DWORD *)(v2 + 204) = 0;
    }
  }
}
