/*
 * XREFs of ?MulSynchronizeRedirectionBitmaps@@YGJPAUDHPDEV__@@PA_K@Z @ 0x204C12
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulSynchronizeRedirectionBitmaps(struct DHPDEV__ *a1, unsigned __int64 *a2)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int v4; // edx
  _DWORD *v5; // eax
  int (__stdcall *v6)(_DWORD, unsigned __int64 *); // edi

  v2 = -1073741823;
  v3 = *(_DWORD **)a1;
  v4 = *((_DWORD *)a1 + 2);
  while ( 1 )
  {
    v5 = (_DWORD *)v3[9];
    if ( (v5[280] & 0x8000000) == 0 )
    {
      v6 = (int (__stdcall *)(_DWORD, unsigned __int64 *))v5[572];
      if ( v6 )
        break;
    }
    v3 = (_DWORD *)*v3;
    if ( !--v4 )
      return v2;
  }
  return v6(v5[277], a2);
}
