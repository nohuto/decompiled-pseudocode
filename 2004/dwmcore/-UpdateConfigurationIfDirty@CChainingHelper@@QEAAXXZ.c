/*
 * XREFs of ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180214650
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CB518 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180213184 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x1802145C0 (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___ @ 0x18021426C (CChainingHelper--RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___.c)
 *     CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___ @ 0x1802142D0 (CChainingHelper--RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___.c)
 *     CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___ @ 0x1802143F4 (CChainingHelper--RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___.c)
 */

void __fastcall CChainingHelper::UpdateConfigurationIfDirty(CChainingHelper *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  CChainingHelper *v5; // rbx
  int v6; // eax
  CChainingHelper *v7; // rdx
  __int64 v8; // r10
  _QWORD v9[4]; // [rsp+20h] [rbp-20h] BYREF
  CChainingHelper *v10; // [rsp+50h] [rbp+10h] BYREF
  int v11; // [rsp+58h] [rbp+18h] BYREF
  CChainingHelper *v12; // [rsp+60h] [rbp+20h] BYREF

  v4 = *((_BYTE *)this + 36);
  v5 = this;
  if ( (v4 & 1) != 0 )
  {
    v6 = 0;
    LOBYTE(a3) = 0;
    v11 = 0;
    LOBYTE(a4) = 0;
    LOBYTE(v10) = 0;
    v7 = this;
    v8 = 3LL;
    do
    {
      LOBYTE(this) = *(_BYTE *)v7;
      if ( (*(_BYTE *)v7 & 1) != 0 )
      {
        v6 |= *((_DWORD *)v7 + 1);
        LOBYTE(a4) = 1;
        LOBYTE(this) = ((unsigned __int8)this & 2) != 0;
        LOBYTE(a3) = (unsigned __int8)this | a3;
      }
      v7 = (CChainingHelper *)((char *)v7 + 12);
      --v8;
    }
    while ( v8 );
    v11 = v6;
    LOBYTE(v10) = a3;
    if ( (_BYTE)a4 )
    {
      v9[0] = v5;
      v9[1] = &v10;
      v9[2] = &v11;
      CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___((__int64)this, (__int64)v9);
    }
    else
    {
      v12 = v5;
      CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___((__int64)this, &v12, a3, a4);
    }
    *((_BYTE *)v5 + 36) &= ~1u;
    v4 = *((_BYTE *)v5 + 36);
  }
  if ( (v4 & 2) != 0 )
  {
    v10 = v5;
    CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___((__int64)this, &v10, a3, a4);
    *((_BYTE *)v5 + 36) &= ~2u;
  }
}
