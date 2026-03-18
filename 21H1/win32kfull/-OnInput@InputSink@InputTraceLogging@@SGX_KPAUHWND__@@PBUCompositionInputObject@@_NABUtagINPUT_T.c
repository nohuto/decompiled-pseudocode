/*
 * XREFs of ?OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_TRANSFORM@@@Z @ 0xF1E96
 * Callers:
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8 (-Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1CSmartFloatingSave@@QAE@XZ @ 0x13C826 (--1CSmartFloatingSave@@QAE@XZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444444444444444444@Z @ 0x15E117 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

void __userpurge InputTraceLogging::InputSink::OnInput(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned __int64 a3,
        HWND a4,
        const struct CompositionInputObject *a5,
        bool a6,
        const struct tagINPUT_TRANSFORM *a7)
{
  unsigned __int64 v9; // [esp+Ch] [ebp-80h] BYREF
  int v10; // [esp+14h] [ebp-78h] BYREF
  int v11; // [esp+18h] [ebp-74h] BYREF
  int v12; // [esp+1Ch] [ebp-70h] BYREF
  int v13; // [esp+20h] [ebp-6Ch] BYREF
  int v14; // [esp+24h] [ebp-68h] BYREF
  int v15; // [esp+28h] [ebp-64h] BYREF
  int v16; // [esp+2Ch] [ebp-60h] BYREF
  int v17; // [esp+30h] [ebp-5Ch] BYREF
  int v18; // [esp+34h] [ebp-58h] BYREF
  int v19; // [esp+38h] [ebp-54h] BYREF
  int v20; // [esp+3Ch] [ebp-50h] BYREF
  int v21; // [esp+40h] [ebp-4Ch] BYREF
  int v22; // [esp+44h] [ebp-48h] BYREF
  int v23; // [esp+48h] [ebp-44h] BYREF
  int v24; // [esp+4Ch] [ebp-40h] BYREF
  int v25; // [esp+50h] [ebp-3Ch] BYREF
  int v26; // [esp+54h] [ebp-38h] BYREF
  int v27; // [esp+58h] [ebp-34h] BYREF
  int v28; // [esp+5Ch] [ebp-30h] BYREF
  int v29; // [esp+60h] [ebp-2Ch] BYREF
  struct _KFLOATING_SAVE FloatSave; // [esp+64h] [ebp-28h] BYREF
  char v31; // [esp+84h] [ebp-8h]

  if ( InputTraceLogging::Enabled(0) )
  {
    v31 = 0;
    if ( CSmartFloatingSave::Save(&FloatSave) >= 0 )
    {
      if ( (unsigned int)dword_2689E8 > 5 && _tlgKeywordOn(&dword_2689E8, 4LL) )
      {
        v9 = a3;
        v29 = *((_DWORD *)a5 + 15);
        v28 = *((_DWORD *)a5 + 14);
        v27 = *((_DWORD *)a5 + 13);
        v26 = *((_DWORD *)a5 + 12);
        v25 = *((_DWORD *)a5 + 11);
        v24 = *((_DWORD *)a5 + 10);
        v23 = *((_DWORD *)a5 + 9);
        v22 = *((_DWORD *)a5 + 8);
        v21 = *((_DWORD *)a5 + 7);
        v20 = *((_DWORD *)a5 + 6);
        v19 = *((_DWORD *)a5 + 5);
        v18 = *((_DWORD *)a5 + 4);
        v17 = *((_DWORD *)a5 + 3);
        v16 = *((_DWORD *)a5 + 2);
        v15 = *((_DWORD *)a5 + 1);
        v14 = *(_DWORD *)a5;
        v10 = (int)&v9;
        v13 = 0;
        v12 = a1;
        v11 = a2;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_2689E8,
          (int)&unk_255386,
          (int)a5,
          (int)a5,
          (int)&v10,
          (int)&v11,
          (int)&v12,
          (int)&v13,
          (int)&v14,
          (int)&v15,
          (int)&v16,
          (int)&v17,
          (int)&v18,
          (int)&v19,
          (int)&v20,
          (int)&v21,
          (int)&v22,
          (int)&v23,
          (int)&v24,
          (int)&v25,
          (int)&v26,
          (int)&v27,
          (int)&v28,
          (int)&v29);
      }
      KeRestoreFloatingPointState(&FloatSave);
      v31 = 0;
    }
    CSmartFloatingSave::~CSmartFloatingSave(&FloatSave);
  }
}
