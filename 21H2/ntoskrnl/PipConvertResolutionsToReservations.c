/*
 * XREFs of PipConvertResolutionsToReservations @ 0x1407CD888
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736358 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipDeleteAllDependencyRelations @ 0x1407CD770 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x1407CD8F0 (PipDeleteBindingIds.c)
 *     PipSetDependency @ 0x14089E154 (PipSetDependency.c)
 */

__int64 __fastcall PipConvertResolutionsToReservations(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = 0LL;
  if ( a1 )
  {
    v3 = 0;
    PipDeleteBindingIds(a1, a2);
    v4 = (_QWORD *)(a1 + 32);
    v5 = *(_QWORD **)(a1 + 32);
    while ( v5 != v4 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      if ( !*((_BYTE *)v7 + 56) )
      {
        v8 = (_QWORD *)v7[5];
        while ( v8 != v7 + 5 )
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
          if ( *((_DWORD *)v9 + 4) == 1 )
          {
            v10 = v7[3];
            LODWORD(v11) = 0;
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(v10 + 48);
            v3 = PipSetDependency(&v11);
          }
        }
        *((_BYTE *)v7 + 56) = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
