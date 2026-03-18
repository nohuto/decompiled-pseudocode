/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18009BF24
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009BDDC (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180096BB8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x18009C054 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x18009C074 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x18009C674 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x1801AC920 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  char *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int inserted; // eax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  struct CBaseExpression *v18; // [rsp+68h] [rbp+18h] BYREF

  v18 = a2;
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v4 = (char *)this + 32 * *((unsigned int *)this + 41);
  v5 = *((_DWORD *)v4 + 48);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v6 <= *((_DWORD *)v4 + 47) )
    {
      *(_QWORD *)(*((_QWORD *)v4 + 21) + 8LL * v5) = a2;
      *((_DWORD *)v4 + 48) = v6;
      goto LABEL_4;
    }
    v13 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v4 + 168), 8u, (__int64)v4, &v18);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v9, 0x50u, 0LL);
    goto LABEL_11;
  }
LABEL_4:
  v15 = *((_QWORD *)v18 + 22);
  v16 = *((_DWORD *)v18 + 46);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(
               this,
               (struct CTargetMapEntry *)&v15,
               v18,
               *((struct SubchannelMaskInfo **)v18 + 24));
  v9 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, inserted, 0x5Bu, 0LL);
    DynArray<CBaseExpression *,1>::Remove((char *)this + 32 * *((unsigned int *)this + 41) + 168, &v18);
  }
  else
  {
    if ( (*((_BYTE *)this + 416) & 4) == 0 )
    {
      v10 = *((_QWORD *)v18 + 22);
      if ( v10 )
        v10 = *(_QWORD *)(v10 + 16);
      if ( v10 )
      {
        SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v10, v16);
        if ( SourceAnimationsForProperty )
        {
          if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
            *((_BYTE *)this + 416) |= 4u;
        }
      }
    }
    v9 = 0;
  }
LABEL_11:
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v15);
  return (unsigned int)v9;
}
