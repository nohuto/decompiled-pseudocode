/*
 * XREFs of LookUpTableFlushComplete @ 0x27A994
 * Callers:
 *     _TlgUnregisterAggregateProvider@4 @ 0x27A48A (_TlgUnregisterAggregateProvider@4.c)
 *     ?TlgAggregateInternalProviderCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z @ 0x27A94A (-TlgAggregateInternalProviderCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z @ 0x27A966 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTO.c)
 *     TlgAggregateFlushTimerCallback @ 0x27B27B (TlgAggregateFlushTimerCallback.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByRef@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$0BA@@@ABU?$_tlgWrapperByRef@$07@@44ABU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1B63F0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByRef@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U.c)
 *     FlushLookUpTableBucket @ 0x1B698C (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x27B304 (UpdateInternalStatsOnFlush.c)
 */

void __thiscall LookUpTableFlushComplete(_DWORD *this)
{
  int v1; // ecx
  bool v2; // zf
  unsigned int v3; // ebx
  int v4; // eax
  _DWORD *v5; // esi
  int v7; // [esp+10h] [ebp-70h] BYREF
  int v8; // [esp+14h] [ebp-6Ch] BYREF
  int v9; // [esp+18h] [ebp-68h] BYREF
  int v10; // [esp+1Ch] [ebp-64h] BYREF
  int v11; // [esp+20h] [ebp-60h] BYREF
  _DWORD *v12; // [esp+24h] [ebp-5Ch] BYREF
  _DWORD *v13; // [esp+28h] [ebp-58h] BYREF
  _DWORD *v14; // [esp+2Ch] [ebp-54h] BYREF
  _DWORD *v15; // [esp+30h] [ebp-50h] BYREF
  void *v16; // [esp+34h] [ebp-4Ch]
  _DWORD v17[2]; // [esp+38h] [ebp-48h] BYREF
  _BYTE v18[40]; // [esp+40h] [ebp-40h] BYREF
  _DWORD v19[4]; // [esp+6Ch] [ebp-14h] BYREF

  if ( this[32] )
  {
    UpdateInternalStatsOnFlush();
    v2 = *(_QWORD *)(v1 + 152) == 0LL;
    v16 = (void *)(v1 + 152);
    v3 = 0;
    if ( !v2 )
    {
      if ( (unsigned int)dword_266320 > 5 && _tlgKeywordOn(&dword_266320, 0x400000000000LL) )
      {
        v17[1] = 0;
        v17[0] = this[42];
        v4 = this[47];
        v5 = (_DWORD *)(*(_DWORD *)(this[50] + 4) - 16);
        v19[0] = *v5++;
        v19[1] = *v5++;
        v19[2] = *v5;
        v19[3] = v5[1];
        v7 = v4;
        v8 = this[46];
        v9 = this[45];
        v10 = this[44];
        v11 = this[43];
        v12 = this + 38;
        v13 = v17;
        v14 = this + 40;
        v15 = v19;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)this,
          byte_257807,
          (int)this,
          (int)this,
          (int *)&v15,
          (int *)&v14,
          (int *)&v13,
          (int *)&v12,
          (int)&v11,
          (int)&v10,
          (int)&v9,
          (int)&v8,
          (int)&v7);
      }
      memset(v18, 0, sizeof(v18));
      qmemcpy(v16, v18, 0x28u);
      v1 = (int)this;
    }
    do
    {
      FlushLookUpTableBucket(v1, v3);
      v1 = (int)this;
      ++v3;
    }
    while ( v3 < 0x20 );
  }
}
