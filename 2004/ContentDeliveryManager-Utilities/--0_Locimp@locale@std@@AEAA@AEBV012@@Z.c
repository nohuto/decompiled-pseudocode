/*
 * XREFs of ??0_Locimp@locale@std@@AEAA@AEBV012@@Z @ 0x1800B1000
 * Callers:
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z @ 0x1800B1318 (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z.c)
 * Callees:
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18004EF34 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ?_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z @ 0x1800B58D4 (-_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z.c)
 */

// Hidden C++ exception states: #wind=2
std::locale::_Locimp *__fastcall std::locale::_Locimp::_Locimp(
        std::locale::_Locimp *this,
        const struct std::locale::_Locimp *a2)
{
  _BYTE *v4; // rdx
  void **v5; // rcx

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &std::locale::_Locimp::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_BYTE *)this + 36) = *((_BYTE *)a2 + 36);
  v4 = (_BYTE *)*((_QWORD *)a2 + 5);
  if ( !v4 )
    v4 = (char *)a2 + 48;
  v5 = (void **)((char *)this + 40);
  *v5 = 0LL;
  *((_BYTE *)v5 + 8) = 0;
  std::_Yarn<char>::operator=(v5, v4);
  std::locale::_Locimp::_Locimp_ctor(this, a2);
  return this;
}
