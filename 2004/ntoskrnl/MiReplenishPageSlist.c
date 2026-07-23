/*
 * XREFs of MiReplenishPageSlist @ 0x14031DC00
 * Callers:
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiGetPerfectColorHeadPage @ 0x14031D940 (MiGetPerfectColorHeadPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MiDecreaseAvailablePages @ 0x1402B6F90 (MiDecreaseAvailablePages.c)
 *     MiIncreaseAvailablePages @ 0x140317010 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14031869C (MiPageListCollision.c)
 *     MiIsFreeZeroPfnCold @ 0x14031C638 (MiIsFreeZeroPfnCold.c)
 *     MiNodeFreeZeroPages @ 0x14031E1A4 (MiNodeFreeZeroPages.c)
 *     MiUpdateZeroFreeBitmap @ 0x14031E428 (MiUpdateZeroFreeBitmap.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     InterlockedPushListSList @ 0x1403FF0A0 (InterlockedPushListSList.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 *     MiNotifyPageHeat @ 0x14055A924 (MiNotifyPageHeat.c)
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
  int v27; // eax
  int v28; // edx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  int v32; // [rsp+20h] [rbp-128h]
  unsigned int v34; // [rsp+28h] [rbp-120h]
  _QWORD *v35; // [rsp+30h] [rbp-118h]
  unsigned __int64 v36; // [rsp+38h] [rbp-110h]
  volatile signed __int64 *v37; // [rsp+40h] [rbp-108h]
  __int64 v38; // [rsp+48h] [rbp-100h]
  __int64 v39; // [rsp+50h] [rbp-F8h]
  _SLIST_ENTRY *List; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v41; // [rsp+60h] [rbp-E8h]
  __int128 v42; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v43[8]; // [rsp+80h] [rbp-C8h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v5 = a2;
  v42 = 0LL;
  memset(v43, 0, sizeof(v43));
  if ( (v3 & 0x20) == 0 )
  {
    v38 = 16LL * a3;
    v39 = *(_QWORD *)(a1 + 8LL * a2 + 4200);
    v6 = *(unsigned __int16 *)(v38 + v39);
    v7 = *(unsigned int *)(a1 + 6300);
    v8 = a3;
    if ( v6 < v7 )
    {
      v9 = (int)v7 - v6;
      v10 = v9 + 64;
      v41 = *(_QWORD *)(a1 + 16) + 4544 * ((unsigned __int64)a3 >> byte_140C4DC8C);
      v11 = a2 == 0;
      v34 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DC8D));
      v12 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_140C4DC8D));
      if ( v11 )
      {
        v13 = *(_QWORD *)(a1 + 2176);
        v37 = (volatile signed __int64 *)(a1 + 2240);
        if ( MiNodeFreeZeroPages(v41, v12, 4098LL) < v10 || *(_BYTE *)(a1 + 4829) == 1 )
          return;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 2184);
        v37 = (volatile signed __int64 *)(a1 + 2304);
        if ( MiNodeFreeZeroPages(v41, v12, 4096LL) < v10 )
          return;
      }
      v14 = *(_QWORD *)(v13 + 40 * v8);
      v15 = (_QWORD *)(v13 + 40 * v8);
      v35 = v15;
      if ( v9 <= v14 )
        v14 = v9;
      if ( *(_QWORD *)(a1 + 7104) - v14 >= 0x420 )
      {
        DWORD2(v42) = 16;
        v32 = HvlEnlightenments & 0x200000;
        v16 = 0LL;
        if ( !(unsigned int)MiDecreaseAvailablePages(a1, v14, 0x420uLL, 0) )
          goto LABEL_58;
        v17 = v15[2];
        v18 = 48 * v17 - 0x58000000000LL;
        v36 = v14;
        v19 = 0LL;
        List = (_SLIST_ENTRY *)v18;
        while ( 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            v28 = DWORD1(v42);
LABEL_50:
            v14 -= v16;
            if ( v16 )
            {
              if ( v28 )
              {
                LODWORD(v42) = 1;
                MiNotifyPageHeat(&v42);
              }
              v35[2] = v17;
              if ( v17 == 0xFFFFFFFFFLL )
              {
                MiUpdateZeroFreeBitmap(a1, (unsigned int)v5, a3, 0LL);
                v35[3] = 0xFFFFFFFFFLL;
              }
              else
              {
                MiSetPfnBlink(v18, 0xFFFFFFFFFLL, 0);
              }
              InterlockedPushListSList((PSLIST_HEADER)(v38 + v39), List, v19, v16);
              *v35 -= v16;
              v31 = -v16;
              _InterlockedExchangeAdd64(v37, v31);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8 * v5 + 4128), v31);
              if ( (unsigned int)MmNumberOfChannels > 1 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8 * (v5 + 2LL * v34) + 4216), v31);
            }
LABEL_58:
            if ( v14 )
              MiIncreaseAvailablePages(a1, v14);
            return;
          }
          v19 = (_SLIST_ENTRY *)v18;
          if ( !(_DWORD)v5 && (MiFlags & 0x80u) != 0 && (++dword_140C4E5CC & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero((v18 + 0x58000000000LL) / 48);
          if ( dword_140C4E4CC == 1 )
          {
            LOBYTE(v20) = 1;
            v21 = (v18 + 0x58000000000LL) / 48;
            v22 = (((((unsigned __int128)((v18 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                 + (unsigned __int8)((__int64)((unsigned __int128)((v18 + 0x58000000000LL)
                                                                 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)) & 0x1F;
            v23 = (volatile signed __int32 *)(qword_140C4E528 + 4 * (v21 >> 5));
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
            MiPageListCollision(v18);
          *(_QWORD *)(v18 + 24) &= 0xFFFFFFF000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v32 && (LOBYTE(v27) = MiIsFreeZeroPfnCold(v18), v27) )
          {
            v28 = DWORD1(v42);
            if ( DWORD1(v42) < 0x10 )
            {
              *((_QWORD *)v43 + DWORD1(v42)) = v17 << 12;
              v28 = ++DWORD1(v42);
            }
          }
          else
          {
            v28 = DWORD1(v42);
          }
          v17 = *(_QWORD *)v18 & 0xFFFFFFFFFLL;
          if ( v17 == 0xFFFFFFFFFLL )
            v18 = 0LL;
          else
            v18 = 48 * v17 - 0x58000000000LL;
          v29 = (__int64)v19[1].Next ^ (LODWORD(v19[1].Next) ^ ((_DWORD)v5 << 12)) & 0xF000;
          if ( v29 && qword_140C4DD40 )
          {
            if ( (v29 & 0x10) != 0 )
              LODWORD(v29) = v29 & 0xFFFFFFEF;
            else
              LODWORD(v29) = ~(_DWORD)qword_140C4DD40 & v29;
          }
          v30 = (unsigned int)v29 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DD40 )
          {
            if ( (qword_140C4DD40 & v30) != 0 )
              v30 = (unsigned int)v29 | 0xFFFFFFFE00000010uLL;
            else
              v30 |= qword_140C4DD40;
          }
          ++v16;
          v19[1].Next = (_SLIST_ENTRY *)v30;
          v11 = v36-- == 1;
          v19->Next = (_SLIST_ENTRY *)v18;
          if ( v11 )
            goto LABEL_50;
        }
      }
    }
  }
}
