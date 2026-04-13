/*
 * XREFs of ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800AF9E8
 * Callers:
 *     ?_Init@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800AF9A4 (-_Init@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinf.c)
 * Callees:
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800AFB80 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 *     _Getcvt @ 0x1800B3D8C (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800B410C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800CFDA8 (memcpy_0.c)
 */

_QWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getvals<wchar_t>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _Cvtvec *v5; // rax
  wchar_t *v6; // rax
  wchar_t *v7; // rbx
  const wchar_t *v8; // rbp
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  void *v11; // rbx
  wchar_t *v12; // rax
  wchar_t *v13; // rbx
  const wchar_t *v14; // rbp
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  void *v17; // rbx
  _QWORD *result; // rax
  _Cvtvec v19; // [rsp+20h] [rbp-48h] BYREF

  v5 = Getcvt(&v19);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 60) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 76) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = _W_Getdays();
  v7 = v6;
  if ( v6 )
  {
    std::_Yarn<wchar_t>::operator=(a3 + 40, v6);
    free(v7);
  }
  v8 = L":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if ( *(_QWORD *)(a3 + 40) )
    v8 = *(const wchar_t **)(a3 + 40);
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  v10 = v9 + 1;
  v11 = operator new[](saturated_mul(v10, 2uLL));
  memcpy_0(v11, v8, 2 * v10);
  *(_QWORD *)(a1 + 16) = v11;
  v12 = _W_Getmonths();
  v13 = v12;
  if ( v12 )
  {
    std::_Yarn<wchar_t>::operator=(a3 + 56, v12);
    free(v13);
  }
  v14 = L":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov"
         ":November:Dec:December";
  v15 = -1LL;
  if ( *(_QWORD *)(a3 + 56) )
    v14 = *(const wchar_t **)(a3 + 56);
  do
    ++v15;
  while ( v14[v15] );
  v16 = v15 + 1;
  v17 = operator new[](saturated_mul(v16, 2uLL));
  memcpy_0(v17, v14, 2 * v16);
  *(_QWORD *)(a1 + 24) = v17;
  result = operator new[](0x1AuLL);
  *(_OWORD *)result = *(_OWORD *)L":AM:am:PM:pm";
  result[2] = *(_QWORD *)L"M:pm";
  *((_WORD *)result + 12) = aAmAmPmPm_0[12];
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
