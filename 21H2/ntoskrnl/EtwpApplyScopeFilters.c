/*
 * XREFs of EtwpApplyScopeFilters @ 0x140638F28
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1406BB9AC (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x140940844 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140940984 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140940A4C (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, char a4, _BYTE *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r9
  char v11; // dl
  __int64 v12; // rsi
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rcx
  _DWORD *v16; // r11
  __int64 v17; // rcx

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a5 = 0;
    if ( a3 )
      v8 = *(_QWORD *)(a1 + 40);
    else
      v8 = *(_QWORD *)(a1 + 32);
    if ( a4 )
      v8 = *(_QWORD *)(v8 + 400);
    v9 = 0LL;
    do
    {
      if ( *(_DWORD *)(32 * (v9 + 4) + v8)
        && (!a4 || (*(_DWORD *)(32LL * (unsigned int)v9 + v8 + 136) & 0x400) != 0)
        && (!a2 || *(_WORD *)(32LL * (unsigned int)v9 + v8 + 134) == *(_WORD *)(v8 + 88)) )
      {
        v10 = *(_QWORD *)(v8 + 384);
        v11 = 1;
        if ( !v10 )
          goto LABEL_13;
        v12 = 104LL * (unsigned int)v9;
        v13 = *(_DWORD *)(v12 + v10);
        if ( (v13 & 0x80000004) != 0x80000004 )
          goto LABEL_26;
        v16 = *(_DWORD **)(v12 + v10 + 8);
        v11 = 0;
        v17 = 0LL;
        if ( *v16 )
        {
          while ( v16[v17 + 1] != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 1088LL) )
          {
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= *v16 )
              goto LABEL_37;
          }
          v11 = 1;
        }
LABEL_37:
        if ( v11 )
        {
LABEL_26:
          if ( (v13 & 0x80000008) == 0x80000008 )
            v11 = EtwpApplyExeFilter(a1, *(_QWORD *)(v12 + v10 + 16));
          if ( v11 )
          {
            v14 = *(_QWORD *)(v8 + 384);
            if ( (*(_DWORD *)(v12 + v14) & 0x80000010) == 0x80000010
              || (*(_DWORD *)(v12 + v14) & 0x80000020) == 0x80000020 )
            {
              v11 = EtwpApplyPackageIdFilter(a1, *(_QWORD *)(v12 + v14 + 24), *(_QWORD *)(v12 + v14 + 32));
            }
            if ( v11 )
            {
              v15 = *(_QWORD *)(v8 + 384);
              if ( (*(_DWORD *)(v12 + v15) & 0x80008000) == 0x80008000 )
                v11 = EtwpApplyContainerFilter(a1, *(_QWORD *)(v12 + v15 + 40));
              if ( v11 )
LABEL_13:
                *a5 |= 1 << v9;
            }
          }
        }
        if ( a2 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < 8 );
  }
}
