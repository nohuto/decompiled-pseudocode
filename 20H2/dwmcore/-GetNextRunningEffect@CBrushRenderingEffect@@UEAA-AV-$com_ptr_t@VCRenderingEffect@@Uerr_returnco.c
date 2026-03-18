/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800B5AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800B5E80 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CBrushRenderingEffect::GetNextRunningEffect(__int64 a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // r11d
  unsigned int v12; // ebp
  _BYTE *v13; // r8
  char *v14; // r9
  _BYTE *v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r10
  __int64 v18; // rax
  bool v19; // zf

  *a4 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3) == 2 )
  {
    if ( a3 != (_QWORD *)a1 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 != a3[2] )
      {
LABEL_6:
        v10 = a3;
LABEL_7:
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
          a2,
          v10);
        return a2;
      }
      v11 = *(_DWORD *)(v9 + 60);
      v12 = 0;
      if ( v11 )
      {
        v13 = (char *)a3 + 217;
        v14 = (char *)a3 - a1;
        v15 = (_BYTE *)(a1 + 64);
        v16 = 0LL;
        v17 = a1 - (_QWORD)a3;
        do
        {
          v18 = *((_QWORD *)v15 - 5);
          v19 = v18
              ? v18 == *(_QWORD *)&v15[(_QWORD)v14 - 40]
              : *(_QWORD *)&v15[(_QWORD)v14 - 32 + v17] == *(_QWORD *)&v15[(_QWORD)v14 - 32];
          if ( !v19
            || *v15 != v15[(_QWORD)v14]
            || v13[v17 - 1] != *(v13 - 1)
            || v13[v17] != *v13
            || v13[v17 + 1] != v13[1]
            || *(_BYTE *)(v16 + a1 + 356) != *((_BYTE *)a3 + v16 + 356) )
          {
            goto LABEL_6;
          }
          ++v12;
          ++v16;
          v13 += 3;
          v15 += 48;
        }
        while ( v12 < v11 );
      }
    }
    *a4 = 1;
    v10 = (_QWORD *)a1;
    goto LABEL_7;
  }
  *a2 = a3;
  (*(void (__fastcall **)(_QWORD *))*a3)(a3);
  return a2;
}
