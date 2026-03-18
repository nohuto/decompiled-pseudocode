/*
 * XREFs of ?xxxSendMousePromotion@@YGXABUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x17DC6B
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YGXXZ @ 0x17D847 (-xxxProcessMousePromotionQueue@@YGXXZ.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@@Z @ 0x146888 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

void __fastcall xxxSendMousePromotion(int a1, int a2)
{
  int v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // edi
  int v5; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  int v15; // edi
  int v16; // edx
  BOOL v17; // eax
  unsigned int v18; // ecx
  int v19; // ebx
  LONG y; // eax
  int v21; // eax
  _DWORD v22[3]; // [esp+10h] [ebp-48h] BYREF
  DWORD v23; // [esp+1Ch] [ebp-3Ch]
  int v24; // [esp+20h] [ebp-38h]
  int v25; // [esp+24h] [ebp-34h] BYREF
  int v26; // [esp+28h] [ebp-30h] BYREF
  int v27; // [esp+2Ch] [ebp-2Ch]
  int v28; // [esp+30h] [ebp-28h]
  LONG HighPart; // [esp+34h] [ebp-24h]
  char v30; // [esp+3Bh] [ebp-1Dh]
  __int16 v31; // [esp+3Ch] [ebp-1Ch] BYREF
  __int16 v32; // [esp+3Eh] [ebp-1Ah]
  int v33; // [esp+40h] [ebp-18h]
  int v34; // [esp+44h] [ebp-14h]
  int v35; // [esp+48h] [ebp-10h]
  int v36; // [esp+4Ch] [ebp-Ch]
  int v37; // [esp+50h] [ebp-8h]

  v24 = a2;
  v33 = 0;
  v2 = a1;
  v34 = 0;
  v37 = 0;
  v28 = a1;
  v31 = -2;
  v32 = 3;
  v3 = MEMORY[0xFFDF0324];
  v4 = MEMORY[0xFFDF0320];
  v5 = MEMORY[0xFFDF0004];
  HighPart = MEMORY[0xFFDF0004];
  if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
  {
    do
    {
      _mm_pause();
      v3 = MEMORY[0xFFDF0324];
      v4 = MEMORY[0xFFDF0320];
    }
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
    v2 = v28;
    v5 = HighPart;
  }
  v27 = ((((unsigned int)v5 * (unsigned __int64)v4) >> 24) + (((unsigned int)v5 * (unsigned __int64)v3) << 8)) >> 32;
  v28 = (((unsigned int)v5 * (unsigned __int64)v4) >> 24) + ((v5 * v3) << 8);
  PerformanceCounter = KeQueryPerformanceCounter(0);
  LowPart = PerformanceCounter.LowPart;
  v8 = (v28 - *(_DWORD *)(v2 + 24)) << 8;
  HighPart = PerformanceCounter.HighPart;
  v23 = PerformanceCounter.LowPart;
  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 64LL) )
  {
    v22[1] = HighPart;
    v25 = (int)v22;
    v22[0] = LowPart;
    v26 = (int)"MousePromotion";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      byte_25406A,
      v9,
      v9,
      &v25,
      (const char **)&v26);
  }
  v10 = *(_DWORD *)(v2 + 12);
  if ( v10 == 3 )
  {
    v11 = *(unsigned __int16 *)(v2 + 40);
    v32 |= 0x40u;
    v12 = v8 | v11;
    v13 = (*(_BYTE *)(v2 + 44) & 0x40) == 0;
    v37 = v12;
    if ( v13 )
      goto LABEL_13;
  }
  else
  {
    if ( v10 != 2 )
      goto LABEL_13;
    v14 = *(unsigned __int16 *)(v2 + 40);
    v32 |= 0x10u;
    v12 = v8 | v14;
  }
  v37 = v12 | 0x80;
LABEL_13:
  v15 = 0;
  v16 = *(_DWORD *)(v2 + 44);
  if ( *(_DWORD *)(_gpsi + 1588) )
    v17 = (*(_DWORD *)(v2 + 44) & 1) == 0;
  else
    v17 = (*(_DWORD *)(v2 + 44) & 1) != 0;
  v18 = *(_DWORD *)(v2 + 16);
  v19 = 1;
  if ( (v18 & 0x40000) != 0 )
  {
    LOWORD(v33) = (v17 ? 2 : 8) | v33;
    v15 = (v18 >> 15) & 1;
  }
  else if ( (v18 & 0x10000) != 0 )
  {
    LOWORD(v33) = (v17 ? 1 : 4) | v33;
  }
  if ( _gptCursorAsync != *(struct tagPOINT *const *)(v2 + 4)
    || (y = _gptCursorAsync->y, v30 = 0, y != *(_DWORD *)(v2 + 8)) )
  {
    v30 = 1;
  }
  if ( (v16 & 2) != 0 && (!(unsigned __int8)Enforced() || (*(_BYTE *)(v2 + 44) & 4) == 0) )
    v19 = 0;
  if ( v30 )
  {
    v35 = *(_DWORD *)(v2 + 4);
    v36 = *(_DWORD *)(v2 + 8);
    v21 = 8246;
  }
  else
  {
    v35 = 0;
    v36 = 0;
    v21 = 56;
  }
  if ( v24 )
    v21 |= 0x101u;
  if ( v15 )
    v21 |= 0x1000u;
  if ( v19 )
    v21 |= 0x40u;
  SynthesizeMouseInput(0, &v31, v28, v27, v23, HighPart, v21, 0);
}
