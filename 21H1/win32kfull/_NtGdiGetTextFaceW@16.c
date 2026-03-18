/*
 * XREFs of _NtGdiGetTextFaceW@16 @ 0x497CA
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetTextFaceW@16 @ 0x49888 (_GreGetTextFaceW@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetTextFaceW(HDC a1, int a2, char *a3, int a4)
{
  int v4; // edi
  BOOL v5; // eax
  void *v6; // esi
  int TextFaceW; // eax
  char *v8; // ebx

  v4 = 0;
  v5 = 1;
  v6 = 0;
  if ( a2 > 0 && a3 )
  {
    if ( (unsigned int)a2 <= 0x1388000 )
      v6 = (void *)AllocFreeTmpBuffer(2 * a2);
    v5 = v6 != 0;
  }
  if ( v5 )
  {
    TextFaceW = GreGetTextFaceW(a1, v6, a4);
    v4 = TextFaceW;
    if ( TextFaceW > 0 && a3 )
    {
      if ( TextFaceW > a2 )
        v4 = 0;
      if ( v4 )
      {
        v8 = &a3[2 * v4];
        if ( (unsigned int)v8 > _MmUserProbeAddress || v8 <= a3 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a3, v6, 2 * v4);
      }
    }
    if ( v6 )
      FreeTmpBuffer(v6);
  }
  return v4;
}
