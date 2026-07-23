/*
 * XREFs of BcpDisplayProgress @ 0x1405C5170
 * Callers:
 *     BcpGetComponentOffsets @ 0x1405C537C (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C5770 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5934 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     BgpDisplayCharacterEx @ 0x1405C4604 (BgpDisplayCharacterEx.c)
 *     BcpConvertProgressToString @ 0x1405C49AC (BcpConvertProgressToString.c)
 *     BcpCursorLessThan @ 0x1405C4A88 (BcpCursorLessThan.c)
 *     BcpDisplayCriticalString @ 0x1405C4B7C (BcpDisplayCriticalString.c)
 */

__int64 __fastcall BcpDisplayProgress(unsigned int a1, unsigned int a2, __int64 a3)
{
  bool v5; // zf
  __int64 v6; // r14
  __int64 v7; // r9
  int v8; // edx
  UNICODE_STRING *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  UNICODE_STRING *v12; // rcx
  __int64 v13; // xmm0_8
  int v14; // r13d
  unsigned int v15; // ebx
  unsigned int v16; // esi
  int v17; // r12d
  int v18; // r15d
  unsigned int v19; // edi
  unsigned __int64 v21; // [rsp+48h] [rbp-29h]
  int v22; // [rsp+58h] [rbp-19h] BYREF
  int v23; // [rsp+5Ch] [rbp-15h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-11h] BYREF
  int v25; // [rsp+68h] [rbp-9h]
  __int64 v26; // [rsp+70h] [rbp-1h] BYREF
  int v27; // [rsp+78h] [rbp+7h]
  _QWORD v28[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v29; // [rsp+90h] [rbp+1Fh] BYREF

  v24 = 0LL;
  v25 = 0;
  v22 = 0;
  v5 = a1 == 1;
  v23 = 0;
  v6 = 9LL * (int)a2;
  v7 = a2;
  v8 = dword_140C10EF0[18 * a2 + 2];
  v9 = &stru_140C53E70;
  if ( !v5 )
    v9 = &stru_140C53E90;
  BcpDisplayCriticalString(&v9->Length, v8, a3, v7);
  v28[0] = 0x80000LL;
  v28[1] = &v29;
  BcpConvertProgressToString(a1, (__int64)v28);
  BcpDisplayCriticalString((unsigned __int16 *)v28, dword_140C10EF0[2 * v6 + 2], v10, a2);
  v12 = &stru_140C53E80;
  if ( a1 != 1 )
    v12 = &stru_140C53EA0;
  BcpDisplayCriticalString(&v12->Length, dword_140C10EF0[2 * v6 + 2], v11, a2);
  v13 = BcpCursor;
  v14 = dword_140C4C628;
  v26 = BcpCursor;
  v27 = dword_140C4C628;
  if ( BcpCursorLessThan(&v26) )
  {
    v15 = v26;
    v16 = HIDWORD(v26);
    v24 = v26;
    v17 = *(_DWORD *)(*(_QWORD *)(qword_140C53F30 + 24) + 40LL);
    if ( BcpTextBoxLeftEdgeOverride )
      v18 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
    else
      v18 = dword_140C10EF0[2 * v6 + 8] + dword_140C10EF0[2 * v6 + 4];
    if ( BcpTextBoxRightEdgeOverride )
      v19 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
    else
      v19 = dword_140C10EF0[2 * v6 + 8] + dword_140C10EF0[2 * v6 + 6] + dword_140C10EF0[2 * v6 + 4];
    while ( BcpCursorLessThan(&v24) )
    {
      if ( (int)BgpDisplayCharacterEx(0x20u, (__int64 *)qword_140C53F30, v15, v16, v17, v17, &v22, &v23, v21) < 0 )
        return 0LL;
      v15 += v22;
      LODWORD(v24) = v15;
      if ( v15 > v19 )
      {
        v16 += v23;
        v15 = v18;
        v24 = __PAIR64__(v16, v18);
      }
    }
    v13 = v26;
  }
  if ( (dword_140C134F0 & 0x1000000) == 0 )
  {
    BcpProgressEnd = v13;
    dword_140C13408 = v14;
  }
  return 0LL;
}
