/*
 * XREFs of BcpDisplayErrorInformation @ 0x1405C4EE8
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5934 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     BcpConvertBugDataToString @ 0x1405C4914 (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalCharacter @ 0x1405C4AB0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1405C4B7C (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x1405C55F8 (BcpSanitizeDriverName.c)
 */

__int64 __fastcall BcpDisplayErrorInformation(unsigned int a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // ebp
  __int64 v7; // rsi
  int v9; // edx
  unsigned __int64 *v10; // r14
  __int64 v11; // r8
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  __int64 v15; // r8
  int v16; // r15d
  int v17; // edx
  __int64 v18; // r8
  __int16 v19; // cx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rbx
  int v23; // edx
  int v24; // edx
  __int16 v25; // cx
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // r12
  int v29; // r13d
  __int64 v30; // r8
  __int64 result; // rax
  int v32; // [rsp+20h] [rbp-F8h] BYREF
  int v33; // [rsp+24h] [rbp-F4h]
  __int64 v34; // [rsp+28h] [rbp-F0h]
  unsigned int v35; // [rsp+30h] [rbp-E8h]
  _DWORD v36[2]; // [rsp+38h] [rbp-E0h] BYREF
  char *v37; // [rsp+40h] [rbp-D8h]
  __int64 v38; // [rsp+48h] [rbp-D0h]
  char v39; // [rsp+50h] [rbp-C8h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v36[1] = 0;
  v33 = a2;
  v38 = a5;
  v32 = BcpCursor;
  v9 = dword_140C10EF0[18 * a1 + 1];
  v10 = (unsigned __int64 *)a3;
  BcpTextBoxLeftEdgeOverride = (__int64)&v32;
  BcpDisplayCriticalString(&stru_140C53ED0.Length, v9, a3, a1);
  BcpDisplayCriticalString(&stru_140C53EE0.Length, dword_140C10EF0[18 * v7 + 1], v11, (unsigned int)v7);
  v12 = dword_140C10EF0[18 * v7 + 11];
  LODWORD(BcpCursor) = v6;
  HIDWORD(BcpCursor) = v12 + dword_140C4C628;
  v14 = dword_140C10EF0[18 * v7];
  dword_140C4C628 += v12 + v12;
  v13 = dword_140C4C628;
  BcpDisplayCriticalString(&stru_140C53E20.Length, v14, v15, (unsigned int)v7);
  v16 = v13 + dword_140C10EF0[18 * v7 + 11];
  HIDWORD(BcpCursor) = v13;
  LODWORD(BcpCursor) = v6;
  v17 = dword_140C10EF0[18 * v7];
  dword_140C4C628 = v16;
  BcpDisplayCriticalString(&stru_140C53EC0.Length, v17, v18, (unsigned int)v7);
  BcpDisplayCriticalCharacter(v19, dword_140C10EF0[18 * v7]);
  BcpDisplayCriticalString((unsigned __int16 *)(a5 + 16), dword_140C10EF0[18 * v7], v20, (unsigned int)v7);
  v22 = 0LL;
  if ( a4 )
  {
    v23 = dword_140C10EF0[18 * v7 + 11];
    LODWORD(BcpCursor) = v6;
    dword_140C4C628 = v16 + v23;
    v24 = dword_140C10EF0[18 * v7];
    HIDWORD(BcpCursor) = v16;
    BcpDisplayCriticalString(&stru_140C53EB0.Length, v24, v21, (unsigned int)v7);
    BcpDisplayCriticalCharacter(v25, dword_140C10EF0[18 * v7]);
    v36[0] = 0x800000;
    v37 = &v39;
    BcpSanitizeDriverName(a4, v36);
    BcpDisplayCriticalString((unsigned __int16 *)v36, dword_140C10EF0[18 * v7], v26, (unsigned int)v7);
  }
  v27 = 4LL;
  v34 = BcpCursor;
  v28 = v38;
  v29 = v33;
  v35 = dword_140C4C628;
  BcpCursor = 0LL;
  dword_140C4C628 = 0;
  do
  {
    BcpConvertBugDataToString(*v10, v22 + v28 + 32);
    if ( BcpDisplayParameters || (a6 & 8) != 0 && v29 == 317 )
    {
      BcpDisplayCriticalString((unsigned __int16 *)(v22 + v28 + 32), dword_140C10EF0[18 * v7], v30, (unsigned int)v7);
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_140C4C628;
    }
    v22 += 16LL;
    ++v10;
    --v27;
  }
  while ( v27 );
  result = v35;
  BcpTextBoxLeftEdgeOverride = 0LL;
  BcpCursor = v34;
  dword_140C4C628 = v35;
  return result;
}
