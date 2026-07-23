/*
 * XREFs of MiScrubNodeLargePages @ 0x1408D8928
 * Callers:
 *     MiScrubNode @ 0x14056428C (MiScrubNode.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiGetLargePageListHeadBase @ 0x140556D48 (MiGetLargePageListHeadBase.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 */

__int64 __fastcall MiScrubNodeLargePages(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 *v6; // r9
  __int64 v7; // r15
  unsigned __int64 v8; // r11
  _QWORD *v9; // r8
  __int64 v10; // r10
  __int64 v11; // rdx
  int v12; // esi
  unsigned int NextPageColor; // eax
  int v14; // r10d
  int *v15; // rcx
  unsigned int v16; // r12d
  _QWORD *v17; // r13
  int v18; // r11d
  unsigned int i; // edi
  unsigned int j; // r14d
  int k; // esi
  __int64 LargePageListHeadBase; // rax
  unsigned int v23; // ecx
  _QWORD *v24; // r15
  unsigned int v25; // eax
  int v26; // eax
  int v27; // [rsp+50h] [rbp-118h]
  int v28; // [rsp+54h] [rbp-114h]
  unsigned int m; // [rsp+58h] [rbp-110h]
  int v30; // [rsp+5Ch] [rbp-10Ch]
  unsigned __int64 v31; // [rsp+60h] [rbp-108h]
  unsigned __int64 v32; // [rsp+68h] [rbp-100h]
  unsigned __int64 v33; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+78h] [rbp-F0h]
  int *v35; // [rsp+80h] [rbp-E8h]
  __int64 v36; // [rsp+88h] [rbp-E0h]
  __int128 v37; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v38[128]; // [rsp+A0h] [rbp-C8h] BYREF

  v3 = a3;
  v36 = a1;
  v37 = 0LL;
  result = (__int64)memset(v38, 0, sizeof(v38));
  v6 = MiLargePageSizes;
  v7 = *(_QWORD *)(a2 + 16) + 4544 * v3;
  v8 = 0LL;
  v34 = v7;
  v9 = (_QWORD *)v7;
  v10 = 3LL;
  do
  {
    v11 = *v9 + v9[1];
    if ( v11 )
      v8 += *v6 * v11;
    v9 += 134;
    ++v6;
    --v10;
  }
  while ( v10 );
  v32 = v8;
  if ( v8 )
  {
    v12 = 0;
    v31 = 0LL;
    v27 = 0;
    MiInitializePageColorBase(0LL, v3 + 1, (__int64)&v37);
    NextPageColor = MiGetNextPageColor((__int64)&v37);
    result = MiCreateUltraThreadContext((__int64)v38, NextPageColor, v14 + 7);
    if ( (_DWORD)result )
    {
      v15 = dword_140C4DFC0;
      v16 = 0;
      v35 = dword_140C4DFC0;
      v17 = (_QWORD *)v7;
      do
      {
        if ( *v17 + v17[1] )
        {
          v18 = 0;
          v30 = 0;
          v28 = *v15;
          do
          {
            for ( i = 1; ; --i )
            {
              if ( !i && !v12 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(a2 + 6340));
                v27 = 1;
              }
              for ( j = 0; j < MmNumberOfChannels; ++j )
              {
                for ( k = 0; k <= 3; ++k )
                {
                  LargePageListHeadBase = MiGetLargePageListHeadBase(v18, v7, v16, j, i, k);
                  v23 = v28;
                  v24 = (_QWORD *)LargePageListHeadBase;
                  v25 = 0;
                  for ( m = 0; v25 < v23; m = v25 )
                  {
                    if ( (_QWORD *)*v24 != v24 )
                    {
                      v33 = v32 - v31;
                      v26 = MiScrubNodeLargePageList(a2, v3, v16, v18, i, j, k, &v33, v36, (__int64)v38);
                      v31 += v33;
                      if ( v31 >= v32 || !v26 )
                        goto LABEL_29;
                      v18 = v30;
                      v25 = m;
                      v23 = v28;
                    }
                    ++v25;
                    v24 += 3;
                  }
                  v7 = v34;
                }
              }
              v12 = v27;
              if ( !i )
                break;
            }
            v30 = ++v18;
          }
          while ( v18 <= 1 );
          v15 = v35;
        }
        ++v15;
        ++v16;
        v17 += 134;
        v35 = v15;
      }
      while ( v16 < 3 );
LABEL_29:
      if ( v27 == 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 6340));
      return MiDeleteUltraThreadContext((__int64)v38);
    }
  }
  return result;
}
