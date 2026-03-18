/*
 * XREFs of Is31TrayWindow @ 0x1C023D650
 * Callers:
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00BCA54 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C023D5D4 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall Is31TrayWindow(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 result; // rax
  _BYTE *v4; // rcx
  char v5; // al

  v1 = *(_QWORD *)(a1 + 120);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_BYTE **)(v1 + 40);
    if ( (char)v4[24] >= 0 )
      result = (v4[20] & 0x40) == 0 && ((v5 = v4[30], (v5 & 0xA) == 0) || (v5 & 0xC0) == 0 && (v4[31] & 0x20) == 0)
            || IsVSlick((struct tagWND *)v1);
    else
      return 0LL;
  }
  else
  {
    LOBYTE(v2) = !IsVSlick((struct tagWND *)a1);
    return v2;
  }
  return result;
}
