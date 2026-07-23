/*
 * XREFs of MiReplenishPageSlist @ 0x140230AA0
 * Callers:
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1403412FC (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x140231044 (MiNodeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x140231720 (MiDecreaseAvailablePages.c)
 *     MiIncreaseAvailablePages @ 0x1402F2250 (MiIncreaseAvailablePages.c)
 *     MiUpdateZeroFreeBitmap @ 0x14031BAB0 (MiUpdateZeroFreeBitmap.c)
 *     MiIsFreeZeroPfnCold @ 0x14034D3C0 (MiIsFreeZeroPfnCold.c)
 *     MiPageListCollision @ 0x140350B60 (MiPageListCollision.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x140405370 (InterlockedPushListSList.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x14055E2F4 (MiNotifyPageHeat.c)
 */

unsigned __int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rbx
  _SLIST_ENTRY *v19; // r14
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  volatile signed __int32 *v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  int v31; // [rsp+20h] [rbp-128h]
  unsigned int v33; // [rsp+28h] [rbp-120h]
  _QWORD *v34; // [rsp+30h] [rbp-118h]
  unsigned __int64 v35; // [rsp+38h] [rbp-110h]
  volatile signed __int64 *v36; // [rsp+40h] [rbp-108h]
  __int64 v37; // [rsp+48h] [rbp-100h]
  __int64 v38; // [rsp+50h] [rbp-F8h]
  _SLIST_ENTRY *List; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v40; // [rsp+60h] [rbp-E8h]
  __int128 v41; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v42[8]; // [rsp+80h] [rbp-C8h] BYREF

  result = *(unsigned int *)(a1 + 4);
  v5 = a2;
  v41 = 0LL;
  memset(v42, 0, sizeof(v42));
  if ( (result & 0x20) == 0 )
  {
    v37 = 16LL * a3;
    v38 = *(_QWORD *)(a1 + 8LL * a2 + 4200);
    result = *(unsigned __int16 *)(v37 + v38);
    v6 = *(unsigned int *)(a1 + 6300);
    v7 = a3;
    if ( result < v6 )
    {
      v8 = (int)v6 - result;
      v9 = v8 + 64;
      v40 = *(_QWORD *)(a1 + 16) + 4544 * ((unsigned __int64)a3 >> byte_140C4DD0C);
      v10 = a2 == 0;
      v33 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DD0D));
      v11 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DD0D));
      if ( v10 )
      {
        v12 = *(_QWORD *)(a1 + 2176);
        v36 = (volatile signed __int64 *)(a1 + 2240);
        result = MiNodeFreeZeroPages(v40, v11, 4098LL);
        if ( result < v9 || *(_BYTE *)(a1 + 4829) == 1 )
          return result;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 2184);
        v36 = (volatile signed __int64 *)(a1 + 2304);
        result = MiNodeFreeZeroPages(v40, v11, 4096LL);
        if ( result < v9 )
          return result;
      }
      v13 = *(_QWORD *)(v12 + 40 * v7);
      v14 = (_QWORD *)(v12 + 40 * v7);
      v34 = v14;
      if ( v8 <= v13 )
        v13 = v8;
      result = *(_QWORD *)(a1 + 7104) - v13;
      if ( result >= 0x420 )
      {
        DWORD2(v41) = 16;
        v31 = HvlEnlightenments & 0x200000;
        v15 = 0LL;
        result = MiDecreaseAvailablePages(a1, v13, 1056LL, 0LL);
        if ( !(_DWORD)result )
          goto LABEL_58;
        v17 = v14[2];
        result = 0xFFFFFA8000000000uLL;
        v18 = 48 * v17 - 0x58000000000LL;
        v35 = v13;
        v19 = 0LL;
        List = (_SLIST_ENTRY *)v18;
        while ( 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            v27 = DWORD1(v41);
LABEL_50:
            v13 -= v15;
            if ( v15 )
            {
              if ( (_DWORD)v27 )
              {
                LODWORD(v41) = 1;
                MiNotifyPageHeat(&v41, v27, v16, 0xFFFFFA8000000000uLL);
              }
              v34[2] = v17;
              if ( v17 == 0xFFFFFFFFFLL )
              {
                MiUpdateZeroFreeBitmap(a1, (unsigned int)v5, a3, 0LL);
                v34[3] = 0xFFFFFFFFFLL;
              }
              else
              {
                MiSetPfnBlink(v18, 0xFFFFFFFFFLL, 0);
              }
              InterlockedPushListSList((PSLIST_HEADER)(v37 + v38), List, v19, v15);
              *v34 -= v15;
              v30 = -v15;
              _InterlockedExchangeAdd64(v36, v30);
              result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8 * v5 + 4128), v30);
              if ( (unsigned int)MmNumberOfChannels > 1 )
              {
                result = v33;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8 * (v5 + 2LL * v33) + 4216), v30);
              }
            }
LABEL_58:
            if ( v13 )
              return MiIncreaseAvailablePages(a1, v13);
            return result;
          }
          v19 = (_SLIST_ENTRY *)v18;
          if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero((v18 + 0x58000000000LL) / 48);
          if ( dword_140C4E54C == 1 )
          {
            LOBYTE(v20) = 1;
            v21 = (v18 + 0x58000000000LL) / 48;
            v22 = (((((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                 + (unsigned __int8)((__int64)((unsigned __int128)((v18 + 0x58000000000LL)
                                                                 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F;
            v23 = (volatile signed __int32 *)(qword_140C4E5A8 + 4 * (v21 >> 5));
            if ( (unsigned __int64)(v22 + 1) > 0x20 )
            {
              if ( ((((((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                   + (unsigned __int8)((__int64)((unsigned __int128)((v18 + 0x58000000000LL)
                                                                   * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F) != 0 )
              {
                v25 = 32 - (v21 & 0x1F);
                _InterlockedOr(v23++, ((1 << v25) - 1) << v22);
                v20 = 1LL - v25;
                if ( v20 >= 0x20 )
                {
                  v26 = v20 >> 5;
                  v20 += -32LL * (v20 >> 5);
                  do
                  {
                    *v23++ = -1;
                    --v26;
                  }
                  while ( v26 );
                }
                if ( !v20 )
                  goto LABEL_28;
              }
              v24 = (1 << v20) - 1;
            }
            else
            {
              v24 = 1 << v22;
            }
            _InterlockedOr(v23, v24);
          }
LABEL_28:
          *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 5;
          if ( (*(_BYTE *)(v18 + 34) & 8) != 0 )
            MiPageListCollision(v18, 1LL);
          *(_QWORD *)(v18 + 24) &= 0xFFFFFFF000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v31 && (unsigned int)MiIsFreeZeroPfnCold(v18) )
          {
            v27 = DWORD1(v41);
            if ( DWORD1(v41) < 0x10 )
            {
              *((_QWORD *)v42 + DWORD1(v41)) = v17 << 12;
              v27 = (unsigned int)++DWORD1(v41);
            }
          }
          else
          {
            v27 = DWORD1(v41);
          }
          v16 = 0xFFFFFFFFFLL;
          v17 = *(_QWORD *)v18 & 0xFFFFFFFFFLL;
          if ( v17 == 0xFFFFFFFFFLL )
            v18 = 0LL;
          else
            v18 = 48 * v17 - 0x58000000000LL;
          v28 = (__int64)v19[1].Next ^ (LODWORD(v19[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
          if ( v28 && qword_140C4DDC0 )
          {
            if ( (v28 & 0x10) != 0 )
              LODWORD(v28) = v28 & 0xFFFFFFEF;
            else
              LODWORD(v28) = ~(_DWORD)qword_140C4DDC0 & v28;
          }
          v29 = (unsigned int)v28 | 0xFFFFFFFE00000000uLL;
          result = qword_140C4DDC0;
          if ( qword_140C4DDC0 )
          {
            if ( (qword_140C4DDC0 & v29) != 0 )
              v29 |= 0x10uLL;
            else
              v29 |= qword_140C4DDC0;
          }
          ++v15;
          v19[1].Next = (_SLIST_ENTRY *)v29;
          v10 = v35-- == 1;
          v19->Next = (_SLIST_ENTRY *)v18;
          if ( v10 )
            goto LABEL_50;
        }
      }
    }
  }
  return result;
}
