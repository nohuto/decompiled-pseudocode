/*
 * XREFs of ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x18022FFE8
 * Callers:
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x18022EE00 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18022F3DC (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x18022E12C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_18022E12C.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180235330 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x180268CB0 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 */

void __fastcall CInteractionContextWrapper::_UpdateInteractionOutput(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        struct InteractionOutput *a3,
        __int64 a4)
{
  const struct MANIPULATION_TRANSFORM *v5; // rsi
  int v8; // edx
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  const struct DEVICE_INFO *v12; // rax
  const struct tagRECT *v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  const struct MANIPULATION_TRANSFORM *v17; // rcx
  __int64 v18; // rcx
  float v19; // [rsp+B8h] [rbp-80h] BYREF
  float v20; // [rsp+BCh] [rbp-7Ch] BYREF
  int v21; // [rsp+C0h] [rbp-78h] BYREF
  int v22; // [rsp+C4h] [rbp-74h] BYREF
  int v23; // [rsp+C8h] [rbp-70h] BYREF
  int v24; // [rsp+CCh] [rbp-6Ch] BYREF
  int v25; // [rsp+D0h] [rbp-68h] BYREF
  int v26; // [rsp+D4h] [rbp-64h] BYREF
  int v27; // [rsp+D8h] [rbp-60h] BYREF
  int v28; // [rsp+DCh] [rbp-5Ch] BYREF
  int v29; // [rsp+E0h] [rbp-58h] BYREF
  int v30; // [rsp+E4h] [rbp-54h] BYREF
  int v31; // [rsp+E8h] [rbp-50h] BYREF
  int v32; // [rsp+ECh] [rbp-4Ch] BYREF
  int v33; // [rsp+F0h] [rbp-48h] BYREF
  int v34; // [rsp+F4h] [rbp-44h] BYREF
  CInteractionContextWrapper *v35; // [rsp+F8h] [rbp-40h] BYREF
  __int128 v36; // [rsp+100h] [rbp-38h] BYREF
  int v37; // [rsp+110h] [rbp-28h]
  _QWORD v38[3]; // [rsp+118h] [rbp-20h] BYREF
  __int64 v39; // [rsp+130h] [rbp-8h]
  __int64 v40; // [rsp+138h] [rbp+0h]

  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 3);
  v5 = 0LL;
  *((_DWORD *)a3 + 11) = *((_DWORD *)a2 + 4);
  v8 = *(_DWORD *)a2;
  if ( ((v8 - 1) & 0xFFFFFFFC) == 0 && v8 != 3 )
  {
    *(_DWORD *)a3 = v8;
    *((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 1);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( *((_DWORD *)a2 + 19) == 2 )
      {
        if ( *((float *)a2 + 10) == 0.0 )
        {
          if ( *((float *)a2 + 11) != 0.0 )
            *((_DWORD *)a3 + 5) = 2;
        }
        else
        {
          *((_DWORD *)a3 + 5) = 1;
        }
      }
      else if ( *((_DWORD *)a2 + 19) == 1 )
      {
        *((_DWORD *)a3 + 5) = 0;
      }
      *((float *)a3 + 2) = *((float *)a2 + 5) + *((float *)a3 + 2);
      *((float *)a3 + 3) = *((float *)a2 + 6) + *((float *)a3 + 3);
      v9 = *((float *)a2 + 7);
      if ( v9 != 0.0 )
        *((float *)a3 + 4) = v9 * *((float *)a3 + 4);
      *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 15);
      *((_DWORD *)a3 + 7) = *((_DWORD *)a2 + 16);
      *((_DWORD *)a3 + 8) = *((_DWORD *)a2 + 17);
      *((_DWORD *)a3 + 9) = 0;
      *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 12);
      *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 13);
    }
  }
  v10 = *((float *)a3 + 2);
  v11 = *((float *)a3 + 3);
  v20 = v10;
  v19 = v11;
  v36 = 0LL;
  v37 = 0;
  if ( !CCommonRegistryData::m_fDisableInteractionOutputPrediction
    && !CCommonRegistryData::m_cForceDisableInteractionOutputPrediction
    && (*((_DWORD *)this + 60) & 0x180000) == 0 )
  {
    v12 = CPointerDeviceCache::Query(*((void **)this + 31));
    v13 = (const struct tagRECT *)(((unsigned __int64)v12 + 16) & -(__int64)(*((_BYTE *)v12 + 48) != 0));
    if ( (int)NtDCompositionGetFrameStatistics(v38, 0LL) >= 0 )
    {
      v14 = 1000LL * v38[2] / v39;
      v15 = 1000LL * v38[0] / v39;
      if ( *(_DWORD *)a2 == 1 && (v14 || v15 || 1000 * v40 / v39) )
      {
        v16 = OutputPredictionInteractionContext(*((_QWORD *)this + 3), 1000LL, v14, v15, 1000 * v40 / v39, &v36);
        v17 = (const struct MANIPULATION_TRANSFORM *)&v36;
        if ( v16 < 0 )
          v17 = 0LL;
        v5 = v17;
      }
      CInteractionContextTransformHelper::CalculatePrediction(
        (CInteractionContextWrapper *)((char *)this + 336),
        a2,
        v5,
        v13,
        *((_DWORD *)this + 81),
        *((float *)a3 + 2),
        *((float *)a3 + 3),
        &v20,
        &v19);
      v10 = v20;
      v11 = v19;
    }
  }
  if ( (unsigned int)dword_180342EF0 > 4 && (qword_180342F00 & 2) != 0 && (qword_180342F08 & 2) == qword_180342F08 )
  {
    v18 = *((unsigned int *)a3 + 4);
    v21 = *((_DWORD *)a3 + 11);
    v22 = *((_DWORD *)a3 + 10);
    v23 = *((_DWORD *)a3 + 9);
    v24 = *((_DWORD *)a3 + 8);
    v25 = *((_DWORD *)a3 + 7);
    v26 = *((_DWORD *)a3 + 6);
    v28 = DWORD1(v36);
    v29 = v36;
    v30 = *((_DWORD *)a2 + 11);
    v31 = *((_DWORD *)a2 + 10);
    v33 = *((_DWORD *)a3 + 3);
    v34 = *((_DWORD *)a3 + 2);
    v27 = v18;
    v32 = v18;
    v35 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_1802EA332,
      (__int64)a3,
      a4,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  *((float *)a3 + 2) = v10;
  *((float *)a3 + 3) = v11;
}
