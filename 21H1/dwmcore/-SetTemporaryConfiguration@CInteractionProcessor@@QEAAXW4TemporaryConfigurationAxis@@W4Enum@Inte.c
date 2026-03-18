/*
 * XREFs of ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18023014C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180034610 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x18022C3AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

ULONG __fastcall CInteractionProcessor::SetTemporaryConfiguration(
        _BYTE *a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  int v5; // esi
  __int64 v9; // r9
  __int64 v10; // rbx
  int v11; // r10d
  __int64 v12; // r15
  __int64 v13; // rcx
  ULONG result; // eax
  char *v15; // rdi
  char v16; // r8
  char v17; // dl
  unsigned int v18; // edx
  int v19; // edx
  int v20; // [rsp+80h] [rbp-1h] BYREF
  int v21; // [rsp+84h] [rbp+3h] BYREF
  int v22; // [rsp+88h] [rbp+7h] BYREF
  int v23; // [rsp+8Ch] [rbp+Bh] BYREF
  int v24; // [rsp+90h] [rbp+Fh] BYREF
  int v25; // [rsp+94h] [rbp+13h] BYREF
  int v26; // [rsp+98h] [rbp+17h] BYREF
  _BYTE *v27; // [rsp+A0h] [rbp+1Fh] BYREF
  int v28; // [rsp+E8h] [rbp+67h] BYREF
  ULONG v29; // [rsp+F0h] [rbp+6Fh] BYREF

  v5 = a4;
  v9 = 0LL;
  v10 = (__int64)&a1[(a3 != 0 ? 0x24 : 0) + 1272];
  v11 = -1;
  v12 = 3LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v11 = 1;
      v9 = 12LL;
    }
    else if ( a2 == 2 )
    {
      v11 = 2;
      v9 = 48LL;
    }
  }
  else
  {
    v11 = 0;
    v9 = 3LL;
  }
  v13 = a5;
  result = a5 | ~(_DWORD)v9;
  if ( v11 != -1
    && (*(_BYTE *)(v10 + 12LL * v11) != (_BYTE)v5 || (_BYTE)v5 && *(_DWORD *)(v10 + 12LL * v11 + 4) != result) )
  {
    *(_BYTE *)(v10 + 12LL * v11) = v5;
    *(_DWORD *)(v10 + 12LL * v11 + 4) = result;
    *(_DWORD *)(v10 + 12LL * v11 + 8) = v9;
    if ( !a3 )
    {
      a1[148] |= 1u;
      a1[308] |= 1u;
      a1[468] |= 1u;
      a1[628] |= 1u;
    }
  }
  if ( a3 == 1 )
  {
    a1[1264] &= ~2u;
    v15 = a1 + 1308;
    v16 = a1[1264];
    do
    {
      v17 = *v15;
      v15 += 12;
      v16 ^= (v16 ^ (v16 | (2 * v17))) & 2;
      a1[1264] = v16;
      --v12;
    }
    while ( v12 );
  }
  if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 2) != 0 && (qword_180346F08 & 2) == qword_180346F08 )
  {
    v18 = (unsigned __int8)a1[1264];
    v29 = result;
    v20 = v9;
    a5 = (v18 >> 1) & 1;
    v21 = v13;
    v23 = v5;
    v24 = v11;
    v25 = a3;
    v19 = *(_DWORD *)(v10 + 12LL * v11 + 4);
    v22 = *(unsigned __int8 *)(v10 + 12LL * v11);
    v28 = v19;
    v26 = a2;
    v27 = a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             v13,
             byte_1802EC9E9,
             3LL * v11,
             v9,
             (__int64)&v27,
             (__int64)&v26,
             (__int64)&v25,
             (__int64)&v24,
             (__int64)&v23,
             (__int64)&v22,
             (__int64)&v21,
             (__int64)&v20,
             (__int64)&v29,
             (__int64)&v28,
             (__int64)&a5);
  }
  return result;
}
