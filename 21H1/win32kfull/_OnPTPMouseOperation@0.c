/*
 * XREFs of _OnPTPMouseOperation@0 @ 0x178BB9
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@@Z @ 0x146888 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?ConvertPTPMouseEventToMouseInputData@@YGXPBUtagPTPMOUSEEVENT@@PAU_MOUSE_INPUT_DATA@@@Z @ 0x178604 (-ConvertPTPMouseEventToMouseInputData@@YGXPBUtagPTPMOUSEEVENT@@PAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?UnqueuePTPMouseEvent@@YG_NPAUtagPTPMOUSEEVENT@@0PA_N@Z @ 0x178899 (-UnqueuePTPMouseEvent@@YG_NPAUtagPTPMOUSEEVENT@@0PA_N@Z.c)
 */

void __stdcall OnPTPMouseOperation()
{
  int v0; // edi
  int v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // edx
  struct tagPTPMOUSEEVENT *v6; // [esp+0h] [ebp-B0h]
  bool *v7; // [esp+4h] [ebp-ACh]
  char v8; // [esp+Fh] [ebp-A1h] BYREF
  int v9; // [esp+10h] [ebp-A0h]
  int v10; // [esp+14h] [ebp-9Ch] BYREF
  int v11; // [esp+18h] [ebp-98h] BYREF
  int *v12; // [esp+1Ch] [ebp-94h] BYREF
  _DWORD v13[2]; // [esp+20h] [ebp-90h] BYREF
  int v14[10]; // [esp+28h] [ebp-88h] BYREF
  int v15[11]; // [esp+50h] [ebp-60h] BYREF
  _BYTE v16[24]; // [esp+7Ch] [ebp-34h] BYREF
  _BYTE v17[24]; // [esp+94h] [ebp-1Ch] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v12, "PTPMouseOperation", 0);
  memset(v16, 0, sizeof(v16));
  v8 = 0;
  memset(v17, 0, sizeof(v17));
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, 0x28u);
  while ( UnqueuePTPMouseEvent(v15, v14, (struct tagPTPMOUSEEVENT *)&v8, v6, v7) )
  {
    ConvertPTPMouseEventToMouseInputData(v14, (int)v16);
    v0 = v14[5];
    v1 = v14[4];
    v2 = 8 * ((v14[3] & 1) == 0) + 1888;
    v9 = v2;
    if ( (unsigned int)dword_2689E8 > 4 )
    {
      if ( _tlgKeywordOn(&dword_2689E8, 64LL) )
      {
        v13[0] = v1;
        v11 = (int)v13;
        v13[1] = v0;
        v10 = (int)"PTPMouseOperation";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>>(
          (int)&dword_2689E8,
          byte_25406A,
          v3,
          v3,
          &v11,
          (const char **)&v10);
      }
      v2 = v9;
    }
    v4 = v14[0];
    if ( v8 && v14[0] == v15[0] )
    {
      ConvertPTPMouseEventToMouseInputData(v15, (int)v17);
      SynthesizeMouseInputWithNextPreview(v4, v16, v14[6], v14[7], v1, v0, v14[8], v9, v5);
    }
    else
    {
      SynthesizeMouseInput(v14[0], v16, v14[6], v14[7], v1, v0, v2, v14[8]);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v12);
}
