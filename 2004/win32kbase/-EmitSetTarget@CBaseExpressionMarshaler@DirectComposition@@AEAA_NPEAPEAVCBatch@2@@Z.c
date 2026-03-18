/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009F134
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009EF20 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bp
  __int64 v4; // rbx
  _DWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // rax
  _DWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    v4 = 0LL;
    v12 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, (void **)&v12) )
    {
      v5 = v12;
      *v12 = 52;
      *(_OWORD *)(v5 + 1) = 0LL;
      *(_OWORD *)(v5 + 5) = 0LL;
      *(_OWORD *)(v5 + 9) = 0LL;
      v5[1] = 26;
      v5[2] = *((_DWORD *)this + 6);
      if ( (*((_BYTE *)this + 120) & 1) != 0 && (v6 = *((_QWORD *)this + 9)) != 0 && (v7 = *(_QWORD *)(v6 + 16)) != 0 )
      {
        v5[4] = *(_DWORD *)(v7 + 24);
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 9) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL));
      }
      else
      {
        v5[4] = 0;
        v8 = 0;
      }
      v5[3] = v8;
      v5[5] = *((_DWORD *)this + 20);
      v5[10] = *((_DWORD *)this + 16);
      *((_BYTE *)v5 + 44) = (*((_BYTE *)this + 120) & 0x10) != 0;
      v9 = *((_QWORD *)this + 11);
      if ( v9 )
      {
        *((_WORD *)v5 + 18) = *(unsigned __int8 *)(v9 + 4);
        *((_WORD *)v5 + 19) = **((_WORD **)this + 11);
        v11 = *((_QWORD *)this + 11);
        if ( *(_DWORD *)v11 == 1 )
        {
          v4 = *(unsigned __int8 *)(v11 + 8);
        }
        else if ( *(_DWORD *)v11 == 2 )
        {
          v4 = *(_QWORD *)(v11 + 8);
        }
      }
      else
      {
        v5[9] = 0;
      }
      *(_QWORD *)(v5 + 7) = v4;
      *((_DWORD *)this + 4) |= 0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
