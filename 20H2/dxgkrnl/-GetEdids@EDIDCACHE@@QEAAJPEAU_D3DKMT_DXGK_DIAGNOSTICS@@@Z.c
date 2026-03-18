/*
 * XREFs of ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C02753C8
 * Callers:
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall EDIDCACHE::GetEdids(EDIDCACHE *this, struct _D3DKMT_DXGK_DIAGNOSTICS *a2)
{
  struct DXGFASTMUTEX *v4; // rdx
  unsigned int v6; // edx
  EDIDCACHE *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  char *v11; // rbx
  unsigned int v12; // r9d
  unsigned int i; // r8d
  char *v14; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( !v4 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v6 = 0;
  v7 = this;
  v8 = 4LL;
  do
  {
    v9 = v6 + 1;
    if ( !*(_QWORD *)v7 )
      v9 = v6;
    v7 = (EDIDCACHE *)((char *)v7 + 152);
    v6 = v9;
    --v8;
  }
  while ( v8 );
  if ( *(unsigned int *)a2 >= 152 * (unsigned __int64)v9 )
  {
    v11 = (char *)a2 + 4;
    v12 = 0;
    for ( i = 0; v12 < v9; ++i )
    {
      if ( i >= 4 )
        break;
      v14 = (char *)this + 152 * i;
      if ( *(_QWORD *)v14 )
      {
        *(_OWORD *)v11 = *(_OWORD *)v14;
        *((_OWORD *)v11 + 1) = *((_OWORD *)v14 + 1);
        *((_OWORD *)v11 + 2) = *((_OWORD *)v14 + 2);
        *((_OWORD *)v11 + 3) = *((_OWORD *)v14 + 3);
        *((_OWORD *)v11 + 4) = *((_OWORD *)v14 + 4);
        *((_OWORD *)v11 + 5) = *((_OWORD *)v14 + 5);
        *((_OWORD *)v11 + 6) = *((_OWORD *)v14 + 6);
        *((_OWORD *)v11 + 7) = *((_OWORD *)v14 + 7);
        *((_OWORD *)v11 + 8) = *((_OWORD *)v14 + 8);
        *((_QWORD *)v11 + 18) = *((_QWORD *)v14 + 18);
        v11 += 152;
        ++v12;
      }
    }
    v10 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 152 * v9;
    v10 = 1075707914;
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v9);
  return v10;
}
