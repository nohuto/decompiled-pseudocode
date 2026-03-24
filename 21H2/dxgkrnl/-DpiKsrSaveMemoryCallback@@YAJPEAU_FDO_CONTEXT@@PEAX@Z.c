/*
 * XREFs of ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x1C02D25C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z @ 0x1C02D23B8 (-DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z.c)
 */

__int64 __fastcall DpiKsrSaveMemoryCallback(struct _FDO_CONTEXT *a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // [rsp+48h] [rbp+10h] BYREF

  v5 = (unsigned int)a2[8];
  if ( (int)v5 < 0 )
    return (unsigned int)v5;
  if ( a2[2]
    && (*((_DWORD *)a1 + 1380) & 2) != 0
    && (v7 = DpiDxgkDdiSaveMemoryForHotUpdate(a1, (const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *)a2, a3),
        a2[8] = v7,
        v5 = (unsigned int)v7,
        v7 < 0) )
  {
    v9 = WdLogNewEntry5_WdError(v8, (unsigned int)v7);
    *(_QWORD *)(v9 + 24) = (int)a2[8];
    WdLogEvent5_WdError(v9);
  }
  else if ( (*a2 & 1) != 0 )
  {
    LOBYTE(v5) = 1;
    KsrFreePersistedMemory((char *)a1 + 4856, v5);
    KsrFreePersistedMemory((char *)a1 + 4872, 0LL);
  }
  else if ( (int)v5 >= 0 )
  {
    if ( *((_QWORD *)a2 + 2) )
    {
      v10 = a2[2];
      if ( v10 <= 0x18 )
        return (unsigned int)a2[8];
      v11 = *((_QWORD *)a2 + 3);
      v12 = v10 - 24;
      v13 = *(_QWORD *)(*((_QWORD *)a1 + 487) + 2704LL);
      v14 = 0;
      v21 = 0;
      if ( v13 && (v15 = *(_QWORD *)(v13 + 1632)) != 0 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v15 + 32LL))(
                v15,
                v12,
                v11 + 24,
                &v21);
        v14 = v21;
      }
      else
      {
        v16 = 0;
      }
      a2[8] = v16;
      if ( v16 < 0 || !v14 )
        return (unsigned int)a2[8];
      *(_OWORD *)v11 = *(_OWORD *)((char *)a1 + 4856);
      *(_DWORD *)(v11 + 20) = v21;
      *((_QWORD *)a2 + 3) += (unsigned int)(v21 + 24);
    }
    else
    {
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 487) + 2704LL);
      v18 = 0;
      if ( v17 && (v21 = 0, (v19 = *(_QWORD *)(v17 + 1632)) != 0) )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v19 + 32LL))(v19, 0LL, 0LL, &v21);
        v18 = v21;
      }
      else
      {
        v20 = 0;
      }
      a2[8] = v20;
      if ( !v18 )
        return (unsigned int)a2[8];
      a2[2] += v18 + 24;
    }
    ++a2[1];
  }
  return (unsigned int)a2[8];
}
