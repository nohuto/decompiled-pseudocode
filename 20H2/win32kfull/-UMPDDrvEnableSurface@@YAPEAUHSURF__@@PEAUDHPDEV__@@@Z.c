/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C01536B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C0016DD8 (_tlgKeywordOn.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0071E78 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C007249C (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0072730 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0272EF8 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rdi
  UMPDOBJ *v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rax
  int v11; // edx
  size_t Size; // [rsp+28h] [rbp-19h]
  int *v14; // [rsp+40h] [rbp-1h]
  int v15; // [rsp+48h] [rbp+7h] BYREF
  int v16; // [rsp+4Ch] [rbp+Bh] BYREF
  int v17; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+58h] [rbp+17h] BYREF
  __int64 v19; // [rsp+60h] [rbp+1Fh] BYREF
  UMPDOBJ *v20; // [rsp+68h] [rbp+27h] BYREF
  __int128 v21; // [rsp+70h] [rbp+2Fh] BYREF
  __int128 v22; // [rsp+80h] [rbp+3Fh]

  v2 = 0LL;
  v18 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v3 = v20;
  v21 = 0LL;
  v22 = 0LL;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0x300000020LL;
    *(_QWORD *)&v22 = *(_QWORD *)v20;
    *((_QWORD *)&v22 + 1) = a1;
    LODWORD(Size) = 8;
    v4 = UMPDOBJ::Thunk(v20, &v21, 0x20u, &v18, Size);
    v6 = v18;
    if ( v4 == -1 )
      v6 = 0LL;
    if ( v6 )
    {
      LOBYTE(v5) = 5;
      v7 = HmgShareLockCheck(v6, v5);
      v18 = v7;
      if ( v7 )
      {
        if ( !*(_QWORD *)(v7 + 48) )
        {
          if ( (unsigned int)dword_1C032A3F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C032A3F8, 0x400000000000LL) )
            goto LABEL_15;
          v15 = 0;
          v14 = &v15;
          v17 = 73876;
          v10 = &v17;
LABEL_14:
          v16 = 1;
          v19 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            1LL,
            (int)&unk_1C02F2AEF,
            v8,
            v9,
            (__int64)v10,
            (__int64)&v19,
            (__int64)&v16,
            (__int64)v14);
LABEL_15:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v18);
          goto LABEL_30;
        }
        v11 = *(_DWORD *)(v7 + 112);
        if ( (v11 & 0x40000) == 0 )
        {
          if ( (unsigned int)dword_1C032A3F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C032A3F8, 0x400000000000LL) )
            goto LABEL_15;
          v17 = 0;
          v14 = &v17;
          v15 = 71980;
          v10 = &v15;
          goto LABEL_14;
        }
        if ( *(_WORD *)(v7 + 100) == 1 && ((v11 & 1) == 0 || (v11 & 0x20) == 0 || (v11 & 8) == 0) )
          v6 = 0LL;
        if ( (v11 & 0x4000000) != 0 )
          v6 = 0LL;
        if ( *((_DWORD *)v3 + 106) )
          UMPDOBJ::vClient((UMPDOBJ *)1, (_QWORD *)(v7 + 24));
        if ( v6 )
          SURFREF::vKeepIt((SURFREF *)&v18);
      }
      else
      {
        v6 = 0LL;
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v18);
    }
    v2 = v6;
  }
LABEL_30:
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v2;
}
