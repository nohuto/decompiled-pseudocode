/*
 * XREFs of ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C009A558
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C009A120 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00812E0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?Feature_Servicing_HangGdi_28656583__private_IsEnabled@@YAHXZ @ 0x1C00CF1B8 (-Feature_Servicing_HangGdi_28656583__private_IsEnabled@@YAHXZ.c)
 *     memcmp @ 0x1C00D28C0 (memcmp.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddScans(RGNMEMOBJ *this, int a2, struct EDGE *a3, char a4)
{
  unsigned int v8; // ebx
  int IsEnabled; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v14; // edi
  _DWORD *v15; // r14
  struct EDGE *v16; // rax
  char *v17; // rbp
  _DWORD *v18; // rbx
  int v19; // ecx
  _DWORD *v20; // rbx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  char *v26; // rdi

  v8 = 4 * *((_DWORD *)a3 + 4) + 16;
  if ( v8 > *(_DWORD *)(*(_QWORD *)this + 24LL) - *(_DWORD *)(*(_QWORD *)this + 80LL) )
  {
    IsEnabled = Feature_Servicing_HangGdi_28656583__private_IsEnabled();
    v10 = *(_DWORD *)(*(_QWORD *)this + 24LL);
    if ( IsEnabled )
    {
      v11 = v10 + v8;
      if ( v10 + v8 < v10 )
        return 0LL;
      v12 = v11 + 1120;
      if ( v11 + 1120 < v11 )
        return 0LL;
    }
    else
    {
      v12 = v8 + v10 + 1120;
    }
    if ( !(unsigned int)RGNOBJ::bExpand(this, v12) )
      return 0LL;
  }
  v14 = a4 & 2;
  v15 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  v16 = *(struct EDGE **)a3;
  v17 = (char *)(v15 + 2);
  v15[2] = 0x80000000;
  v18 = v15 + 2;
  if ( v16 != a3 )
  {
    if ( v14 )
    {
      do
      {
        v19 = *((_DWORD *)v16 + 3);
        if ( *v18 >= v19 )
        {
          v20 = v18 - 1;
        }
        else
        {
          v20 = v18 + 1;
          *v20 = v19;
        }
        v21 = *((_DWORD *)v16 + 10);
        do
        {
          v16 = *(struct EDGE **)v16;
          v21 += *((_DWORD *)v16 + 10);
        }
        while ( v21 );
        v22 = *((_DWORD *)v16 + 3);
        if ( *v20 >= v22 )
        {
          v18 = v20 - 1;
        }
        else
        {
          v18 = v20 + 1;
          *v18 = v22;
        }
        v16 = *(struct EDGE **)v16;
      }
      while ( v16 != a3 );
    }
    else
    {
      do
      {
        v23 = *((_DWORD *)v16 + 3);
        if ( *v18 >= v23 )
          --v18;
        else
          *++v18 = v23;
        v16 = *(struct EDGE **)v16;
      }
      while ( v16 != a3 );
    }
  }
  v24 = (unsigned __int64)((char *)v18 - v17) >> 2;
  v25 = (unsigned int)(4 * *(v15 - 1) + 16);
  v26 = (char *)v15 - v25 - 4;
  if ( *(_DWORD *)((char *)v15 - v25) == (_DWORD)v24 && !memcmp(v26 + 16, v15 + 3, 4LL * (unsigned int)v24) )
  {
    *((_DWORD *)v26 + 3) = a2 + 1;
  }
  else
  {
    ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * v24 + 16;
    *(_DWORD *)v17 = a2 + 1;
    *v15 = v24;
    v15[1] = a2;
    v15[(unsigned int)v24 + 3] = v24;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v15 + (unsigned int)(4 * *v15 + 16);
  }
  return 1LL;
}
