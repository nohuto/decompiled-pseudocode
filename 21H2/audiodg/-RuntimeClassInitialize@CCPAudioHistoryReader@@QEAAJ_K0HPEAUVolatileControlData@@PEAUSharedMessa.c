/*
 * XREFs of ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0HPEAUVolatileControlData@@PEAUSharedMessageQueueItem@@III0@Z @ 0x140060154
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI551@Z @ 0x14005FA00 (--$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44333@Z @ 0x14005FB1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@-$_tlgWriteTemplate@$.c)
 */

__int64 __fastcall CCPAudioHistoryReader::RuntimeClassInitialize(
        CCPAudioHistoryReader *this,
        struct VolatileControlData *a2,
        __int64 a3,
        __int64 a4,
        struct VolatileControlData *a5,
        struct SharedMessageQueueItem *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10)
{
  __int64 v10; // r11
  struct VolatileControlData *v11; // r10
  signed __int64 v12; // rsi
  struct SharedMessageQueueItem *v13; // r14
  unsigned __int64 v15; // r12
  unsigned int v16; // edi
  unsigned int v17; // r13d
  BOOL v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rsi
  double v30; // xmm0_8
  int v31; // eax
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v33; // [rsp+B0h] [rbp+48h] BYREF
  CCPAudioHistoryReader *v34; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+58h]
  int v36; // [rsp+C8h] [rbp+60h]

  v36 = a4;
  v35 = a3;
  v10 = a3;
  v11 = a5;
  v12 = (signed __int64)a2;
  v13 = a6;
  v15 = a10;
  *((_DWORD *)this + 21) = a7;
  *((_DWORD *)this + 22) = a8;
  *((_DWORD *)this + 23) = a9;
  *((_QWORD *)this + 7) = v11;
  *((_QWORD *)this + 8) = v13;
  *((_QWORD *)this + 12) = v15;
  v16 = *((_DWORD *)v11 + 2);
  v17 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL);
  if ( (struct VolatileControlData *)a3 != a2 )
  {
    if ( (unsigned int)dword_14008F010 > 4 )
    {
      a5 = a2;
      a7 = v17;
      a9 = v16;
      v34 = this;
      a10 = *((_QWORD *)v13 + 8 * (unsigned __int64)v17 + 5);
      v33 = *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5);
      LODWORD(a6) = *((_DWORD *)this + 21);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)this,
        byte_14007C6AC,
        a3,
        a4,
        (__int64)&v34,
        (__int64)&a6,
        (__int64)&a9,
        (__int64)&a7,
        (__int64)&v33,
        (__int64)&a10,
        (__int64)&a5);
      LODWORD(a4) = v36;
      v10 = v35;
    }
    v18 = !v17
       || *((_QWORD *)v13 + 8 * (unsigned __int64)(v17 - 1) + 5) - *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5) >= v15;
    if ( (_DWORD)a4 || !v18 )
      v19 = 0LL;
    else
      v19 = 10000000LL;
    v20 = *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5);
    v21 = v20 + v19;
    if ( v12 < v20 + v19 )
    {
      v22 = -2147024774;
      v23 = 103LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
        (const char *)v22);
      return v22;
    }
    if ( !(_DWORD)a4 && v20 < v21 )
    {
      do
      {
        v25 = (unsigned __int64)((v16 + 1) % *((_DWORD *)this + 23)) << 6;
        v16 = (v16 + 1) % *((_DWORD *)this + 23);
      }
      while ( *(_QWORD *)((char *)v13 + v25 + 40) < v21 );
    }
    if ( v16 == v17 )
    {
LABEL_21:
      v22 = -2147023728;
      v23 = 137LL;
      goto LABEL_14;
    }
    while ( *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5) <= v12 )
    {
      v16 = (v16 + 1) % *((_DWORD *)this + 23);
      if ( v16 == v17 )
        goto LABEL_21;
    }
    if ( v16 )
      v26 = v16 - 1;
    else
      v26 = *((_DWORD *)this + 23) - 1;
    v27 = a8;
    *((_DWORD *)this + 18) = v26;
    if ( *((_QWORD *)v13 + 8 * (unsigned __int64)v26 + 5)
       + (unsigned int)(int)((double)*((int *)v13 + 16 * (unsigned __int64)v26 + 14) * 10000000.0 / (double)v27 + 0.5) <= v12 )
    {
      v26 = v16;
      *((_DWORD *)this + 18) = v16;
      v12 = *((_QWORD *)v13 + 8 * (unsigned __int64)v16 + 5);
    }
    v28 = v26;
    v29 = v12 - *((_QWORD *)v13 + 8 * (unsigned __int64)v26 + 5);
    if ( v29 < 0 )
      v30 = (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1))
          + (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1));
    else
      v30 = (double)(int)v29;
    *((_DWORD *)this + 20) = *((_DWORD *)this + 21) * (int)(v30 * (double)v27 / 10000000.0 + 0.5);
    if ( v26 == v17 )
    {
LABEL_33:
      v22 = -2147023728;
      v23 = 155LL;
      goto LABEL_14;
    }
    while ( *((_QWORD *)v13 + 8 * (unsigned __int64)v28 + 5) != v10 )
    {
      v28 = (v28 + 1) % *((_DWORD *)this + 23);
      if ( v28 == v17 )
        goto LABEL_33;
    }
    if ( v28 )
      v31 = v28 - 1;
    else
      v31 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 19) = v31;
  }
  return 0LL;
}
