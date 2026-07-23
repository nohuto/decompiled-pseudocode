/*
 * XREFs of MiReplenishPageSlist @ 0x140323450
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140215F28 (MiGetPerfectColorHeadPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 * Callees:
 *     MiPageListCollision @ 0x14021981C (MiPageListCollision.c)
 *     MiUpdateZeroFreeBitmap @ 0x14023C364 (MiUpdateZeroFreeBitmap.c)
 *     MiIncreaseAvailablePages @ 0x140309C30 (MiIncreaseAvailablePages.c)
 *     MiIsFreeZeroPfnCold @ 0x14030DE70 (MiIsFreeZeroPfnCold.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x1403239F4 (MiNodeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x1403240D0 (MiDecreaseAvailablePages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x140407BC0 (InterlockedPushListSList.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x140560004 (MiNotifyPageHeat.c)
 */

void __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3)
{
  int v3; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rbx
  _SLIST_ENTRY *v21; // r14
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  volatile signed __int32 *v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  unsigned __int64 v28; // rdx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  int v34; // [rsp+20h] [rbp-128h]
  unsigned int v36; // [rsp+28h] [rbp-120h]
  _QWORD *v37; // [rsp+30h] [rbp-118h]
  unsigned __int64 v38; // [rsp+38h] [rbp-110h]
  volatile signed __int64 *v39; // [rsp+40h] [rbp-108h]
  __int64 v40; // [rsp+48h] [rbp-100h]
  __int64 v41; // [rsp+50h] [rbp-F8h]
  _SLIST_ENTRY *List; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v43; // [rsp+60h] [rbp-E8h]
  __int128 v44; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v45[8]; // [rsp+80h] [rbp-C8h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v5 = a2;
  v44 = 0LL;
  memset(v45, 0, sizeof(v45));
  if ( (v3 & 0x20) == 0 )
  {
    v40 = 16LL * a3;
    v41 = *(_QWORD *)(a1 + 8LL * a2 + 4200);
    v6 = *(unsigned __int16 *)(v40 + v41);
    v7 = *(unsigned int *)(a1 + 6300);
    v8 = a3;
    if ( v6 < v7 )
    {
      v9 = (int)v7 - v6;
      v10 = v9 + 64;
      v43 = *(_QWORD *)(a1 + 16) + 4544 * ((unsigned __int64)a3 >> byte_140C4DECC);
      v11 = a2 == 0;
      v36 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DECD));
      v12 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DECD));
      if ( v11 )
      {
        v13 = *(_QWORD *)(a1 + 2176);
        v39 = (volatile signed __int64 *)(a1 + 2240);
        if ( MiNodeFreeZeroPages(v43, v12, 4098LL) < v10 || *(_BYTE *)(a1 + 4829) == 1 )
          return;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 2184);
        v39 = (volatile signed __int64 *)(a1 + 2304);
        if ( MiNodeFreeZeroPages(v43, v12, 4096LL) < v10 )
          return;
      }
      v14 = *(_QWORD *)(v13 + 40 * v8);
      v15 = (_QWORD *)(v13 + 40 * v8);
      v37 = v15;
      if ( v9 <= v14 )
        v14 = v9;
      if ( *(_QWORD *)(a1 + 7104) - v14 >= 0x420 )
      {
        DWORD2(v44) = 16;
        v34 = HvlEnlightenments & 0x200000;
        v16 = 0LL;
        if ( !(unsigned int)MiDecreaseAvailablePages(a1, v14, 1056LL) )
          goto LABEL_58;
        v19 = v15[2];
        v18 = 0xFFFFFA8000000000uLL;
        v20 = 48 * v19 - 0x58000000000LL;
        v38 = v14;
        v21 = 0LL;
        List = (_SLIST_ENTRY *)v20;
        while ( 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            v30 = DWORD1(v44);
LABEL_50:
            v14 -= v16;
            if ( v16 )
            {
              if ( v30 )
              {
                LODWORD(v44) = 1;
                MiNotifyPageHeat(&v44);
              }
              v37[2] = v19;
              if ( v19 == 0xFFFFFFFFFLL )
              {
                MiUpdateZeroFreeBitmap(a1, v5, a3, 0);
                v37[3] = 0xFFFFFFFFFLL;
              }
              else
              {
                MiSetPfnBlink(v20, 0xFFFFFFFFFLL, 0);
              }
              InterlockedPushListSList((PSLIST_HEADER)(v40 + v41), List, v21, v16);
              *v37 -= v16;
              v33 = -v16;
              _InterlockedExchangeAdd64(v39, v33);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 8 * v5 + 4128), v33);
              if ( (unsigned int)MmNumberOfChannels > 1 )
              {
                v17 = v5 + 2LL * v36;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 8 * v17 + 4216), v33);
              }
            }
LABEL_58:
            if ( v14 )
              MiIncreaseAvailablePages(a1, v14, v17, v18);
            return;
          }
          v21 = (_SLIST_ENTRY *)v20;
          if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero((v20 + 0x58000000000LL) / 48);
          if ( dword_140C4E70C == 1 )
          {
            LOBYTE(v22) = 1;
            v23 = (v20 + 0x58000000000LL) / 48;
            v24 = (((((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                 + (unsigned __int8)((__int64)((unsigned __int128)((v20 + 0x58000000000LL)
                                                                 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F;
            v25 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v23 >> 5));
            if ( (unsigned __int64)(v24 + 1) > 0x20 )
            {
              if ( ((((((unsigned __int128)((v20 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                   + (unsigned __int8)((__int64)((unsigned __int128)((v20 + 0x58000000000LL)
                                                                   * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F) != 0 )
              {
                v27 = 32 - (v23 & 0x1F);
                _InterlockedOr(v25++, ((1 << v27) - 1) << v24);
                v22 = 1LL - v27;
                if ( v22 >= 0x20 )
                {
                  v28 = v22 >> 5;
                  v22 += -32LL * (v22 >> 5);
                  do
                  {
                    *v25++ = -1;
                    --v28;
                  }
                  while ( v28 );
                }
                if ( !v22 )
                  goto LABEL_28;
              }
              v26 = (1 << v22) - 1;
            }
            else
            {
              v26 = 1 << v24;
            }
            _InterlockedOr(v25, v26);
          }
LABEL_28:
          *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 5;
          if ( (*(_BYTE *)(v20 + 34) & 8) != 0 )
            MiPageListCollision(v20);
          *(_QWORD *)(v20 + 24) &= 0xFFFFFFF000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v34 && (LOBYTE(v29) = MiIsFreeZeroPfnCold(v20), v29) )
          {
            v30 = DWORD1(v44);
            if ( DWORD1(v44) < 0x10 )
            {
              *((_QWORD *)v45 + DWORD1(v44)) = v19 << 12;
              v30 = ++DWORD1(v44);
            }
          }
          else
          {
            v30 = DWORD1(v44);
          }
          v17 = 0xFFFFFFFFFLL;
          v19 = *(_QWORD *)v20 & 0xFFFFFFFFFLL;
          v18 = 0xFFFFFA8000000000uLL;
          if ( v19 == 0xFFFFFFFFFLL )
            v20 = 0LL;
          else
            v20 = 48 * v19 - 0x58000000000LL;
          v31 = (__int64)v21[1].Next ^ (LODWORD(v21[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
          if ( v31 && qword_140C4DF80 )
          {
            if ( (v31 & 0x10) != 0 )
              LODWORD(v31) = v31 & 0xFFFFFFEF;
            else
              LODWORD(v31) = ~(_DWORD)qword_140C4DF80 & v31;
          }
          v32 = (unsigned int)v31 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DF80 )
          {
            if ( (qword_140C4DF80 & v32) != 0 )
              v32 = (unsigned int)v31 | 0xFFFFFFFE00000010uLL;
            else
              v32 |= qword_140C4DF80;
          }
          ++v16;
          v21[1].Next = (_SLIST_ENTRY *)v32;
          v11 = v38-- == 1;
          v21->Next = (_SLIST_ENTRY *)v20;
          if ( v11 )
            goto LABEL_50;
        }
      }
    }
  }
}
