/*
 * XREFs of MiReplenishPageSlist @ 0x1402EA3B0
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1402EA0F8 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiDecreaseAvailablePages @ 0x140224310 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x1402EA954 (MiNodeFreeZeroPages.c)
 *     MiUpdateZeroFreeBitmap @ 0x1402EABD8 (MiUpdateZeroFreeBitmap.c)
 *     MiIncreaseAvailablePages @ 0x140346350 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x1403479DC (MiPageListCollision.c)
 *     MiIsFreeZeroPfnCold @ 0x14034B978 (MiIsFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x1403FDE10 (InterlockedPushListSList.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x14055A2D4 (MiNotifyPageHeat.c)
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
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdi
  unsigned __int64 v19; // r9
  __int64 v20; // rbx
  _SLIST_ENTRY *v21; // r14
  unsigned __int64 v22; // rdx
  volatile signed __int32 *v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  int v28; // [rsp+20h] [rbp-128h]
  unsigned int v30; // [rsp+28h] [rbp-120h]
  _QWORD *v31; // [rsp+30h] [rbp-118h]
  unsigned __int64 v32; // [rsp+38h] [rbp-110h]
  volatile signed __int64 *v33; // [rsp+40h] [rbp-108h]
  __int64 v34; // [rsp+48h] [rbp-100h]
  __int64 v35; // [rsp+50h] [rbp-F8h]
  _SLIST_ENTRY *List; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v37; // [rsp+60h] [rbp-E8h]
  __int128 v38; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v39[8]; // [rsp+80h] [rbp-C8h] BYREF

  result = *(unsigned int *)(a1 + 4);
  v5 = a2;
  v38 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( (result & 0x20) == 0 )
  {
    v34 = 16LL * a3;
    v35 = *(_QWORD *)(a1 + 8LL * a2 + 4200);
    result = *(unsigned __int16 *)(v34 + v35);
    v6 = *(unsigned int *)(a1 + 6300);
    v7 = a3;
    if ( result < v6 )
    {
      v8 = (int)v6 - result;
      v9 = v8 + 64;
      v37 = *(_QWORD *)(a1 + 16) + 4544 * ((unsigned __int64)a3 >> byte_140C4DDCC);
      v10 = a2 == 0;
      v30 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DDCD));
      v11 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DDCD));
      if ( v10 )
      {
        v12 = *(_QWORD *)(a1 + 2176);
        v33 = (volatile signed __int64 *)(a1 + 2240);
        result = MiNodeFreeZeroPages(v37, v11, 4098LL);
        if ( result < v9 || *(_BYTE *)(a1 + 4829) == 1 )
          return result;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 2184);
        v33 = (volatile signed __int64 *)(a1 + 2304);
        result = MiNodeFreeZeroPages(v37, v11, 4096LL);
        if ( result < v9 )
          return result;
      }
      v13 = *(_QWORD *)(v12 + 40 * v7);
      v14 = (_QWORD *)(v12 + 40 * v7);
      v31 = v14;
      if ( v8 <= v13 )
        v13 = v8;
      result = *(_QWORD *)(a1 + 7104) - v13;
      if ( result >= 0x420 )
      {
        DWORD2(v38) = 16;
        v28 = HvlEnlightenments & 0x200000;
        v15 = 0LL;
        result = MiDecreaseAvailablePages(a1, v13, 0x420uLL, 0);
        if ( !(_DWORD)result )
          goto LABEL_58;
        v18 = v14[2];
        v19 = 0xFFFFFA8000000000uLL;
        result = 0xFFFFFA8000000000uLL;
        v20 = 48 * v18 - 0x58000000000LL;
        v32 = v13;
        v21 = 0LL;
        List = (_SLIST_ENTRY *)v20;
        while ( 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            LODWORD(v16) = DWORD1(v38);
LABEL_50:
            v13 -= v15;
            if ( v15 )
            {
              if ( (_DWORD)v16 )
              {
                LODWORD(v38) = 1;
                MiNotifyPageHeat(&v38);
              }
              v31[2] = v18;
              if ( v18 == 0xFFFFFFFFFLL )
              {
                MiUpdateZeroFreeBitmap(a1, (unsigned int)v5, a3, 0LL);
                v31[3] = 0xFFFFFFFFFLL;
              }
              else
              {
                MiSetPfnBlink(v20, 0xFFFFFFFFFLL, 0);
              }
              InterlockedPushListSList((PSLIST_HEADER)(v34 + v35), List, v21, v15);
              *v31 -= v15;
              v27 = -v15;
              _InterlockedExchangeAdd64(v33, v27);
              result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 8 * v5 + 4128), v27);
              if ( (unsigned int)MmNumberOfChannels > 1 )
              {
                result = v30;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 8 * (v5 + 2LL * v30) + 4216), v27);
              }
            }
LABEL_58:
            if ( v13 )
              return MiIncreaseAvailablePages(a1, v13);
            return result;
          }
          v21 = (_SLIST_ENTRY *)v20;
          if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0 && (++dword_140C4E70C & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero((v20 + 0x58000000000LL) / 48);
            v19 = 0xFFFFFA8000000000uLL;
          }
          if ( dword_140C4E60C == 1 )
          {
            v17 = 1LL;
            v22 = (v20 + 0x58000000000LL) / 48;
            v19 = (((((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                 + (unsigned __int8)((__int64)((unsigned __int128)((v20 + 0x58000000000LL)
                                                                 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F;
            v23 = (volatile signed __int32 *)(qword_140C4E668 + 4 * (v22 >> 5));
            if ( v19 + 1 > 0x20 )
            {
              if ( ((((((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                   + (unsigned __int8)((__int64)((unsigned __int128)((v20 + 0x58000000000LL)
                                                                   * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F) != 0 )
              {
                v24 = 32 - (v22 & 0x1F);
                v16 = (unsigned int)(((1 << v24) - 1) << v19);
                _InterlockedOr(v23++, v16);
                v17 = 1LL - v24;
                if ( v17 >= 0x20 )
                {
                  v16 = v17 >> 5;
                  v17 += -32LL * (v17 >> 5);
                  do
                  {
                    *v23++ = -1;
                    --v16;
                  }
                  while ( v16 );
                }
                if ( !v17 )
                  goto LABEL_28;
              }
              v16 = (unsigned int)((1 << v17) - 1);
            }
            else
            {
              v16 = (unsigned int)(1 << v19);
            }
            _InterlockedOr(v23, v16);
          }
LABEL_28:
          *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 5;
          if ( (*(_BYTE *)(v20 + 34) & 8) != 0 )
            MiPageListCollision(v20, 1LL);
          *(_QWORD *)(v20 + 24) &= 0xFFFFFFF000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v28 && (unsigned int)MiIsFreeZeroPfnCold(v20, v16, v17, v19) )
          {
            v16 = DWORD1(v38);
            if ( DWORD1(v38) < 0x10 )
            {
              *((_QWORD *)v39 + DWORD1(v38)) = v18 << 12;
              v16 = (unsigned int)++DWORD1(v38);
            }
          }
          else
          {
            v16 = DWORD1(v38);
          }
          v17 = 0xFFFFFFFFFLL;
          v18 = *(_QWORD *)v20 & 0xFFFFFFFFFLL;
          v19 = 0xFFFFFA8000000000uLL;
          if ( v18 == 0xFFFFFFFFFLL )
            v20 = 0LL;
          else
            v20 = 48 * v18 - 0x58000000000LL;
          v25 = (__int64)v21[1].Next ^ (LODWORD(v21[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
          if ( v25 && qword_140C4DE80 )
          {
            if ( (v25 & 0x10) != 0 )
              LODWORD(v25) = v25 & 0xFFFFFFEF;
            else
              LODWORD(v25) = ~(_DWORD)qword_140C4DE80 & v25;
          }
          v26 = (unsigned int)v25 | 0xFFFFFFFE00000000uLL;
          result = qword_140C4DE80;
          if ( qword_140C4DE80 )
          {
            if ( (qword_140C4DE80 & v26) != 0 )
              v26 |= 0x10uLL;
            else
              v26 |= qword_140C4DE80;
          }
          ++v15;
          v21[1].Next = (_SLIST_ENTRY *)v26;
          v10 = v32-- == 1;
          v21->Next = (_SLIST_ENTRY *)v20;
          if ( v10 )
            goto LABEL_50;
        }
      }
    }
  }
  return result;
}
