/*
 * XREFs of ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C00245AC
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C002415C (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00C4610 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C00C6010 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

void __fastcall EPATHOBJ::growlastrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  __int64 v4; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned int v13; // edi
  struct _POINTL *v14; // rdx
  struct _POINTFIX *v15; // rdx
  struct _POINTFIX *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax

  v4 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v4 + 40);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v4 + 24);
    if ( v9 )
    {
      if ( *(_DWORD *)a3 == (*(_DWORD *)(v8 + 16) & 0xFFFFFFFC) )
      {
        LODWORD(v10) = 0;
        v11 = v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL);
        v12 = v9 + *(unsigned int *)(v9 + 16);
        if ( v12 > v11 )
          v10 = (__int64)(v12 - v11) >> 3;
        v13 = *((_DWORD *)a3 + 1);
        if ( (unsigned int)v10 <= v13 )
          v13 = v10;
        if ( (*(_DWORD *)a3 & 0x10) != 0 )
          v13 = 3 * (v13 / 3);
        if ( v13 )
        {
          v14 = (struct _POINTL *)*((_QWORD *)a3 + 1);
          if ( a2 )
            EXFORMOBJ::bXformRound(a2, v14, (struct _POINTFIX *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL)), v13);
          else
            memmove((void *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL)), v14, 8LL * v13);
          v15 = (struct _POINTFIX *)(v8 + 24 + 8LL * *(unsigned int *)(v8 + 20));
          do
          {
            ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v15);
            v15 = v16 + 1;
          }
          while ( v17 != 1 );
          v18 = *(_DWORD *)(v8 + 20);
          *((_DWORD *)a3 + 1) -= v13;
          v19 = v13 + v18;
          *(_DWORD *)(v8 + 20) = v19;
          *((_QWORD *)a3 + 1) += 8LL * v13;
          *(_QWORD *)(v9 + 8) = v8 + 8 * (v19 + 3);
        }
      }
    }
  }
}
