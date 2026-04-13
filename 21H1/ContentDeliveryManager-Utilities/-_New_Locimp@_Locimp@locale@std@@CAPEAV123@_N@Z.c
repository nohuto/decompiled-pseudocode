/*
 * XREFs of ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z @ 0x1800AECF8
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800AEAE0 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18004C8D4 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 */

void **__fastcall std::locale::_Locimp::_New_Locimp(char a1)
{
  void **v2; // rax
  void **v3; // rbx

  v2 = (void **)operator new(0x38uLL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *((_DWORD *)v2 + 2) = 1;
  v2[2] = 0LL;
  v2[3] = 0LL;
  *((_DWORD *)v2 + 8) = 0;
  *v2 = &std::locale::_Locimp::`vftable';
  *((_BYTE *)v2 + 36) = a1;
  v2[5] = 0LL;
  *((_BYTE *)v2 + 48) = 0;
  std::_Yarn<char>::operator=(v2 + 5, "*");
  return v3;
}
