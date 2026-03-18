/*
 * XREFs of ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C0064CD4
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C0064A40 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0065CEC (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0064E48 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 */

__int64 __fastcall EFSOBJ::bAdd(EFSOBJ *a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 v10; // rdx
  char *v12; // rsi
  int v13; // r12d
  unsigned __int8 *v15; // rdi
  unsigned __int8 v16; // cl
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // al
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+28h] [rbp-8h]
  __int64 v23; // [rsp+68h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  v7 = a5;
  v23 = 0LL;
  v21 = a2;
  v10 = *(int *)(v5 + 40);
  LODWORD(v23) = a3;
  BYTE5(v23) = a5;
  v12 = (char *)(v5 + v10);
  v22 = v5 + v10 + 16;
  v13 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    BYTE4(v23) = 2;
    if ( a5 == 1 )
    {
      if ( (_DWORD)v10 )
        v19 = *v12;
      else
        v19 = *(_BYTE *)(v5 + 44);
      BYTE5(v23) = v19;
    }
  }
  EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v23, (struct PFEOBJ *)&v21);
  if ( v13 )
  {
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) )
      {
        v15 = (unsigned __int8 *)(v12 + 1);
        v16 = v12[1];
        if ( v16 != 1 )
        {
          v17 = v22;
          v18 = v16;
          do
          {
            if ( v18 > 0xFDu )
              break;
            if ( (unsigned __int64)v15 >= v17 )
              break;
            BYTE5(v23) = v16;
            LODWORD(v23) = a3;
            BYTE4(v23) = 2;
            HIWORD(v23) = 0;
            EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v23, (struct PFEOBJ *)&v21);
            v16 = *++v15;
            v18 = *v15;
          }
          while ( *v15 != 1 );
        }
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 132) )
  {
    do
    {
      LODWORD(v23) = a3;
      BYTE4(v23) = 3;
      v20 = *(unsigned __int8 *)(v6 + a2 + 140);
      HIWORD(v23) = *(unsigned __int8 *)(v6 + a2 + 140);
      BYTE5(v23) = *((_BYTE *)gpfsTable + 196 * v20 + 128);
      EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v23, (struct PFEOBJ *)&v21);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a2 + 132) );
  }
  return 1LL;
}
