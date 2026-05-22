/*
 * XREFs of ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018F608
 * Callers:
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x18018CC88 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::TreatTouchpadPressAsInteraction(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  __int64 v2; // rax
  char v5; // di
  volatile signed __int32 *v6; // rcx
  bool v7; // si
  int v8; // ebp
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  char v11; // si
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  char v14; // si
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rax
  volatile signed __int32 *v17; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 629);
  LODWORD(v17) = 0;
  v5 = 1;
  v6 = *(volatile signed __int32 **)(v2 + 24);
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = *(volatile signed __int32 **)(v2 + 24);
  }
  v7 = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 10LL) && *((_DWORD *)a2 + 17) != 3;
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  v8 = 2;
  if ( v7 )
  {
    *((_DWORD *)a2 + 17) = 2;
  }
  else
  {
    v9 = *((_QWORD *)this + 629);
    v10 = *(volatile signed __int32 **)(v9 + 24);
    if ( v10 )
    {
      _InterlockedAdd(v10 + 2, 1u);
      v10 = *(volatile signed __int32 **)(v9 + 24);
    }
    v11 = *(_BYTE *)(*(_QWORD *)(v9 + 16) + 8LL);
    if ( v10 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
    if ( v11 )
    {
      *((_DWORD *)a2 + 17) = 3;
    }
    else
    {
      v12 = *((_QWORD *)this + 629);
      v13 = *(volatile signed __int32 **)(v12 + 24);
      if ( v13 )
      {
        _InterlockedAdd(v13 + 2, 1u);
        v13 = *(volatile signed __int32 **)(v12 + 24);
      }
      v14 = *(_BYTE *)(*(_QWORD *)(v12 + 16) + 12LL);
      if ( v13 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
      if ( v14 )
        *((_DWORD *)a2 + 17) = 4;
    }
  }
  if ( *((_BYTE *)a2 + 704) )
  {
    v15 = v17;
    v8 = 0;
  }
  else
  {
    v16 = *((_QWORD *)this + 629);
    v15 = *(volatile signed __int32 **)(v16 + 24);
    if ( v15 )
    {
      _InterlockedAdd(v15 + 2, 1u);
      v15 = *(volatile signed __int32 **)(v16 + 24);
    }
    v5 = *(_BYTE *)(*(_QWORD *)(v16 + 16) + 8LL);
  }
  *((_BYTE *)a2 + 704) = v5;
  if ( v8 )
  {
    if ( v15 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
  }
}
